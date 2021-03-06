#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//今天只是指针进阶
//浮点数存储学完是增加其我们的内功而已，不是什么别的东西啦
//不要专注于特别奇奇怪怪的
//《深入理解计算机系统》这本书可以慢慢去看
//指针进阶！！！！！！！！！！！！！！！！！嘎嘎猛
//主要讲的内容有：
// 字符指针 数组指针  指针数组  数组传参和指针传参  函数指针   函数指针数组  指向函数指针数组的指针
//回调指针 等等 
//
// 指针的概念：
//指针就是个变量，用来存放地址，地址唯一表示一块内存空间-->内存会划分小的内存单元
// 每个内存单元都有一个编号，这个编号就被称谓地址，把地址也叫指针
// 内存编号=地址=指针（一个二进制数值）
// 
// 指针的大小是固定的4或8个字节（32位平台或64位平台）
// 
// 指针是有类型的，指针的类型决定了指针的+-整数的步长，指针解引用操作的时候的权限。
// 
// 指针的运算
// 
//指针可以+ -整数 
// 指针可以-指针
// 指针的关系运算（可以比较大小）
//  
// 
// 
// 1.字符指针
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;//字符变量的地址放入字符指针
//	*pc = 'a';//重新赋值
//	printf("%c\n", ch);
//	return 0;
//}
// 
// 
//int main()
//{
//	char const* p = "abcdef";//常量字符串，不能被改变
//	*p = 'w';//崩溃  //加入const后它都直接报警告了
//	//常量字符串不能被修改，它是存放在常量区的
//	// 	   这样的写法是非常危险的
//	//p是指针变量，在x86环境是4个字节，7个字符肯定存不下
//	//这里我们是将“abcdef”这个字符串的起始地址放入指针变量p
//	printf("%c\n", *p);//打印起始的字符
//	printf("%s\n", p);//打印字符串需要起始位置的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//类似于这个方式
//	return 0;
//}
// 
// 面试题目
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (p1 == p2)
//	{
//		printf("p1==p2\n");
//	}
//	else
//	{
//		printf("p1!=p2\n");
//	}
//	if (arr1== arr2)
//	{
//		printf("arr1==arr2\n");
//	}
//	else
//	{
//		printf("arr1!=arr2\n");
//	}
//	return 0;
//}
// 为什么呢？
// 两个常量字符串 一摸一样，并且谁都不能被修改，这样的字符串没有必要保留两份
// 所以我们只会保存一份，这样一来内存节省。所以实际上这个常量字符串是同一个
// 和const 无关
// 下面的arr1 arr2，这两个数组初始化了内容为“abcdef\0”
// 两个数组的首元素的地址 分别在不同的位置，所以二者不可能相等，即使内容相同
// 
// 2.指针数组：
// 指针章节我们也学过了指针数组，指针数组是一个存放指针的数组
// 整型数组：
// int arr[10];
// 
// 字符数组
// char arr2[5];
// 
// 指针数组
// 存放指针的数组
//int main()
//{
//	//int* arr[10];//存放整型指针的数组
//	//char* ch[5];//存放字符指针的数组
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//一般来说
//	int* p1 = &a;
//	int* p2 = &b;
//	int* p3 = &c;
//	int* arr[3] = { &a,&b,&c };//arr就是一个指针数组,存放的是数组的地址
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}
// 上面的例子很少用到，下面这个常见一点
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//	int* parr[3] = { arr1,arr2,arr3 };//指针数组，这个写法比较常见
//	 //0 1  2
//	//0 --> 01234
//	//模拟了一个二维数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ",*(parr[i]+j));
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//简简单单 哈哈哈哈哈哈哈哈哈哈哈哈，装起来了家人们
// 挺6的家人们 
// 这里是模拟二维数组，不是真正的二维数组
// int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6}.{3,4,5,6,7}};
// 真正的二维数组的地址这些都是连续存放的
// 
//数组指针：
// 数组指针的定义：
// 是指针
// 
// 我们之前讲过整型指针
//int main()
//{
//	int* p;//整型指针
//	int a = 10;
//	*p = &a;//整型指针---指向整型的指针，存放整型变量地址的
//	char ch = 'w';
//	char* pc = &ch;//字符指针--指向字符的指针，存放的是字符变量的地址
//	//
//	//数组指针---指向数组的指针
//	//来了！
//	return 0;
//}
// 
//我们开始区分一下：
// int* p1[10];
// int(*p2)[10];
// p1就是我们的数组名，10个元素，p1是数组，存放的是指针  ，指针数组
// p2和一个*结合，p2也是一个指针，指向的是数组，十个元素的数组，每个元素的类型是int
// int(*p2)[10]----->int arr[10];
// 现在简单了解一下就是，没那么明白没有关系
//  
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int arr[10] = { 0 };
//	//数组也要在内存中开辟空间，我们怎么拿到数组地址？
//	//数组名是首元素地址
//	//&arr,取出的是数组首元素的地址
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr[0]);
//	printf("\n");
//	//结果一摸一样
//	//即使是数组的地址也是从头开始，数值上相同是应该的
//	//但是如果我们+1
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	return 0;
//}
// 
// int (*p)[10]=&arr;//p是个指针，指向数组arr，总共10个元素,类型为int
// 这就是数组指针，指向数组的指针
// 
// 举例：
// char* arr[5];
// char(*p)[5]=&arr;
// 
// 讲到了这里，我们就已经明确了
// 现在明确一下数组名到底是什么东西。
// &数组名   数组名
// 总结一下：
// 数组名一般都是数组首元素的地址
// 但是有两个例外
// 1.sizeof(数组名）。这里的数组名表示整个数，sizeof(数组名）计算的是整个数组的大小
// 2. &数组名，这里的数组名表示整个数组，&数组名，取出的是整个数组的地址
// 数组指针就是这样，那么到底有什么用呢？
// 一般不会在一维数组上使用
//void print1(int arr[], int sz)//数组形式
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void print2(int* arr, int sz)//指针形式
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//	printf("\n");
//}
//void print3(int(*p)[10], int sz)//指针形式
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*p+i));//很别扭，*p相当于数组名，数组名又是首元素地址
//		//所以*p就是&arr[0]
//		//总结：指针数组很少对一维数组进行操作
//		//这不是推荐的写法，我们只是为了说明这玩意儿很少在一维数组中使用而已啦
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print1(arr, sz);
//	print2(arr, sz);
//	print3(&arr, sz);
//
//	return 0;
//}
// 
//
//二维数组示例
//void print2(int arr[3][5],int c,int r)
//{
//	int i = 0;
//	for (i = 0; i < c; i++) 
//	{
//		int j = 0;
//		for (j=0; j < r; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print3(int(*p)[5], int c, int r)//降低维度了实际上，我们用了一个一级数组指针，表达出了一个二维数组
//{
//	int i = 0;
//	for (i = 0; i < c; i++)
//	{
//		int j = 0;
//		for (j = 0; j < r; j++)
//		{
//			//*(p+i)相当于拿到了第i行，相当于拿到了其数组名
//			//数组名表示首元素的地址，*（p+i)
//			printf("%d ", *(*(p + i) + j));
//			//
//			//printf("%d ", *((*p + i) + j));///其实就是在行地址的基础上多加了i+j
//			//没有进行“行hang"变换，实际上还是在第一行上进行操作
//			//
//			printf("%d ", p[i][j]);//它的实际表达式就是第一个
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	//二维数组嘎嘎舒服
//	//听说的
//	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
//	//写一个函数，打印arr数组
//	//其实二维数组里面，每一个数组都是一个元素
//	//每个数组元素里面又有五个元素
//	print2(arr, 3, 5);
//	//数组指针类型写法
//	print3(arr, 3, 5);
//	//非要取地址的话
//	int(*p)[3][5] = &arr;
//	return 0;
//}
//void fun(char* p, int sz, int n)
//{
//	char tmp = 0;
//	int i,j;
//	i = 0;
//	for (j = 0; j < n; j++)
//	{
//		tmp = *p;
//		for (i = 1; i <sz; i++)
//		{
//			*(p +i-1) = *(p + i);
//		}
//		*(p + sz-1) = tmp;
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char arr[10] = { "ABCDEF" };//ACDEBF
//	int sz = strlen(arr);
//	fun(arr,sz,n);
//	printf("%s", arr);
//	return 0;
//}
// 
// 
// 
// 
int findnum(int a[][3], int x, int y, int f) //第一个参数的类型需要调整
{
	int i = 0, j = x - 1; //从右上角开始遍历

	while (j >= 0 && i < y)
	{
		if (a[i][j] < f) //比我大就向下
		{
			i++;
		}
		else if (a[i][j] > f) //比我小就向左
		{
			j--;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int a[][3] = { {1, 3, 5},
				  {3, 5, 7},
				  {5, 7, 9} }; //一个示例

	if (findnum(a, 3, 3, 2))
	{
		printf("It has been found!\n");
	}
	else
	{
		printf("It hasn't been found!\n");
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
// 
//
