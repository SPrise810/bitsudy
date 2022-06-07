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
// 
//










