#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//编写代码实现：求一个证书存储在内存中的二进制1的个数
//	//只是其中一种写法，但并不是最巧妙地解法 
//	//我们这里使用了 向右移动操作符 和 按位与
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((a >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//
//赋值操作符
//
//将变量进行赋值。
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int x = 0;
//	int y = 20;
//	a = x = y + 1;//连续赋值
//	//从右依次向左赋值
//	return 0;
//}
// 
//复合赋值符
//
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	a = a + 2;
//	a += 2;//this 
//	a = a >> 1;
//	a >>= 1;//this
//	a = a & 4;
//	a &= 4;//this
//	return 0;
//}
//
//单目操作符
//  !  反逻辑操作符
//  -  负值
//  +  正值
//  &  取地址
//  sizeof  操作数的类型长度（以字节为单位）
//    ~  对一个数的二进制按位取反
// --   前置/后置
//++    前置/后置
//  *   间接访问操作符（解引用操作符）
//（数据类型）   强制类型转换
//第一种  ！ 反逻辑操作符
//#include<stdio.h>
//	#include<stdbool.h>
//int main()
//{
//	//在C99之前，没有表示真假的类型，于是用01 表示真假
//	//C99种引用了布尔类型
//	//#include<stdbool.h>//在C++中比较常见
//	_Bool flag = true;
//	_Bool flag1 = false;
//	bool flag2 = true;
//	if (flag2)
//	{
//		printf("1");
//	}
//	int num = 10;
//	if (num)//非0为 真
//	{
//
//	}
//	if (!num)//0为   假
//	{
//
//	}
//		return 0;
//}
//
//取地址&  ，解引用操作符*
//
//#include<stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int a = 10;
//	int* pa = &a;//将a的地址存放到整形指针当中去
//	int arr[10] = { 0 };
//	//定义一个数组
//	&arr;//取出数组的地址，数组的地址应该放到【数组指针】中去
//	///
//	//结构体
//	struct S s = { 0 };
//	struct S* ps = &s;//创造一个结构体指针，将结构体s的地址存放到ps中去
//	//函数也可以，但是先不讲啦
//	//
//	//解引用操作符/间接访问操作符
//	*pa = 20;//通过pa指针，找到我们指向的对象 a 然后进行访问，读取到a的数据 
//	//可以理解为 *pa=a;这里因为pa是指针变量，所以通过一个* 来解引用还原成了a
//	*&a == a;//脱裤子放屁
//	return 0;
//}
//
//	sizeof 
//  sizeof  操作数的类型长度（以字节为单位）
//操作数的类型长度（以字节为单位）
//#include<stdio.h>
//int main()
//{
//	//int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	//sizeof是一个操作符，为什么呢，因为可以省略括号
//	printf("%d\n", sizeof a);//变量可以。数据类型不行
//	//printf("%d\n", sizeof int);//报错
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	//计算类型创建的变量所占内存的大小，单位是字节
//	//在函数内部传参之后，大小就不一样了
//	int a = 10;
//	short s = 0;
//	printf("%d\n", sizeof(s = a + 2));//2
//	printf("%d\n", s);//0
//	//为什么是2 0 ，因为sizeof内部中的表达式不参与计算
//	//为什么不参与运算 sizeof是在编译期间处理的 自动处理sizeof获得值为2 不会再运行阶段中进行
//	return 0;
//}
//sizeof数组
//#include<stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])//字符指针的仍然为4 字节（里面放的是字符的地址，地址！地址！）
//{
//	printf("%d", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//		test2(ch);
//	return 0;
//}
//
//~ 对一个数的二进制序列按位取反
//
//#include<stdio.h>
//int main()
//{
//	int a=0;
//	printf("%d\n%d\n",a, ~a);
//	return 0;
//}
//有什么用呢
//
#include<stdio.h>
int main()
{
	int a = 11;//00000000000000000000000000001011
	// 把0改成1  00000000000000000000000000000100
	a |= (1<<2);//这就是4 的右移表示  数字1 在二进制中向左移动两位
	//复习： 按位与 &  二者补码同时为1 则补码 为1 
	       //按位或 |  二者补码有一个为1 则补码为1 
	     //按位异或 ^  二进制位相同为0 相异 为1
	printf("%d\n", a);
	//此时a变成了              00000000000000000000000000001111
	//如果我们想要还原成原先的 00000000000000000000000000001011
	//就需要使用我们的    ~   按位取反操作符 
	a &= (~(1 << 2));//(~(1<<2)11111111111111111111111111111011
	//这么 按位与 之后
	//那么a又还原为原先的11了
	printf("%d", a);
	return 0;
}













