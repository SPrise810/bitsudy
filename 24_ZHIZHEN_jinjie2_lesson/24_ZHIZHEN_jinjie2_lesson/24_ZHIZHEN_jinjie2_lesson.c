#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//指针数组
//是数组，存放的是指针
//char* arr[6];
//
//数组指针
//是指针，指向数组的指针
//
//int main()
//{
//	//数组指针
//	int arr[10] = { 0 };
//	int(*p)[10]=&arr;
//	return 0;
//}
////
//int main()
//{
//	int arr[5];//整型数组，每个元素是int 类型的，有5个元素
//	int* parr1[10];//parr1是一个数组，数组10个元素，每个元素的类型是int*
//	int(*arr2)[10];//parr2是一个指向数组的指针，指向的数组有10个元素，每个元素的类型是int
//	int(*parr3[10])[5];//parr3是数组，10个元素，每个元素类型是int(*)[5];
//	//数组指针 数组
//	return 0;
//}
// 
// 
//数组参数、指针参数
// 
// 一维数组传参
//void test(int arr[10])  这里的10没有意义，数组名传参传过去的是首元素的地址
// 我们不会在形参创建数组，所以数组在传参的时候指挥传递地址，里面的数可以乱写
// 我们写成数组的形式只是为了我们学习指针之前做个合理的解释进行铺垫
//void test(int arr[])
//void test(int arr[100])  可以但是不建议
//写成指针形式：
//void test(int* p)
//
// 
//test2:
//void test2(int* arr[20])
//void test2(int* arr[])
//void test2(int**p)
//解释：
//int a=10;
//int* p=&a;
//int** pp = &p;
//
//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	int* arr2[20] = { 0 };//指针数组
//	//我们这里的区别是  元素类型不一样
//
//	test(arr);
//	test(arr2);
//	
//	return 0;
//}
// 
// 
// 
// 二维数组传参
//void test(int arr[3][5])
//void test(int arr[][5])  二维数组本质上也还是连续存放的，我们要把列分开
//写成数组的形式容易让人理解
//
//形参写成指针形式：
//void test(int(*p)[5])
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}
// 
// 
// 二级指针是用来存放一级指针的地址的
// 数组指针是用来存放数组的地址的
// 
// 其实我们在形参里面疯狂的写数组，但是本质上还是指针，编译器会进行转换
//4.3  一级指针传参
//void test(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	test(p,sz);//p是一级指针 
//	return 0;
//}
// 
//我们通过函数反过来看main函数里面传递什么我们也要能够得到其结果
// 
// 
// 二级指针：
//void test(char** p)
//{
//	printf("%c", **p);
//}
//int main()
//{
//	char a = 'w';
//	char* p = &a;
//	char** pa = &p;
//	test(pa);
//	return 0;
//}
// 
//void test(char** p)//二级指针 
//{
//
//}
//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	char** ppc = &pc;
//	test(&pc);
//	test(ppc);
//	char* arr[6];
//	test(arr);
//	return 0;
//}
// 
// 
//二维数组
//void test(char(*p)[6])//这是    行地址
//{
//
//}
//void test(char(*P)[3][5])//这是 整个二维数组的地址
//{
//	*p;//这里面是整个二维数组的数组名，又是首元素的地址，又是二维数组第一行的地址
//}
//int main()
//{
//	char arr[3][6];
//	test(arr);
//	test(&arr);
//	return 0;
//}
// 
// 
//
// 
//一级指针和二级指针就是这样滴 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
//




























































































