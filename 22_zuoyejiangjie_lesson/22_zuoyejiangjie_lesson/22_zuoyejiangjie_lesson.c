#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
// 
//int i;//全局变量如果没有初始化，默认会被初始化为0
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//sizeof 是一个操作符，这个操作符返回的结果是sizeof_t的，size_t是无符号整型
//当我们计算的时候，发现一个无符号的和有符号的时候
//我们会进行算术转换
// 知识点：
// 
// 算术转换
// 我们按照这个表格的形式进行向上转换,两者相见优先统一上面的形式
// long double
// double
// float
// unsigned long int
// long int
// unsigned int 
// int
// 
//i就会被转换成无符号
//11111111111111111111111111111111   （（-1）变成了一个正数）这个肯定大于4了
//
//在线OJ的题目，有2种形式
// IO型（输入，输出，main)
// 接口型代码（让你完成一个函数）
//
//题目：判断一个数的二进制中1的个数
//int NumberOf1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//} 
//int NumberOf2(unsigned int n)//利用十进制中计算每一位的方法，改进成二进制形式
//{
//	//十进制例如n=123
//	//计算每一位
//	//n%10
//	//n=n/10
//	//再n%10.....
//	int i = 0;
//	int count = 0;
//	//这里面涉及到了unsigned的问题
//	//如果我们想要知道一个负数的情况
//	//那么我们就很难，例如-1
//	//所以我们就需要转换成无符号数，这样就可以处理了
//	//例如-1
//	unsigned int m = n;//然后循环里把n换成m就行了，这是为了应对函数型OJ题目
//	//相应的函数接口的int n不要改动成 unsigned int n
//	for (i = 0; i < 32; i++)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//			n /= 2;
//		}
//	}
//	return count;
//}
//int NumberOf3(int n)
//{
//	int count = 0;
//	//n=n&(n=1)
//	//例如n=13
//	//1101--n
//	//1100--n-1
//	//&n=1100
//	//1011--n-1
//	//&n=1000
//	//0111--n-1
//	//&n=0
//	//有几个1就执行几次，效率高
//	while (n)
//	{
//		n = n & (n = 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", NumberOf1(n));
//	printf("%d\n", NumberOf2(n));
//	printf("%d\n", NumberOf3(n));
//
//	return 0;
//}
//
//
// 
// 
//写一个代码，判断两个数字二进制每一位不相同的数字的个数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int diff = 0;
//	//法1
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if (((m >> i) & 1) !=( (n >> i) & 1))
//	//	{
//	//		diff++;
//	//	}
//	//}
//	//法二
//	int tmp = n ^ m;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		diff++;
//	}
//	printf("%d", diff);
//}
//异或^
//相同为0，相异为1
//然后异或之后就可以进行0和1的判断了，就计算出结果了
//
//
//32位系统下，
//整型的大小为4字节
//指针占 4个字节
//操作系统能访问的最大内存空间： 2^32
//4 个字节--32个比特位 能描述2^32个地址
//64位环境下： 指针8个字节
//最大访问空间：2^64
//全局指针未初始化   默认初始化为 0
//
////小端存储模式
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//
//数组指针：int(*arr)[];
//指针数组 int* arr[];
//
// 
// 
// 
// 
//通过地址打印
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", *(p + i));
//	}
//	printf("\n");
//}
//void print2(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", *p);
//		p++;//但是缺点是改变p指向的元素位置
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	print2(arr, sz);
//	return 0;
//}
// 
// 
//逆置字符串的内容
//int main()
//{
//	char arr[1000] = { 0 };
//	//scanf("%s", arr);//空格是读不进来的
//	gets(arr);
//	int sz = strlen(arr);
//	char* left = arr;
//	char* right = arr + sz - 1;
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}
//	printf("%s", arr);
//	return 0;
//}
// 
// 
// 
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d", sum);
//	return 0;
//}
// 
// 水仙花数
// 
#include<math.h>
int main()
{
	//水仙花数实质上是一种自幂数
	//自幂数老多了，可以百度了解一下嘿嘿
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int n = 1;
		int tmp = i;
		while (tmp /= 10)
		{
			n++;
		}
		tmp = i;
		int sum;
		while (tmp)//1234
		{
			sum+=(int)pow(tmp % 10, n);//计算每一位的n次方，需要引用math头文件
			//pow返回double,我们进行强制类型转化
			tmp /= 10;
		}
		//比较
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
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
// 32443124
// 
//

//
//3124312





























































