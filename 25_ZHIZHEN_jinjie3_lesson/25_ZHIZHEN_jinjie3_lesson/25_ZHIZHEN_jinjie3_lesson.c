#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//
//首先： 回忆知识点
//我们学习了一个函数指针
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
//	(*pf)();//通过pf指针调用test函数
//	test();//直接调用函数
//	pf();//说明* 没有啥用，我们可以不加也可以多加
//	(****pf)();//多加
//	return 0;
//}
//
// 
//函数指针数组

// 
// 新知识理解：
// 
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//数组指针
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	//指针数组指针	
//	int* arr2[5];
//	int* (*p2)[5] = &arr2;
//	//函数指针
//	int(*pf)(int, int) = &add;
//	//函数指针数组
//	int(*pfarr[4])(int, int);
//	//函数指针数组指针
//	int(*(*p3)[4])(int, int) = &pfarr;
//	//int(*)(int, int)   类型： 函数指针类型
//	//（*p3)  指针
//	//   指向的是4个元素，元素的类型是函数指针
//	//我们就能够确定p3是一个指向 函数指针数组 的 指针
//	return 0;
//}
//
//  
// 然后我们实践一下，嘿嘿
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
//		//不同版本
//		printf("%d\n", (*(*(p3)+i))(3, 4));
//	}
//	return 0;
//}
// 取地址是取出整个数组的地址
// 我们解引用的时候是拿到了数组名
// 两者大小一样，但是意义不同
// 怎么看呢？
// &arr+1
// arr+1
// 这就看出来了
// 
// 
// 
// 
// 回调函数
// 一个通过函数指针调用的函数
// 如果你把函数的指针（地址） 作为参数传递给另一个函数
// 当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。
// 回调函数不是由该函数的实现方直接调用
// 而是在特定的时间或条件发生时由另一方调用的，用于对该事件或条件进行相应
//  
// 
// 
//举个例子
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
// 回调函数： 回过头来再调用哈哈哈哈哈哈哈哈哈
// 有什么用呢？
// 
// 再举个例子
// 我们运用上一节课示例 计算器 
// 使用的是冗余的switch语句
// 我们通过回调函数继续优化
// 冗余在每一个case语句都是重复的操作
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
//	printf("请输入两个操作数字：");
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
//		printf("请选择：");
//			scanf("%d", &n);
//
//			switch (n)
//			{
//				//我们初步的想法是将每一个case语句里的代码进行封装
//				//成为一个函数，但是我们在每个case里面实现的又是不同的算数 函数+-*\
//				//那么我们就
//			case 1:
//				//printf("请输入两个操作数字：");
//				//scanf("%d %d", &x, &y); 
//				//ret=add(x, y);
//				//printf("结果= %d\n", ret);
//				clc(add);
//				break;
//			case 2:
//				/*printf("请输入两个操作数字：");
//				scanf("%d %d", &x, &y); 
//				ret=sub(x, y);
//				printf("结果= %d\n", ret);*/
//				clc(sub);
//					break;
//			case 3:
//				/*printf("请输入两个操作数字：");
//				scanf("%d %d", &x, &y); 
//				ret=mul(x, y);
//				printf("结果= %d\n", ret);*/
//				clc(mul);
//					break;
//			case 4:
//			/*	printf("请输入两个操作数字：");
//				scanf("%d %d", &x, &y); 
//				ret=div(x, y);
//				printf("结果= %d\n", ret);*/
//				clc(div);
//					break;
//				case 0:
//					printf("退出\n");
//					break;
//				default:
//				{
//					printf("请重新输入：\n");
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
///////真滴Cxdm
// 我们继续讲啦
// 我们刚刚讲了回调函数的例子：
// 再来一个
// 
// 
// qsort是一个库函数
// 基于快速排序算法实现的一个排序的函数
// 有什么牛逼的呢？
// 它能排任意类型的数据
// 我们写的排序不一定能 例如test1（）
// 我们探究一下它的使用
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
//	//排序为升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	buddle_sort(arr, sz);
//	print_arr(arr, sz);
//	//这样我们的函数就被固定住了，我们只能对int 类型的数据进行排序
//	return 0;
//}
//int cmp_int(const void*e1,const void*e2)
//{
//	//if(*e1> *e2)   //err
//	//e1 e2 是不确切类型的指针，不能直接解引用
//	//我们要明确它的指针类型
//	//它怎么想呢？ 
//	//它是个垃圾桶
//	//int a = 10;
//	//float* pf = &a;//err 
//	//void* pf = &a;//不报错
//	//pf+1；//err不知道加多少字节
//	//*pf  //err 寄
//	//那么到底该怎么做呢？
//	//如下
//	//if (*(int*)e1 > *(int*)e2)
//	//{
//	//	return 1;
//	//}
//	//else if ((*(int*)e1 == *(int*)e2))
//	//	return 0;
//	//else
//	//	return -1;
//	//简化后：
//	return (*(int*)e1 - *(int*)e2);
//}
//void test2()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//假设排序的是整型数据： 用>  <
//	//但如果是结构体数据进行比较，那么拿啥来比较？
//	//我们可能不方便直接用大于小于号来比较
//	//使用者根据实际情况，提供一个函数，来实现2个数据的比较~
//	//函数的
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//
//}
////
////使用qsort 排序结构体
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//int cmp_stu_by_age(const void* e1,const void* e2)//按照年龄排序
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//} 
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);//升序
//	return strcmp(((struct stu*)e2)->name, ((struct stu*)e1)->name);//降序（就是添加一个负号）
//
//}
// 
// 
// 
// 
////strcmp是字符串比较，按照字典顺序进行比较，从头开始进行每一位字母的比较，相同就跳到下一个
//void test3()
//{
//	struct stu arr[3] = { { "zhangsan",20,55.5},{"llisi",50,88.0},{"wangwu",30,90.0} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
// //最后这个函数是 排序方法函数，肯定会在qsort内部被调用很多次的
//
//}
////
//int main()
//{
//	//test2();//可以运行
//	test3();//调试来看效果F10 
//	return 0;
//}
//我们通过cplusplus 看看qsort函数的定义嘿嘿
//
//void qsort(void* base,//待排序数据的其实位置
//	size_t num,//数组元素个数
//	size_t size,//一个元素的字节大小
//	int (*compar)(const void*e1, const void*e2)//函数指针 
//// compar是一个比较函数，      待比较的两个元素的地址
////返回类型是Int,   有三种值  大于0的数  0   小于0的数
//);
// 
// strcmp 这个函数也是非常的厉害，它比较的是字母的ASCII码值
// 我们这里主要还是讲的qsort函数的使用方法
// 
// 
//void qsort(void* base,//待排序数据的其实位置
//	size_t num,//数组元素个数
//	size_t size,//一个元素的字节大小
//	int (*compar)(const void*e1, const void*e2)//函数指针 
//// cmp是一个比较函数，      待比较的两个元素的地址
////返回类型是Int,   有三种值  大于0的数  0   小于0的数
//);
//
//
	//我们想实现一下万能冒泡排序
