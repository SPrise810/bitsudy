#define CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//socket()����
//��������鿴һ�´���
// Linux �鿴�����ڲ��Ĵ��� �� man 3 accept
//ͷ�ļ�Ϊ   #include<sys/socket.h>
// int socket(int domain,int type,int protocol)��Щ�Ǻ����Ĳ���
//domian������ȷ��ʹ���ĸ�����Э����   IPV4  IPV6Э�飬��ôAF_INET:  ipv4��AF_INET6: IPV6
//��˵��Ҫдһ��
//type:TCP��UDP  Э������  SOCK_STREAM   TCP���ͣ�SOCK_DRGRAM   UDPЭ��
// rrotocol �� �������һ�㲻�ã���0����
// 
//   Э��TCP���ϰ�ȫ�����������Ĵλ��֣�  UDP����Э�飬������������û�н��յ����ͷ���
// TCP���пͻ��˵Ľ��ܣ�������ȷ�Ϻ����еڶ��η��ͣ�UDP���ܽ��յ���û�У�ֱ�Ӿͷ���
//  
// socket�����ķ���ֵΪ   ��ȡһ�������׽���  ��
// ����ִ�гɹ�������һ�����ص��׽���
// ʧ�ܣ� ����-1
//  
// 
// connect ����
// ���Ӻ�������Ҫ���ڿͻ���
// ���������ӷ�������һ����������Ϊ�������ԲŽ�
// #include<sys/socket.h>
// int connect(int socket,const struct sockaddr *address,socklen_t address_len);
// �����Ĳ���˵һ�£�  
// socket   =    �����׽���
// address  =    ������Ϣ�ṹ����׵�ַ
// ����˵ʹ���������֮ǰ������Ҫ��������Ϣ�ṹ�������
// ����ֵ  ��  �ɹ�����0
// ʧ�ܷ���-1
// ������������Ϣ�ṹ�壬
// struct sockaddr_in{
// sa_family_t sin_family;
// in_port_t sin_prot;
// struct in_addr sin_addr;
// };
// �����������Ϣ�ṹ���ԭ��
// 
// ����һ��������
// ����ͼ���ǰ󶨷��������׽���
// bind ()����  ���ڷ�����
// #include<sys/socket.h>
// int bind(int socket,const struct sockaddr *address,socklen_t address_len);
// socke ���������׽��֣�
// address ������Ϣ�ṹ���ַ
// address_len �ṹ��Ĵ�С/�ߴ�
//����ֵ   �ɹ�Ϊ0  ʧ�ܷ���-1
// 
// ����  listen ����   ���ڷ�����
// #include<sys/socket.h>
// int listen (int socket, int backog);
// ��Щ������˵�������򵥵ģ��������
// socket �����������׽���  �ɹ�����0     ʧ�ܷ���-1
// 
// 
// accept ���������������ȴ��ͻ��˵�����
// ��������ԭ��
// int accept(int socket,struct sockaddr *restrict address,socklen_t *restrict address_len);
// ������  ���һ������ͨ���׽���
// ������  socket  ���������׽���
//        address   ������Ϣ�ṹ��
//		  address_len ��Ϣ�ṹ��ߴ�
// ����ֵ�� һ���µ������׽��֣����Խ���ͨ��
//
// �Ӷ�����read���� recv()������  write���� send()����   
// ��˵��һ����˵һ�� ��
// �ѳ��õ�дд����
// 
// recv ����
// #include<sys/socket.h>
// sszie_t recv(int socket,void *buffer,size_t length,int flags);
// socket  �����׽���
// buffer  �ڴ滺����
// length ���յ��ڴ泤��
// flags  һ��������д��0����
// ����ֵ  ��һ���޷������� ������һ�����յ��ֽ���
// ʧ�ܷ���-1  ����ر��˷���  0
// �ɹ�����ʵ�ʽ��յ����ֽ���
// ʧ�ܷ���-1  
// 
// send����--recv����           read write �Ƚ�ͨ��
// #include<sys/socket.h>
// ssize_t send(int socket,const void *buffer,size_t length,int flags);
// socket�����׽���
// ���������׽�����ͨ��accept������ס
// buffer �����ڴ滺����
// length �������ֽ�����С
// flags  һ��д��0������
// ���� 
// ����
// ����ֵ  �������ֽ���
// �����ķ��ظ�һ
// 
//
// close()����
// ��ʶ����Ҫ����
// �������Ǹ�ʲô����
// #include<unistd.h>
// int close(int fd);
// ���ܾ��ǹر��׽���
// ����Ǵ�������Ϳͻ��˵ĺ���ԭ��
// 
//���ǿ�ʼ����������
//�Լ�дһ������������
// 
// ʵ��һ��TCP��������
// 1.��ȡһ�������������׽��֣��൱��ǰ̨�� ����Ƿ��������Ǳ����׽��֣�����ǿͻ��ˣ����Ǳ����׽��֣�Ҳ�������׽��֣�
// 2.���������Ϣ�ṹ��
// 3.�����������׽��ְ󶨵����ص�������Ϣ�ṹ��->��1.�˿ںţ�2.IPЭ�����ͣ�
// 4.�������������׽��֡�
// 5.�����ȴ��ͻ��˵��������� 
// 6.���пͻ�������ʱ������һ���µ�����ͨ���׽��֣�ʹ������׽��� ��������ͨ�ţ�ҵ�������������ʹ�õ��׽��֣�
// 7.ͨ����������׽��֣���ͻ��˷������ݣ����߽�������
// ���ǿ�ʼдһд��
// 
// 
#include<stdio.h>
#include<sys/socket.h>
#include<string.h>
#include<sys/types.h>
#include<arpa/inset.h> //ת����С�˵ĺ꣬����ϵͳ����С�˴洢�� 
#include<unstd.h>
int main()
{
	//��ʼ���빹���������Ĳ���
	int host_socket;
	int net_socket;//����ͨ���׽���
	//������Ϣ�ṹ��
	struct sockaddr_in serverSockAddr;//���ؿͻ��˵���Ϣ�ṹ��
	//ʹ���շ巨����
	strcut sockaddr_in clientSocketAddr;//����ͻ��˵�������Ϣ�ṹ��
	int ret;//������ط���ֵʹ��
	char recv_buf[1024] = { 0 };
	char send_buf[1024] = { 0 };
	//��ʼ���õģ���ɡ�
	
	//1.ʹ��socket�����������������׽���
	host_socket=socket(AF_INET,SOCK_STREAM,0)��
		//AF_INET��IPV4��  IPV4��TCPЭ�飬��SOCK_STREAM
		if (host_socket == -1)
		{
			perror("create socket failed");
			return -1;
		}
	    //2.�󶨷�����IP�Լ��˿ں�
	    //2.1����������Ϣ�ṹ��
	serverSockAddr.sin_family = AF_INET;//�ṹ���Ա������Э���壬Э������IPV4

	serverSockAddr.sin_port = htons(8888);//�˿ں�
	serverSockAddr.sin_addr.s_addr = htons(INADDR_ANY);
	//�����е�����һ��������������������
	//�����������˼
	//2.2 ��ʼ�� 
	//����һ�º����ķ���ֵ���������ж�
	ret = bind(host_socket, (struct sockaddr*)&serverSockAddr, sizeof(serverSockAddr));
		//���нṹ��ָ������ǿ��ת����Ȼ��&��ȡ��ַ
	if (ret == -1)
	{
		//����
		perror("��������ʧ��");
			//���Ǵ��󷵻أ������Ͳ���Ҫprintf�������ø�ʽ�������߰�����ǲ���
		return -1;//��ʧ�ܣ����ظ�һ��
	}
	printf("�������󶨳ɹ�\n");
	//3.�������������׽���
	ret = listen(host_socket, 0);//�������д���У�������ô˵��
	if (ret == -1)
	{
		perror("����������ʧ��");
			return -1;
	}
	//4.�����ȴ��ͻ��˵����ӣ�����ȡһ���µ������׽���
	//��Ϊ���ǻ�ȡ�����׽��֣���С��Ҫ���к˶ԣ�������Ҫ�ṩsizeof�ͻ��˵����ӵ�ַ
	//��Ϊ�ͻ��˷�����һ����Ϣ������Ҫ���浽һ���ṹ�壬��Ҫά�ֽṹ���Сȷ��
	net_socket_size = sizeof(clientSocketAddr);
	net_socket = accept(host_socket, (struct socketaddr*)&clientSocketAddr, &net_socket_size);
	if (net_socket == -1)
	{
		perror("��ȡ�׽���ʧ��");//һ�㲻��ʧ��
		return -1;
	}
	//����������׽��ֺ�Ҳ�����һ���µ��׽��֣���ô��һ���Ϳ��Կ�ʼͨѶ��
	//ֻҪ��һ���׽��ֹ���֤�������µ����ӹ����ˣ����ǿ��Դ�ӡһ��
	printf("�пͻ������ӳɹ�\n");
	//5.ʵ������ͨ��
	//send �� resev����
	//����ʹ��whileѭ��
	//ֻҪ���ǵĵ��Բ��ػ�����ô����Զ��ȡ�ͻ������������Ϣ
	while (1)
	{
		//��ȡ�ͻ��˵������Ϣ
		recv(net_socket,recv_buf, sizeof(recv_buf),0);//�µ������׽��֣�
		printf("���������յ��ͻ��˵���Ϣ�ǣ� %s\n", recv_buf);
		//��ͻ��˷�����ص���Ϣ
		printf("������Ҫ��ͻ��˷��͵������Ϣ�� \n");
		scanf("%s", send_buf);
		send(net_socket, send_buf, strlen(send_buf), 0);
	}
	ret = close(host_socket);//��Ҫ������,��ô�͹رձ����׽���
	ret = close(net_socket);//�����׽���Ҳ����

	//��д�꣬Ȼ���л�������������У�����wd�����Ƴ���Ȼ����Ҫ����һ�¿�һ������
	//�������ǻ�û��д�ͻ����أ����ȱ���һ�°�
	//gcc server.c
	//����������Ҫ���ӿ��ļ�
	//���ﲻ��Ҫ
	return 0;
}
//����Ƿ�������������
// ��������ע������Ĳ�
// 
// #
// 
// 
// 
// дһд�ͻ��ˣ�Ȼ��չʾ����
// ���ǿ�һ���ͻ���զд��������  vim client.c
#include<stdio.h>
#include<string.h>
#include<sys/types.h>  //��
#include<sys/socket.h>
#include<arpa/inet.h>//��
int main()
{
	int sockfd;
	int ret;
	struct sockaddr_in_clientSockAddr;
	char sendBuff[1024] = { 0 };
	char recvBuff[1024] = { 0 };
	//��ʼ�����

	//1.�����ͻ��˵ĵ�һ��
	//����socket�׽��֣����Ǳ����׽��֣�Ҳ�������׽���
	sockfd = socket(AF_STREAM, 0);
	if (sockfd == -1)
	{
		perror("��ȡ�׽���ʧ��\n");
		return -1;
	}
	//2.������Ϣ�ṹ��
	clientSockAddr.sin_family = AF_INET;
	clientSockAddr.sin_port = htons(8888);
	clientSockAddr.sin_addr.s_addr = inet_addr("127.0.0.1");//
	//3.���ӷ�����
	ret = connect(sockfd, (struct sockaddr*)&clientSockAddr, sizeof(clientSockAddr));
	if (ret == -1)
	{
		perror("���ӷ�����ʧ��\n");
		return -1;
	}
	printf("���ӷ������ɹ�")��
		while (1)
		{
			printf("������Ҫ���͵�����\n");
			scanf("%s", sendBuff);
			send(scokfd, sendBuff, strlen(sendBuff), 0);
			
			//�ӷ��������յ�����Ϣ
			recv(sockfd, recvBuff, sizeof(recvBuff),0);
			printf("�ӷ�������ȡ��������  %s\n",recvBuff);
			
		}
	close(sockfd);
	return 0;
}
// 
// �ͻ������������ģ�;�������
// ��û��ѧ������ѽ��ͬѧ��
// ���ݿ�
// ����ϵͳ
// ����
// ��Щ��Ҫʹ��sql���
// �������Լ�ѧ
// 
// 
// 
// ѧ�ĺ��ľ�������ͷ�����
// 
// Ȼ�����ǵ�Դ�� ����FACEAI���ļ�����  Ȼ��FACEAI.c  ��  FACESERVER.c ��  CLIENT.c������Щ����
// FACEAI.c���������߼����룬���õ���������ð�
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
	10     // 0. ������Ҫʹ�õı��� 
		11     // 0.0 ��������˵��׽����ļ�
		12     int sockfd;
	13     // 0.1 ����ٶ����͵Ķ��� 
		14     BaiduFaceApi * api;
	15     // 0.2 �������ݿ�ľ������
		16     sqlite3 * ppDb;
	17     // 0.3 ����һ�������������ƿͻ��˷��͹�����������Ϣ
		18     int qf = 1;
	19     // 0.4 ���տͻ�����Ϣ������
		20     unsigned int type;
	21     // 0.5 �������ͼƬ��Ϣ�ı���
		22     ImageInfo_t img;
	23
		24     // 0.7 ����һ�����͸��ͻ��˵ı���
		25     char retval[128];
	26
		27     // 0.8 ����ͼƬ�õ����������
		28     char tmpname[128];
	29
		30     // 0.9 �����������͵ı���
		31     char date[50] = { 0 };
	32
		33
		// ����ͻ��˵�ip��ַ�˿ں� �Լ� clientfd���׽����ļ�
		35     int clientfd;
	36     struct sockaddr_in cskaddr;
	37
		38
		39     // 1. ���� tcp ������ ����FaceServer.c�����CreateFaceServer ��������ͻ�õ�һ�������õ��׽����ļ�
		40     sockfd = CreateFaceServer();
	41
		42     // 2. �ж�TCP�Ƿ񴴽��ɹ�
		43     if (sockfd < 0)
		44     {
		45         printf("Create Face Server is  error ....\n");
		46         return -1;
		47     }
	48
		49     // 3. ��ʼ���ٶ�AI�Ľӿ�   BaiDuApi.cpp �ļ���
		50     api = CreateBaiduFaceApi(); // ����һ�� BaiDUapi ���͵�ָ�롣
	51
		52     // 4. ��ʼ�����ݿ� 
		53     if (CreateFaceSqlite(&ppDb) != SQLITE_OK)
		54     {
		55         printf("create sqlite error...\n");
		56         return -1;

// 
//  // 5. �ȴ��ͻ������ӡ� 
		61     while (1)
			62     {
			63         // ���ڷ���������Ҫ�رգ�����ֱ��ʹ����ѭ�������
				64         printf("waiting client .....\n");
			65
				66         // ����WaitClientConnect����, �������óɹ������ص��ǿͻ��˵������׽���
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
				79         // ����ͻ��˷��͹��������� 
				80         qf = 1;
			81
				82         // ѭ������ͻ��˷��͹�������Ϣ 
				83         while (qf)  // �� qf == 1 ��ʱ��˵�������һ����ѭ�� ��qf��Ϊ 0 ��ʱ��˵��������ϣ������˳���Ϣ����
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
					// 0. ������Ҫʹ�õı��� 
					// 0.0 ��������˵��׽����ļ�
					int sockfd;
					// 0.1 ����ٶ����͵Ķ��� 
					BaiduFaceApi* api;
					// 0.2 �������ݿ�ľ������
					sqlite3* ppDb;
					// 0.3 ����һ�������������ƿͻ��˷��͹�����������Ϣ
					int qf = 1;
					// 0.4 ���տͻ�����Ϣ������
					unsigned int type;
					// 0.5 �������ͼƬ��Ϣ�ı���
					ImageInfo_t img;

					// 0.7 ����һ�����͸��ͻ��˵ı���
					char retval[128];

					// 0.8 ����ͼƬ�õ����������
					char tmpname[128];
					// 0.9 �����������͵ı���
					char date[50] = { 0 };


					// ����ͻ��˵�ip��ַ�˿ں� �Լ� clientfd���׽����ļ�
					int clientfd;
					struct sockaddr_in cskaddr;


					// 1. ���� tcp ������ ����FaceServer.c�����CreateFaceServer ��������ͻ�õ�һ�������õ��׽����ļ�
					sockfd = CreateFaceServer();

					// 2. �ж�TCP�Ƿ񴴽��ɹ�
					if (sockfd < 0)
					{
						printf("Create Face Server is  error ....\n");
						return -1;
					}

					// 3. ��ʼ���ٶ�AI�Ľӿ�   BaiDuApi.cpp �ļ���










