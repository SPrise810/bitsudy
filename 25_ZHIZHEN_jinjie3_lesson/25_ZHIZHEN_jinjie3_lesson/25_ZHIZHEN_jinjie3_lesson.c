#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//���ȣ� ����֪ʶ��
//����ѧϰ��һ������ָ��
//
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	void (*pf)() = test;
//	(*pf)();//ͨ��pfָ�����test����
//	test();//ֱ�ӵ��ú���
//	pf();//˵��* û��ɶ�ã����ǿ��Բ���Ҳ���Զ��
//	(****pf)();//���
//	return 0;
//}
//
// 
//����ָ������

// 
// ��֪ʶ��⣺
// 
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//����ָ��
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	//ָ������ָ��	
//	int* arr2[5];
//	int* (*p2)[5] = &arr2;
//	//����ָ��
//	int(*pf)(int, int) = &add;
//	//����ָ������
//	int(*pfarr[4])(int, int);
//	//����ָ������ָ��
//	int(*(*p3)[4])(int, int) = &pfarr;
//	//int(*)(int, int)   ���ͣ� ����ָ������
//	//��*p3)  ָ��
//	//   ָ�����4��Ԫ�أ�Ԫ�ص������Ǻ���ָ��
//	//���Ǿ��ܹ�ȷ��p3��һ��ָ�� ����ָ������ �� ָ��
//	return 0;
//}
//
//  
// Ȼ������ʵ��һ�£��ٺ�
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int i = 0;
//	int(*pfarr[4])(int, int) = { add,sub,mul,div };
//	int(*(*p3)[4])(int, int) = &pfarr;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",(*p3)[i](3, 4));
//		printf("%d\n", p3[0][i](3, 4));
//		//��ͬ�汾
//		printf("%d\n", (*(*(p3)+i))(3, 4));
//	}
//	return 0;
//}
// ȡ��ַ��ȡ����������ĵ�ַ
// ���ǽ����õ�ʱ�����õ���������
// ���ߴ�Сһ�����������岻ͬ
// ��ô���أ�
// &arr+1
// arr+1
// ��Ϳ�������
// 
// 
// 
// 
// �ص�����
// һ��ͨ������ָ����õĺ���
// �����Ѻ�����ָ�루��ַ�� ��Ϊ�������ݸ���һ������
// �����ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص�������
// �ص����������ɸú�����ʵ�ַ�ֱ�ӵ���
// �������ض���ʱ�����������ʱ����һ�����õģ����ڶԸ��¼�������������Ӧ
//  
// 
// 
//�ٸ�����
//void test()
//{
//	printf("hehe\n");
//}
//void print_hehe(void (*p)())
//{
//	if (1)
//		p();
//}
//int main()
//{
//	print_hehe(test);
//	return 0;
//}
// �ص������� �ع�ͷ���ٵ��ù�����������������
// ��ʲô���أ�
// 
// �پٸ�����
// ����������һ�ڿ�ʾ�� ������ 
// ʹ�õ��������switch���
// ����ͨ���ص����������Ż�
// ������ÿһ��case��䶼���ظ��Ĳ���
// 
void menu()
{
	printf("********************\n");
	printf("****1add2sub********\n");
	printf("****3mul4div********\n");
	printf("******0rexit********\n");
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y) 
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
clc(int (*pf)(int, int))
{
	int x;
	int y;
	printf("�����������������֣�");
		scanf("%d %d", &x, &y); 
		int ret = pf(x, y);
		printf("%d\n", ret);
}
int main()
{
	int n = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	do 
	{
		menu();
		printf("��ѡ��");
			scanf("%d", &n);

			switch (n)
			{
				//���ǳ������뷨�ǽ�ÿһ��case�����Ĵ�����з�װ
				//��Ϊһ������������������ÿ��case����ʵ�ֵ����ǲ�ͬ������ ����+-*\
				//��ô���Ǿ�
			case 1:
				//printf("�����������������֣�");
				//scanf("%d %d", &x, &y); 
				//ret=add(x, y);
				//printf("���= %d\n", ret);
				clc(add);
				break;
			case 2:
				/*printf("�����������������֣�");
				scanf("%d %d", &x, &y); 
				ret=sub(x, y);
				printf("���= %d\n", ret);*/
				clc(sub);
					break;
			case 3:
				/*printf("�����������������֣�");
				scanf("%d %d", &x, &y); 
				ret=mul(x, y);
				printf("���= %d\n", ret);*/
				clc(mul);
					break;
			case 4:
			/*	printf("�����������������֣�");
				scanf("%d %d", &x, &y); 
				ret=div(x, y);
				printf("���= %d\n", ret);*/
				clc(div);
					break;
				case 0:
					printf("�˳�\n");
					break;
				default:
				{
					printf("���������룺\n");
				}
			}
	} while (n);
	return 0;
}
// ȱ�㣺 ����
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