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










