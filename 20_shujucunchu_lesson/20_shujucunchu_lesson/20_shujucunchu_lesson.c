#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���ݴ洢�ڶ���
//��С�˴洢�� Ҫ��ס
// ��ϸ��19��
//������ͬѧ����֪ʶ������վ������ѧϰ�������������ʵϰ
// ��ϰ:
//int main()
//{
//	//-128~127
//	char a = -128;
//	printf("%u\n", a);//��ӡunsigned Char������
//	return 0;
//}
//-128��һ������
//10000000000000000000000010000000
//���룺 
//11111111111111111111111101111111
// ���룺
//11111111111111111111111110000000
// char���ͷŲ�����Щ����
// Ҫ���нض�
// 10000000=a
// %uָ���Ǵ�ӡ�޷��ŵ�����
// Ҫ������������
// ���λ�Ƿ���λ�����շ���λ��������
// 11111111111111111111111110000000  ���ɲ��루��Ϊ��unsigned��-->=ԭ��
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}
//00000000000000000000000010000000
//11111111111111111111111110000000
//����͵�һ��������һ���� 
// 
//int main()
//{
//	int i = 20;
//	unsigned int j = 10;
//	printf("%u�޷��� %d�з��� \n", i + j);
//	return 0;
//}
// 10000000000000000000000000010100
//-20:
// 11111111111111111111111111101100 
// 
// 10:
// 00000000000000000000000000001010
// 
// 11111111111111111111111111110110ֱ�Ӽ����� ���
// 11111111111111111111111111110101  ��-1��
// 10000000000000000000000000001010    ԭ��  ��-10
// 
//#include<windows.h>
//int main()
//{
//	unsigned int i;//�޷����������д��ڵ���0��ȫ������
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}
// ��ѭ����
// 
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//-1��-2��-3 
//	}
//	printf("%d", strlen(a));
//	//strlen�����ַ������ȵģ���\0��λ�ã�ͳ��\0֮ǰ���ֶ��ٸ��ַ�
//	return 0;
//}
// char�����ܹ�2byte
// 8bit
//00000000
//��char�����У���СΪ-128-127
//�ܹ�Ϊ255����
//���ǽ�һ�������������char���ͱ�����
// -1 -2 -3 -4 ....���ϵĽ��д洢
//Ȼ���ڴ洢��-128��-129���ǽ���ת�������char�������͵Ľض�
//-129���վʹ洢Ϊ���ǵ�127Ȼ������洢ֱ��0
//���������������еĽ��Ϊ255
//  
// ������
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <=255; i++) {
//		printf("hello world��%d\n",i);
//	} 
//	return 0;
//}
// unsigned char �޷���
// 00000000
// 00000001
// ...
// 01111111
// 11111111
// ���Ƿ����޷��ŵı������ͷǳ�������ѭ��
// unsigned char��ȡֵ��ΧΪ0~255
// ����ѭ�����ж�������0~255
// ��ô��ʹi++,i��ֵ������255�����Ǳ������Ͳ�����
// ���Ǵ�ŵ���ֵ��Ȼ����255���ڵ�������
// ����������������û�а취�������ѭ��
// �����β��ѭ��
// 
// �Ժ�������ʹ��ѭ����ʱ����ʹ���з��������޷�����ֱ�Ӽ�
// 
// 3.���������ڴ��еĴ洢
// ʾ����
//int main()
//{
//	int n = 9;
//	float* pfloat = (float*)&n;//int*
//	printf("n��ֵΪ��%d\n", n);//9
//	printf("ploat��ֵΪ��%f\n", *pfloat);//9.000000
//	*pfloat = 9.0;
//	printf("n��ֵΪ%d\n", n);//9
//	printf("*pfloat��ֵΪ%f\n", *pfloat);//9.000000
//
//	return 0;
//}
// 
// 
// �����͸��������ڴ��еĴ洢�����������
// ���ݹ��ʱ�׼IEEE(�����͵��ӹ���Э�ᣩ754������һ�������Ƹ�����V���Ա�ʾ���������ʽ
// 
// 5.5 ��һ��ʮ���Ƶĸ�����
// �����ƣ�
// 101.101//wrongд��
// С����ǰ��ֱ��ʾ2�Ĵη�
// ... 2^3 2^2 2^1 С����  2^-1   2^-2   2^-3...
// (-1)^0*1.001*2^2   �����5.5�Ķ����Ʊ�ʾ
// -1��0�η�*������*�����Ƶ�^2�η��������ƵĶ��η�����100����ѧ��������E��
//  ����S ��0
// ָ��E  ��2
// MΪ��������Ч����1.***��1<=M<2)
// ��������3.14������������������룬���ܹ��ܺõľ�ȷ����
// 32bit���֣�
// S 1bit  E11bit  M23bit �����ȸ�����
// S 1bit  E11bit  M52bit ˫���ȸ�����
// 
// �ڼ�����ڲ�����M��ʱ��Ĭ��������ĵ�һλ����1����˿��Ա���ȥ
// ֻ��������xxxxxx���֣����籣��1.01��ʱ��ֻ����01���ȵ���ȡ��ʱ���ڰѵ�һλ��1
// ����ȥ����������Ŀ���ǽ�ʡ1λ��Ч���֣���32λ������λ��������M��ֻ��23λ
// ����һλ��ȥ������24λ
//  
// ����ָ��E
// ���EΪ8Ϊ��ֵΪ0~255
// EΪ11��ȡֵ��Χ��0~2047
// ����EҲ������һ�����������ǹ涨�����ڴ��ǣ�E����ʵֵ�����ټ���һ���м���
// ����8Ϊ��E������м�����127������11λ��E������м�����1023
// ����
// 2^10��E��10�����Ա����32λ������ʱ�����뱣���10+127=137����10001001
// Ϊ��������һ���������Ǿͽ���������
// 
//int main()
//{
//	float f = 5.5;
//	//101.1
//	//(-1)^0*1.011*2^2
//	//S=0
//	//E=2
//	//M=1.011
//	//��ʼ�洢���ڴ�
//	//0    10000001			 01100000000000000000000
//	//S    E 2+127                      M
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//0X 40B00000
//	return 0;
//}
// 
// 
//int main()
//{
//	//0000
//	//�����Ǵ��ڴ���ȡ��ʱ��Ҳ�����������
//	//1.E��0 ��1 
//	//��ȥ127�õ���ʵֵ��
//	//2.Eȫ0
//	//��ʱ��������ָ��EΪ1-127��-126(һ�㱣��1-127����ʽ��
//	//��Ч����Ҳ����ԭ1��ֱ�Ӿ���0.xxxxxx*2^-126(E)   ���޽ӽ���0
//	//3.EΪȫ1
//	//��ʾ��������������,EΪ255-127=128
//	//���Ǿ�ǳ��һ��
//	//��������
//	//�ͻ����ϻ���ԭ�ȵĻ�ԭΪԭ�ȵ�ֵ
//	return 0;
//}
// 
//���ǻص��������¿�һ��������� 
// // ʾ����
//int main()
//{
//	int n = 9;
//	float* pfloat = (float*)&n;//int*
//	//�ŵĸ���������int�Ķ����Ƹ�ʽת��Ϊ��������ʽ
//	//00000000000000000000000000001001
//	//0 00000000 00000000000000000001001
//	//��-1��^0*0.00000000000000000001001*2^-126  �����ת�����ֵ
//	printf("n��ֵΪ��%d\n", n);//9
//	printf("ploat��ֵΪ��%f\n", *pfloat);//9.000000   ���Խ����0.000000
//	*pfloat = 9.0;//���������ӽǴ��9.0
//	//1001.0
//	//(-1)^0*1.001*2^3
//	//S=0
//	//M=1.001
//	//E=3+127
//	//0 10000010 00100000000000000000000
//	//01000001000100000000000000000000  ����=ԭ��
//	//�������Ǿ͵ó�����������Ľ����һ���ܴ������
//	printf("n��ֵΪ%d\n", n);//9
//	printf("*pfloat��ֵΪ%f\n", *pfloat);//9.000000
//
//	return 0;
//}
// �������
// �ڹ���������
// ��������������ڿε�֪ʶ����
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