#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//指针和数组笔试题解析
//int main()
//{
//	//sizeof  计算的是对象所占内存的大小，单位为字节
//	int a[] = { 1,2,3,4 };
//	//1.sizeof(数组名） ，这里的数组名表示整个数组，计算的是整个数组的大小
//	//& 数组名，这里的数组名表示整个数组，去除的是整个数组的地址
//	printf("%d\n", sizeof(a));//      16
//	printf("%d\n", sizeof(a+0));// 4/8 取决于编译器位数  a+0是数组第一个元素的地址，是地址，大小就是4/8个字节
//	printf("%d\n", sizeof(*a));//  数组首元素的地址，*a表示数组的第一个元素，sizeof(*a)就是第一个元素的大小 4字节
//	printf("%d\n", sizeof(a+1));//数组第二个元素的地址 4字节
//	printf("%d\n", sizeof(a[1]));//  数组第二个元素   4字节
//	printf("%d\n", sizeof(&a));//  取出的是数组的地址  ，但也是地址 4字节
//	printf("%d\n", sizeof(*&a));//  取地址再解引用，属于第一种情况 16字节
//	printf("%d\n", sizeof(&a+1));//  &a拿到的是数组地址，+1 跳过数组，指向后面位置的地址 4/8字节（取决于编译器位数）
//	printf("%d\n", sizeof(&a[0]));//  取出的数组第一个元素的 地址 4/8 
//	printf("%d\n", sizeof(&a[0]+1));//  取出的是数组第二个元素的地址  4/8
//	return 0;
//}
// 
// 
// 下一题
// 
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//    6 
//	//strlen 我们会生成随机值，它会在数组后面的内存找到\0才结束
//	printf("%d\n", sizeof(arr+0));//  1，首元素地址
// 	printf("%d\n", sizeof(*arr));//   1  首元素内容 char
//	printf("%d\n", sizeof(arr[1]));// arr[1]  数组的第二个元素，大小是 1字节
//	printf("%d\n", sizeof(&arr));//   取出的是数组的地址  地址 4/8字节
//	printf("%d\n", sizeof(&arr+1));//  取地址+1  还是地址  4/8字节
//	printf("%d\n", sizeof(&arr[0]+1));// 取首元素的地址+1 ,第二个元素的地址 4/8字节
//	return 0;
//}
// 
// 
// 在界面上方能够更换平台位数  选择x64 位平台
// 选择后会出现警告，这里我们的sizeof  会默认返回unsigned long long 类型的数据，对应printf 也要改成%llu
// 
//第三题
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//     arr无\0会在数组后面继续数，直到发现\0  随机值
//	printf("%d\n", strlen(arr+0));//   首元素的地址  随机值
//	//printf("%d\n", strlen(*arr));//不报错，但是有问题 且编译器发现不了    数组首元素  char 'a'=97，锤子看什么都是钉子，看见就要敲一敲 在指针的眼里什么都是地址，97不能是地址，会访问出错err   
//	//printf("%d\n", strlen(arr[1]));//不报错，但是有问题 且编译器发现不了  我们把98传给指针，也是错误的err
//	printf("%d\n", strlen(&arr));//    取出的是整个数组的地址，还是随机值
//	printf("%d\n", strlen(&arr+1));//  数组后面的的地址  随机值
//	printf("%d\n", strlen(&arr[0]+1));//  第二个元素的地址 随机值
//	return 0;
//	//我们向内存申请空间  是   创建变量
//	//sizeof是操作符
//}
// 
// 
//第四题 
// 
int main()
{
	char arr[] = "abcdef";// abcdef\0
	printf("%d\n", sizeof(arr));// 数组总大小 7 
	printf("%d\n", sizeof(arr+0));//    数组首元素地址 4/8个字节
 	printf("%d\n", sizeof(*arr));//   数组首元素地址解引用  'a'=1字节
	printf("%d\n", sizeof(arr[1]));// 下标位1 的元素  数组的第二个元素 1字节
	printf("%d\n", sizeof(&arr));//   数组的地址   4/8字节
	printf("%d\n", sizeof(&arr+1));//  数组\0后面的地址  4/8字节
	printf("%d\n", sizeof(&arr[0]+1));//  数组第二个元素的地址  4/8字节
	return 0;
}
// 
// 
// 第五题
int main()
{
	char arr[] = "abcdef";// abcdef\0
	printf("%d\n", strlen(arr));//     
	printf("%d\n", strlen(arr+0));//   
	printf("%d\n", strlen(*arr));//
	printf("%d\n", strlen(arr[1]));//
	printf("%d\n", strlen(&arr));//   
	printf("%d\n", strlen(&arr+1));//  
	printf("%d\n", strlen(&arr[0]+1));// 
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