//
// qsort函数的作者能不能想到今天我们使用qsort排序什么具体类型的数据呢？
// 不会
// 所以才使用 void* 指针
// 我们使用base ， 以及 元素个数  以及宽度 （元素的字节大小）
// 函数指针
// 数据类型不同，比较方法不同
// 我们应该对此 针对冒泡排序重新设计
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
//	//void* base 表示我也不知道地址类型是什么，然后传入的e1 e2我们也同样保留余地
//	int i = 0;
//	for (i = 0; i < num-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < num - 1; j++)
//		{
//			//我们暂时不知道该如何比较两个元素的大小，所以先分析一下
//			//默认升序的话， cmp函数>0 ,我们要交换
//			//假设以int为例子{9，8，7，6，5，4，3，2，1}
//			//我们要在cmp函数中传入要比较的两个元素的地址
//			//9是base,首元素
//			//我们强制类型转换成(char*)base+width 这样就找到了我们下一个元素8
//			//7的地址就是（char*)base+(j+1)*width
//			//if (cmp(, ) > 0)
//			if(cmp((char*)base+width*j,(char*)base+width*(j+1)) > 0)
//			{
//				//交换
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
//	//return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);//升序
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);//降序
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
// 其实我们通过冒泡排序模拟实现这个qsort函数还是有差异的，我们需要
// 自己提供 不同数据类型 的比较函数放入程序中
// 这样才能使我们的比较能够正常进行
// 今天的课就这么结束了嘿嘿
// 
// 
// 
// 
// 作业练习，1.模拟实现qsort函数
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
////void fun(int arr[], int sz, int width, int(*by_int)())//起始位置指针类型不应该确定
//void fun(void* base,int sz,int width,int(*by_int_p)(const void*e1,const void* e2))//by_int回调函数
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - i-1; j++)
//		{
//			if (by_int_p((char*)base + width * j, ((char*)base + width * (j + 1))) > 0)//判断函数
//			{
//				//int tmp = arr[j];
//				//	arr[j] = arr[j+1];
//				//	arr[j+1]=tmp;
//				swap((char*)base + width * j, (char*)base + width * (j + 1), width);//使用交换函数
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
// 作业练习2， 使用qsort函数
//  
// 
// 
//void qsort(void* base,//待排序数据的其实位置
//	size_t num,//数组元素个数
//	size_t size,//一个元素的字节大小
//	int (*compar)(const void*e1, const void*e2)//函数指针 
//// cmp是一个比较函数，      待比较的两个元素的地址
////返回类型是Int,   有三种值  大于0的数  0   小于0的数
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