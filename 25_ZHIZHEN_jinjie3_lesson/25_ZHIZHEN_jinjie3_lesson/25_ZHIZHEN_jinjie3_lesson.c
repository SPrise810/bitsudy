#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
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
//void menu()
//{
//	printf("********************\n");
//	printf("****1add2sub********\n");
//	printf("****3mul4div********\n");
//	printf("******0rexit********\n");
//}
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
//clc(int (*pf)(int, int))
//{
//	int x;
//	int y;
//	printf("�����������������֣�");
//		scanf("%d %d", &x, &y); 
//		int ret = pf(x, y);
//		printf("%d\n", ret);
//}
//int main()
//{
//	int n = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do 
//	{
//		menu();
//		printf("��ѡ��");
//			scanf("%d", &n);
//
//			switch (n)
//			{
//				//���ǳ������뷨�ǽ�ÿһ��case�����Ĵ�����з�װ
//				//��Ϊһ������������������ÿ��case����ʵ�ֵ����ǲ�ͬ������ ����+-*\
//				//��ô���Ǿ�
//			case 1:
//				//printf("�����������������֣�");
//				//scanf("%d %d", &x, &y); 
//				//ret=add(x, y);
//				//printf("���= %d\n", ret);
//				clc(add);
//				break;
//			case 2:
//				/*printf("�����������������֣�");
//				scanf("%d %d", &x, &y); 
//				ret=sub(x, y);
//				printf("���= %d\n", ret);*/
//				clc(sub);
//					break;
//			case 3:
//				/*printf("�����������������֣�");
//				scanf("%d %d", &x, &y); 
//				ret=mul(x, y);
//				printf("���= %d\n", ret);*/
//				clc(mul);
//					break;
//			case 4:
//			/*	printf("�����������������֣�");
//				scanf("%d %d", &x, &y); 
//				ret=div(x, y);
//				printf("���= %d\n", ret);*/
//				clc(div);
//					break;
//				case 0:
//					printf("�˳�\n");
//					break;
//				default:
//				{
//					printf("���������룺\n");
//				}
//			}
//	} while (n);
//	return 0;
//}
// 
// 
// 
// 
// 
///////���Cxdm
// ���Ǽ�������
// ���Ǹոս��˻ص����������ӣ�
// ����һ��
// 
// 
// qsort��һ���⺯��
// ���ڿ��������㷨ʵ�ֵ�һ������ĺ���
// ��ʲôţ�Ƶ��أ�
// �������������͵�����
// ����д������һ���� ����test1����
// ����̽��һ������ʹ��
// 
//void buddle_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++) 
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test1()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//����Ϊ����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	buddle_sort(arr, sz);
//	print_arr(arr, sz);
//	//�������ǵĺ����ͱ��̶�ס�ˣ�����ֻ�ܶ�int ���͵����ݽ�������
//	return 0;
//}
//int cmp_int(const void*e1,const void*e2)
//{
//	//if(*e1> *e2)   //err
//	//e1 e2 �ǲ�ȷ�����͵�ָ�룬����ֱ�ӽ�����
//	//����Ҫ��ȷ����ָ������
//	//����ô���أ� 
//	//���Ǹ�����Ͱ
//	//int a = 10;
//	//float* pf = &a;//err 
//	//void* pf = &a;//������
//	//pf+1��//err��֪���Ӷ����ֽ�
//	//*pf  //err ��
//	//��ô���׸���ô���أ�
//	//����
//	//if (*(int*)e1 > *(int*)e2)
//	//{
//	//	return 1;
//	//}
//	//else if ((*(int*)e1 == *(int*)e2))
//	//	return 0;
//	//else
//	//	return -1;
//	//�򻯺�
//	return (*(int*)e1 - *(int*)e2);
//}
//void test2()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//������������������ݣ� ��>  <
//	//������ǽṹ�����ݽ��бȽϣ���ô��ɶ���Ƚϣ�
//	//���ǿ��ܲ�����ֱ���ô���С�ں����Ƚ�
//	//ʹ���߸���ʵ��������ṩһ����������ʵ��2�����ݵıȽ�~
//	//������
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//
//}
////
////ʹ��qsort ����ṹ��
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//int cmp_stu_by_age(const void* e1,const void* e2)//������������
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//} 
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);//����
//	return strcmp(((struct stu*)e2)->name, ((struct stu*)e1)->name);//���򣨾������һ�����ţ�
//
//}
// 
// 
// 
// 
////strcmp���ַ����Ƚϣ������ֵ�˳����бȽϣ���ͷ��ʼ����ÿһλ��ĸ�ıȽϣ���ͬ��������һ��
//void test3()
//{
//	struct stu arr[3] = { { "zhangsan",20,55.5},{"llisi",50,88.0},{"wangwu",30,90.0} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
// //������������ ���򷽷��������϶�����qsort�ڲ������úܶ�ε�
//
//}
////
//int main()
//{
//	//test2();//��������
//	test3();//��������Ч��F10 
//	return 0;
//}
//����ͨ��cplusplus ����qsort�����Ķ���ٺ�
//
//void qsort(void* base,//���������ݵ���ʵλ��
//	size_t num,//����Ԫ�ظ���
//	size_t size,//һ��Ԫ�ص��ֽڴ�С
//	int (*compar)(const void*e1, const void*e2)//����ָ�� 
//// compar��һ���ȽϺ�����      ���Ƚϵ�����Ԫ�صĵ�ַ
////����������Int,   ������ֵ  ����0����  0   С��0����
//);
// 
// strcmp �������Ҳ�Ƿǳ������������Ƚϵ�����ĸ��ASCII��ֵ
// ����������Ҫ���ǽ���qsort������ʹ�÷���
// 
// 
//void qsort(void* base,//���������ݵ���ʵλ��
//	size_t num,//����Ԫ�ظ���
//	size_t size,//һ��Ԫ�ص��ֽڴ�С
//	int (*compar)(const void*e1, const void*e2)//����ָ�� 
//// cmp��һ���ȽϺ�����      ���Ƚϵ�����Ԫ�صĵ�ַ
////����������Int,   ������ֵ  ����0����  0   С��0����
//);
//
//
	//������ʵ��һ������ð������
//
// qsort�����������ܲ����뵽��������ʹ��qsort����ʲô�������͵������أ�
// ����
// ���Բ�ʹ�� void* ָ��
// ����ʹ��base �� �Լ� Ԫ�ظ���  �Լ���� ��Ԫ�ص��ֽڴ�С��
// ����ָ��
// �������Ͳ�ͬ���ȽϷ�����ͬ
// ����Ӧ�öԴ� ���ð�������������
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void swap(char* p1, char* p2, int width)
//{
//	//08 00 00 00  /  07 00 00 00
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//		*p1++;
//		*p2++;
//	}
//
//}
//void  bubble_sort(void* base, int num, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	//void* base ��ʾ��Ҳ��֪����ַ������ʲô��Ȼ�����e1 e2����Ҳͬ���������
//	int i = 0;
//	for (i = 0; i < num-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < num - 1; j++)
//		{
//			//������ʱ��֪������αȽ�����Ԫ�صĴ�С�������ȷ���һ��
//			//Ĭ������Ļ��� cmp����>0 ,����Ҫ����
//			//������intΪ����{9��8��7��6��5��4��3��2��1}
//			//����Ҫ��cmp�����д���Ҫ�Ƚϵ�����Ԫ�صĵ�ַ
//			//9��base,��Ԫ��
//			//����ǿ������ת����(char*)base+width �������ҵ���������һ��Ԫ��8
//			//7�ĵ�ַ���ǣ�char*)base+(j+1)*width
//			//if (cmp(, ) > 0)
//			if(cmp((char*)base+width*j,(char*)base+width*(j+1)) > 0)
//			{
//				//����
//				swap((char*)base + width * j, (char*)base + width * (j + 1), width);
//			}
//		}
//	}
//}
//void test4()
//{
//	int arr[] = { 2,5,4,3,1,6,7,9,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
////
//// 
////
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);//����
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);//����
//
//}
//void test5()
//{
//	struct stu arr[3] = { { "zhangsan",20,55.5},{"llisi",50,88.0},{"wangwu",30,90.0} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//
//}
//int main()
//{
//	test5();
//	return 0;
//}
// 
// ��ʵ����ͨ��ð������ģ��ʵ�����qsort���������в���ģ�������Ҫ
// �Լ��ṩ ��ͬ�������� �ıȽϺ������������
// ��������ʹ���ǵıȽ��ܹ���������
// ����Ŀξ���ô�����˺ٺ�
// 
// 
// 
// 
// ��ҵ��ϰ��1.ģ��ʵ��qsort����
// 
// 
//int by_int(int a,int b)
//int by_int(const void*e1,const void*e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
////void swap(const void* e1, const void* e2, int width)
//void swap(char* p1, char* p2, int width)
//{
//	//08 00 00 00  /  07 00 00 00
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//		*p1++;
//		*p2++;
//	}
//}
////void fun(int arr[], int sz, int width, int(*by_int)())//��ʼλ��ָ�����Ͳ�Ӧ��ȷ��
//void fun(void* base,int sz,int width,int(*by_int_p)(const void*e1,const void* e2))//by_int�ص�����
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - i-1; j++)
//		{
//			if (by_int_p((char*)base + width * j, ((char*)base + width * (j + 1))) > 0)//�жϺ���
//			{
//				//int tmp = arr[j];
//				//	arr[j] = arr[j+1];
//				//	arr[j+1]=tmp;
//				swap((char*)base + width * j, (char*)base + width * (j + 1), width);//ʹ�ý�������
//			}
//		}
//	}
//}
//#include<stdlib.h>
//int main()
//{
//	int arr[] = { 7,1,3,4,2,5,6,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int width = sizeof(arr[0]);
//	fun(arr,sz, width, by_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
// 
// 
// ��ҵ��ϰ2�� ʹ��qsort����
//  
// 
// 
//void qsort(void* base,//���������ݵ���ʵλ��
//	size_t num,//����Ԫ�ظ���
//	size_t size,//һ��Ԫ�ص��ֽڴ�С
//	int (*compar)(const void*e1, const void*e2)//����ָ�� 
//// cmp��һ���ȽϺ�����      ���Ƚϵ�����Ԫ�صĵ�ַ
////����������Int,   ������ֵ  ����0����  0   С��0����
//);
struct stu
{
	char name[10];
	int age;
	int score;
};
int _int(const void* e1, const void* e2)
{
	//return ((int*)e1 - (int*)e2);
	return   (*(int*)e1 - *(int*)e2);

}
int _char(const void* e1, const void* e2)
{
	return (*(char*)e1 - *(char*)e2);
}
int _struct(const void* e1, const void* e2)
{
	//return (cmp((strcut stu->name*)e1,));
	//return (cmp((struct stu*)e1->name, (struct stu*)e2->name));
	return strcmp(((struct stu*)e2)->name, ((struct stu*)e1)->name);
}
int main()
{
	struct stu s[3] = { {"daming",15,100},{"lihua",16,120},{"lili",17,140} };
	int arr[10] = { 3,1,6,5,2,9,7,8,10 };
	char arr2[10] = { "gbcdaef" };
	//char arr2[10] = { 'b','c','a','e','g'};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(arr[0]);
	qsort(arr, sz, width, _int);
	int i = 0;
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	int width2 = sizeof(arr2[0]);
	qsort(arr2, sz2, width2, _char);
	int sz3 = sizeof(s) / sizeof(s[0]);
	int width3 = sizeof(s[0]);
	qsort(s, sz3, width3, _struct);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i = 0; i < sz2; i++)
	{
		printf("%c ", arr2[i]);
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		printf("%s %d %d", &s[i].name, &s[i].age, &s[i].score);
		printf("\n");
	}
	printf("\n");
	return 0;
}
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