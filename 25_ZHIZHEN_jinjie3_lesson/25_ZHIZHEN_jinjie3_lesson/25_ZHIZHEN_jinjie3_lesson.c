#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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
	printf("请输入两个操作数字：");
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
		printf("请选择：");
			scanf("%d", &n);

			switch (n)
			{
				//我们初步的想法是将每一个case语句里的代码进行封装
				//成为一个函数，但是我们在每个case里面实现的又是不同的算数 函数+-*\
				//那么我们就
			case 1:
				//printf("请输入两个操作数字：");
				//scanf("%d %d", &x, &y); 
				//ret=add(x, y);
				//printf("结果= %d\n", ret);
				clc(add);
				break;
			case 2:
				/*printf("请输入两个操作数字：");
				scanf("%d %d", &x, &y); 
				ret=sub(x, y);
				printf("结果= %d\n", ret);*/
				clc(sub);
					break;
			case 3:
				/*printf("请输入两个操作数字：");
				scanf("%d %d", &x, &y); 
				ret=mul(x, y);
				printf("结果= %d\n", ret);*/
				clc(mul);
					break;
			case 4:
			/*	printf("请输入两个操作数字：");
				scanf("%d %d", &x, &y); 
				ret=div(x, y);
				printf("结果= %d\n", ret);*/
				clc(div);
					break;
				case 0:
					printf("退出\n");
					break;
				default:
				{
					printf("请重新输入：\n");
				}
			}
	} while (n);
	return 0;
}
// 缺点： 冗余
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
//