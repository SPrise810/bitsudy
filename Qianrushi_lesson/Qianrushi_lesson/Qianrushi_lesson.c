#define CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//socket()函数
//打开虚拟机查看一下代码
// Linux 查看函数内部的代码 是 man 3 accept
//头文件为   #include<sys/socket.h>
// int socket(int domain,int type,int protocol)这些是函数的参数
//domian是用来确定使用哪个网络协议族   IPV4  IPV6协议，那么AF_INET:  ipv4，AF_INET6: IPV6
//他说他要写一下
//type:TCP、UDP  协议类型  SOCK_STREAM   TCP类型，SOCK_DRGRAM   UDP协议
// rrotocol ： 这个参数一般不用，给0就行
// 
//   协议TCP（较安全，三次握手四次挥手）  UDP报文协议，发出来不管有没有接收到它就发送
// TCP会有客户端的接受，服务器确认后会进行第二次发送，UDP不管接收到了没有，直接就发送
//  
// socket函数的返回值为   获取一个本地套接字  。
// 函数执行成功，返回一个本地的套接字
// 失败： 返回-1
//  
// 
// connect 函数
// 链接函数，主要用于客户端
// 功能是连接服务器的一个函数，因为常用所以才讲
// #include<sys/socket.h>
// int connect(int socket,const struct sockaddr *address,socklen_t address_len);
// 函数的参数说一下：  
// socket   =    本地套接字
// address  =    网络信息结构体的首地址
// 所以说使用这个函数之前，后先要把网络信息结构体填充了
// 返回值  ：  成功返回0
// 失败返回-1
// 如何填充网络信息结构体，
// struct sockaddr_in{
// sa_family_t sin_family;
// in_port_t sin_prot;
// struct in_addr sin_addr;
// };
// 这就是网络信息结构体的原型
// 
// 另外一个函数：
// 看看图，是绑定服务器的套接字
// bind ()函数  用于服务器
// #include<sys/socket.h>
// int bind(int socket,const struct sockaddr *address,socklen_t address_len);
// socke 本地网卡套接字；
// address 网络信息结构体地址
// address_len 结构体的大小/尺寸
//返回值   成功为0  失败返回-1
// 
// 监听  listen 函数   用于服务器
// #include<sys/socket.h>
// int listen (int socket, int backog);
// 这些东西他说还是蛮简单的，我日你爹
// socket 本地网卡的套接字  成功返回0     失败返回-1
// 
// 
// accept 函数阻塞，阻塞等待客户端的链接
// 看看函数原型
// int accept(int socket,struct sockaddr *restrict address,socklen_t *restrict address_len);
// 功能是  获得一个网络通信套接字
// 参数：  socket  本地网卡套接字
//        address   网络信息结构体
//		  address_len 信息结构体尺寸
// 返回值： 一个新的网络套接字，可以进行通信
//
// 从而产生read（） recv()函数和  write（） send()函数   
// 他说都一样就说一个 ：
// 把常用的写写得了
// 
// recv 函数
// #include<sys/socket.h>
// sszie_t recv(int socket,void *buffer,size_t length,int flags);
// socket  网络套接字
// buffer  内存缓冲区
// length 接收的内存长度
// flags  一般来讲，写个0就行
// 返回值  是一个无符号整型 ，返回一个接收的字节数
// 失败返回-1  如果关闭了返回  0
// 成功返回实际接收到的字节数
// 失败返回-1  
// 
// send函数--recv网络           read write 比较通常
// #include<sys/socket.h>
// ssize_t send(int socket,const void *buffer,size_t length,int flags);
// socket网络套接字
// 服务器的套接字是通过accept函数记住
// buffer 就是内存缓冲区
// length 发出的字节数大小
// flags  一般写个0就完了
// 参数 
// 功能
// 返回值  发出的字节数
// 其他的返回负一
// 
//
// close()函数
// 标识符需要回收
// 看看它是个什么东西
// #include<unistd.h>
// int close(int fd);
// 功能就是关闭套接字
// 这就是搭建服务器和客户端的函数原型
// 
//我们开始干他哈哈哈
//自己写一个纯服务器哈
// 
// 实现一个TCP服务器：
// 1.获取一个本地网卡的套接字（相当于前台） 如果是服务器就是本地套接字，如果是客户端，既是本地套接字，也是网络套接字）
// 2.填充网络信息结构体
// 3.将本地网卡套接字绑定到本地的网络信息结构体->（1.端口号，2.IP协议类型）
// 4.监听本地网卡套接字。
// 5.阻塞等待客户端的链接请求 
// 6.当有客户端连接时，返回一个新的网络通信套接字，使用这个套接字 进行网络通信（业务部门这才是真正使用的套接字）
// 7.通过这个网络套接字，向客户端发出数据，或者接收数据
// 我们开始写一写。
// 
// 
#include<stdio.h>
#include<sys/socket.h>
#include<string.h>
#include<sys/types.h>
#include<arpa/inset.h> //转换大小端的宏，机器系统都是小端存储， 
#include<unstd.h>
int main()
{
	//开始进入构建服务器的步骤
	int host_socket;
	int net_socket;//网络通信套接字
	//构建信息结构体
	struct sockaddr_in serverSockAddr;//本地客户端的信息结构体
	//使用驼峰法命名
	strcut sockaddr_in clientSocketAddr;//网络客户端的网络信息结构体
	int ret;//用作相关返回值使用
	char recv_buf[1024] = { 0 };
	char send_buf[1024] = { 0 };
	//初始化用的，完成。
	
	//1.使用socket函数构建本地网卡套接字
	host_socket=socket(AF_INET,SOCK_STREAM,0)；
		//AF_INET是IPV4，  IPV4用TCP协议，即SOCK_STREAM
		if (host_socket == -1)
		{
			perror("create socket failed");
			return -1;
		}
	    //2.绑定服务器IP以及端口号
	    //2.1构建网络信息结构体
	serverSockAddr.sin_family = AF_INET;//结构体成员，代表协议族，协议族是IPV4

	serverSockAddr.sin_port = htons(8888);//端口号
	serverSockAddr.sin_addr.s_addr = htons(INADDR_ANY);
	//本机中的任意一张网卡进来都可以链接
	//类似于这个意思
	//2.2 开始绑定 
	//接受一下函数的返回值，仅用于判断
	ret = bind(host_socket, (struct sockaddr*)&serverSockAddr, sizeof(serverSockAddr));
		//进行结构体指针类型强制转换，然后&获取地址
	if (ret == -1)
	{
		//报错
		perror("服务器绑定失败");
			//就是错误返回，这样就不需要printf，还得用格式符，乱七八糟的是不是
		return -1;//绑定失败，返回负一呗
	}
	printf("服务器绑定成功\n");
	//3.监听本地网卡套接字
	ret = listen(host_socket, 0);//数字随便写都行，他就那么说的
	if (ret == -1)
	{
		perror("服务器监听失败");
			return -1;
	}
	//4.阻塞等待客户端的链接，并获取一个新的网络套接字
	//因为我们获取网络套接字，大小需要进行核对，所以需要提供sizeof客户端的链接地址
	//因为客户端发过来一个信息，我们要保存到一个结构体，需要维持结构体大小确定
	net_socket_size = sizeof(clientSocketAddr);
	net_socket = accept(host_socket, (struct socketaddr*)&clientSocketAddr, &net_socket_size);
	if (net_socket == -1)
	{
		perror("获取套接字失败");//一般不会失败
		return -1;
	}
	//获得了网络套接字后，也获得了一个新的套接字，那么下一步就可以开始通讯了
	//只要有一个套接字过来证明就有新的链接过来了，我们可以打印一下
	printf("有客户端链接成功\n");
	//5.实现网络通信
	//send 和 resev函数
	//我们使用while循环
	//只要我们的电脑不关机，那么就永远获取客户发来的相关信息
	while (1)
	{
		//获取客户端的相关信息
		recv(net_socket,recv_buf, sizeof(recv_buf),0);//新的网络套接字，
		printf("服务器接收到客户端的信息是： %s\n", recv_buf);
		//向客户端发送相关的信息
		printf("请输入要向客户端发送的相关信息： \n");
		scanf("%s", send_buf);
		send(net_socket, send_buf, strlen(send_buf), 0);
	}
	ret = close(host_socket);//想要关了他,那么就关闭本地套接字
	ret = close(net_socket);//网络套接字也关上

	//刚写完，然后切换到下面的命令行，输入wd保存推出，然后想要编译一下看一看现象
	//但是我们还没有写客户端呢，首先编译一下吧
	//gcc server.c
	//但是我们需要链接库文件
	//这里不需要
	return 0;
}
//这就是服务器构建流程
// 就是上面注释里的四步
// 
// #
// 
// 
// 
// 写一写客户端，然后展示现象
// 我们看一看客户端咋写，再重新  vim client.c
#include<stdio.h>
#include<string.h>
#include<sys/types.h>  //宏
#include<sys/socket.h>
#include<arpa/inet.h>//宏
int main()
{
	int sockfd;
	int ret;
	struct sockaddr_in_clientSockAddr;
	char sendBuff[1024] = { 0 };
	char recvBuff[1024] = { 0 };
	//初始化完成

	//1.构建客户端的第一步
	//构建socket套接字，既是本地套接字，也是网络套接字
	sockfd = socket(AF_STREAM, 0);
	if (sockfd == -1)
	{
		perror("获取套接字失败\n");
		return -1;
	}
	//2.构建信息结构体
	clientSockAddr.sin_family = AF_INET;
	clientSockAddr.sin_port = htons(8888);
	clientSockAddr.sin_addr.s_addr = inet_addr("127.0.0.1");//
	//3.链接服务器
	ret = connect(sockfd, (struct sockaddr*)&clientSockAddr, sizeof(clientSockAddr));
	if (ret == -1)
	{
		perror("链接服务器失败\n");
		return -1;
	}
	printf("链接服务器成功")；
		while (1)
		{
			printf("请输入要发送的数据\n");
			scanf("%s", sendBuff);
			send(scokfd, sendBuff, strlen(sendBuff), 0);
			
			//从服务器接收到的信息
			recv(sockfd, recvBuff, sizeof(recvBuff),0);
			printf("从服务器获取的数据是  %s\n",recvBuff);
			
		}
	close(sockfd);
	return 0;
}
// 
// 客户端与服务器的模型就是这样
// 有没有学到东西呀，同学们
// 数据库
// 操作系统
// 网络
// 这些需要使用sql语句
// 让我们自己学
// 
// 
// 
// 学的核心就是网络和服务器
// 
// 然后我们的源码 都在FACEAI的文件里面  然后FACEAI.c  和  FACESERVER.c 和  CLIENT.c就是这些东西
// FACEAI.c就是整体逻辑代码，调用的那俩程序好吧
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// #include "Time.h"
8 int main(int argc, const char* argv[])
9 {
	10     // 0. 创建需要使用的变量 
		11     // 0.0 创建服务端的套接字文件
		12     int sockfd;
	13     // 0.1 定义百度类型的对象 
		14     BaiduFaceApi * api;
	15     // 0.2 定义数据库的句柄变量
		16     sqlite3 * ppDb;
	17     // 0.3 定义一个变量，来控制客户端发送过来的请求消息
		18     int qf = 1;
	19     // 0.4 接收客户端消息的数据
		20     unsigned int type;
	21     // 0.5 定义接收图片信息的变量
		22     ImageInfo_t img;
	23
		24     // 0.7 定义一个发送给客户端的变量
		25     char retval[128];
	26
		27     // 0.8 定义图片用到的相关内容
		28     char tmpname[128];
	29
		30     // 0.9 定义日期类型的变量
		31     char date[50] = { 0 };
	32
		33
		// 定义客户端的ip地址端口号 以及 clientfd的套接字文件
		35     int clientfd;
	36     struct sockaddr_in cskaddr;
	37
		38
		39     // 1. 创建 tcp 服务器 调用FaceServer.c里面的CreateFaceServer 这个函数就会得到一个创建好的套接字文件
		40     sockfd = CreateFaceServer();
	41
		42     // 2. 判断TCP是否创建成功
		43     if (sockfd < 0)
		44     {
		45         printf("Create Face Server is  error ....\n");
		46         return -1;
		47     }
	48
		49     // 3. 初始化百度AI的接口   BaiDuApi.cpp 文件中
		50     api = CreateBaiduFaceApi(); // 返回一个 BaiDUapi 类型的指针。
	51
		52     // 4. 初始化数据库 
		53     if (CreateFaceSqlite(&ppDb) != SQLITE_OK)
		54     {
		55         printf("create sqlite error...\n");
		56         return -1;

// 
//  // 5. 等待客户端链接。 
		61     while (1)
			62     {
			63         // 由于服务器不需要关闭，所以直接使用死循环来完成
				64         printf("waiting client .....\n");
			65
				66         // 调用WaitClientConnect函数, 函数调用成功，返回的是客户端的网络套接字
				67         clientfd = WaitClientConnect(sockfd, &cskaddr);
			68
				69         if (clientfd < 0)
				70         {
				71             printf("wait client connect error ...\n");
				72             return -1;
				73         }
			74         else
				75         {
				76             printf("client  connect ok ...\n");
				77         }
			78
				79         // 处理客户端发送过来的请求 
				80         qf = 1;
			81
				82         // 循环处理客户端发送过来的消息 
				83         while (qf)  // 当 qf == 1 的时候，说明这个是一个死循环 将qf置为 0 的时候说明处理完毕，可以退出消息处理
				84         {
				// 
// 
// 
// 
// 
// 
// 
//
#include <stdlib.h>
#include "FaceServer.h"
#include "FaceAI.h"
#include "Image.h"
#include "BaiDuApi.h"
#include "Sqlite.h"
#include "Time.h"

				int main(int argc, const char* argv[])
				{
					// 0. 创建需要使用的变量 
					// 0.0 创建服务端的套接字文件
					int sockfd;
					// 0.1 定义百度类型的对象 
					BaiduFaceApi* api;
					// 0.2 定义数据库的句柄变量
					sqlite3* ppDb;
					// 0.3 定义一个变量，来控制客户端发送过来的请求消息
					int qf = 1;
					// 0.4 接收客户端消息的数据
					unsigned int type;
					// 0.5 定义接收图片信息的变量
					ImageInfo_t img;

					// 0.7 定义一个发送给客户端的变量
					char retval[128];

					// 0.8 定义图片用到的相关内容
					char tmpname[128];
					// 0.9 定义日期类型的变量
					char date[50] = { 0 };


					// 定义客户端的ip地址端口号 以及 clientfd的套接字文件
					int clientfd;
					struct sockaddr_in cskaddr;


					// 1. 创建 tcp 服务器 调用FaceServer.c里面的CreateFaceServer 这个函数就会得到一个创建好的套接字文件
					sockfd = CreateFaceServer();

					// 2. 判断TCP是否创建成功
					if (sockfd < 0)
					{
						printf("Create Face Server is  error ....\n");
						return -1;
					}

					// 3. 初始化百度AI的接口   BaiDuApi.cpp 文件中










