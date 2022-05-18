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
// 函数指针  
//概念--指向函数的指针
// 
// 数组指针我们是把数组的指针取出来了，那么函数指针取出的就是函数
//示例
//int add(int x, int y)
//{
//	return x + y;
//}
//int test(char* ptr)
//{
//
//}
//int main()
//{
//	int arr[10];
//	int(*p)[10] = &arr;//p是一个数组指针的变量
////指针类型就是 int (*) [10]
//	//函数指针到底是怎么回事儿呢
//	//&add拿到的是函数的地址
//	printf("%p\n", &add);
//	//真的可以打印
//	printf("%p\n", add);//写法不同，但是意义完全一样 完全一样
//	//意义就是 拿到 函数的地址
//	//如果我们非要存函数的地址
//	int (*pf)(int, int) = add;//这就是函数指针，前面分别是 返回值  指针  形参
////指针类型是int (*)(int,int)
//	int (*pf2)(char*) = test;
////返回类型 指针  形参
//	//找到函数
//	//int ret=pf(2,3);
//	//int ret=(*pf)(2, 3);//牛逼 我们通过函数指针调用哈哈哈哈哈
//	int ret = (****pf)(2, 3);
//	printf("%d\n", ret);//我们发现*其实是个摆设  加几个*/没有* 这些都是没有关系的
//	return 0;
//}
// 定义 和 使用 以及 类型 ，我们就全讲完了
// 
// 
//代码1
//(*(void(*)() )0 )();
// 我们又开始讲代码了
// void(*)()  是一个函数指针类型
// 把这个类型(void(*)() )放在一个括号里面是什么，是强制类型转换
// （类型）
// 对谁进行强制类型转换呢？
// 对0
// (void(*)() )0 对0进行强制类型转换这样一个函数指针，对应在0地址处放上这么一个函数
// 返回类型为void ，参数为空的函数
// 对0进行解引用，相当于对函数解引用
// 后面的传参为空，因为参数本身就为空
// 
// 首先是把0强制转换成一个函数指针类型
// 意味着0地址处放着一个返回类型为void ，参数为空的函数
// 第二步  开始调用 0地址出的函数（其实前面的最前面的*也可以省略掉，这个参考我们的函数指针使用方法）
// 我们的目的只是为了复习代码，不要刻意关注0地址
// 我们这里就讲到了一本书《C陷阱与缺陷》
// 
// 
//代码2
//
//void ( *signal(int, void(*)(int)) )(int);//函数声明
// 
// signal 首先和后面的小圆括号结合
// signal(int, void(*)(int))
// 说明signal是一个函数名，第一个参数是整型数据类型，第二个是函数指针类型数据类型
// 类型     类型
// int, void(*)(int)
//剩下的返回值的 类型 是
// void(*)(int)  就是函数指针
// 这是一个组合，把这个函数signal包在一起了
// 
// signal 是一个函数的声明，函数的参数第一个是int 类型的，第二个是 函数指针类型的
// 然后signal的函数返回值类型也是void(*)(int)
// 能不能简化呢？
//typedef void(*pf_t)(int);//给函数指针类型重新命名 叫做pf_t
//pf_t signal(int, pf_t);// 这样写就足够简单啦
//在日常写代码中可能很难写出这种东西，但是别人写的时候我们最好能够读懂这样的代码
// 这不是啥写代码的日常
// 我们就是根据语法来进行操作的
// 
// 
// 
// 函数指针数组
//来吧
// 
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
//	//指针数组：
//	//字符指针数组
//	char* arr[5];//每个元素是char*
//	int* arr2[4];//整型指针数组  每个元素是int
//	//
//	//函数指针数组
//	// 
//	//int (*pf1)(int, int) = add;
//	//int (*pf2)(int, int) = sub;
//	//int (*pf3)(int, int) = mul;
//	//int (*pf4)(int, int) = div;
//	//数组：
//	//
//	int(*pf[4])(int, int) = { add,sub,mul,div };
//	//函数指针数组 一个相同类型指针的集合
//	//语法都相同，我们可以省略4进行初始化
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",pf[i](8, 2));
//	}
//	//可以通过调试观察这个过程
//	//
//	return 0;
//}
// 
// 
// 讲个例子，说说我们函数指针的用途，让我们一起感受感受
//比如说，我们要 实现一个计算器的功能
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
//			case 1:
//				printf("请输入两个操作数字：");
//				scanf("%d %d", &x, &y); 
//				ret=add(x, y);
//				printf("结果= %d\n", ret);
//					break;
//			case 2:
//				printf("请输入两个操作数字：");
//				scanf("%d %d", &x, &y); 
//				ret=sub(x, y);
//				printf("结果= %d\n", ret);
//					break;
//			case 3:
//				printf("请输入两个操作数字：");
//				scanf("%d %d", &x, &y); 
//				ret=mul(x, y);
//				printf("结果= %d\n", ret);
//					break;
//			case 4:
//				printf("请输入两个操作数字：");
//				scanf("%d %d", &x, &y); 
//				ret=div(x, y);
//				printf("结果= %d\n", ret);
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
// 缺点： 冗余
// 我们进行优化
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
int main()
{
	int n = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	//int (*pfarr[5])(int, int) = { 0,add,sub,mul,div };
	//修改
	int (*pfarr[])(int, int) = { 0,add,sub,mul,div };//不写元素个数然后添加函数
	//美滋滋

	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &n);
		if (n == 0)
			printf("退出计算器\n");
		else if (n >= 1 && n <= 4)
		{
			printf("请输入两个操作数\n");
			scanf("%d %d", &x, &y);
			int ret = pfarr[n](x, y);
			printf("%d\n", ret);
		}
		else
			printf("选择错误\n");
	} while (n);
	return 0;
}
// 这才是真正的函数指针的用途
// 相当于一块跳板，这个东西我们叫做转移表
// 有跳转的效果
// 很奇妙
// 很巧妙
// 比我们的switch 真正的好用多了
// 但是要求我们函数的返回参数是一致的嘿嘿
// 真好，牛逼！！！
// 好的代码就是经验积累出来的，我们这里真的雀氏能够感受到好的代码的感觉，真好
// bit牛逼哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈
// 真好，兄弟们下班啦，拜拜拜拜拜
// 我们作业章节再见面把！
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
//




























































































