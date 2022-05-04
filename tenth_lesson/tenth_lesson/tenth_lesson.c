#define _CRT_SECURE_NO_WARNINGS 1
//第十节—数组
//一维数组的创建和初始化
//数组是一组相同类型元素的集合
//C99 中引入了变成数组的概念，
//允许数组的大小用变量来指定，如果编译器不支持C99中的变量，那就不能使用
//我们可以进行测试编译一下代码：
//int main()
//{
//	int n = 10;
//	int arr[n];
//	return 0;
//}
//运行后我们发现编译失败，说明VS2019 是不支持 变长数组 的
//加上const 也不行，因为const 是常变量，实际上，它还是一个变量，就算添加编译还是报错

//1.2数组的初始化
//int main()
//{
//	int arr[10] = { 1,2,3,4 };//1  不完全初始化
//	char ch1[] = { 'a','b','c' };
//	char ch2[] = { 'a',98,'c' };//再ASCII表中，98就对应着字符b,这么些和上面的ch1相同
//	int arr[10];//如果我们 不对 数组 或者是 变量 进行初始化，他们里面存放的都是随机值
//	           // 全局变量以及静态变量如果不进行初始化，他们的初始值也是0
//	           //说到这里不得不回顾一下我们所学过的知识点
//	         //   C语言里面分为三个区，栈区 堆区  静态区   
//	         // 静态变量和全局变量都存储在静态区，而静态区的特点又是不初始化默认为0
//	//栈区里有  局部变量，形式参数  不初始化就是随机值
//	//字符数组初始化的方式比较多样
//	// 	   例如  char arr1[]="abc";    实际上是4个元素abc\0
//	// 	   char arr2[]={'a','b','c'};  这里面只有3个字符abc
//	// 	   如果我们规定大小
//	// 	   例如  char arr1[5]="abc";    实际上是5个元素abc\0\0
//	// 	   char arr2[]={'a','b','c'};  这里面只有5个字符abc\0\0
//	//
//	return 0;
//}
//特例：变长数组不能初始化，虽然平常用不到  变长数组机制
// 
//数组中特有的操作符，下标操作符[],数组名称 和 下标数字 是[]的两个操作数
//
 //////写代码赋值1~100
//#include<stdio.h>
//int main()
//{
//	int arr[100] = { 1,2,3,4,5,6 };
//	//printf("%d\n", sizeof(arr));
//	//printf("%d", sizeof(arr[0]));
//	//printf("%d", sizeof(arr) / sizeof(arr[0]));
//	//结果是400，因为数组的大小是100个元素，一个元素四个字节
//		int sz=(sizeof(arr) / sizeof(arr[0]));
//	 int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//
//1.4一维数组在内存中的存储
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
// int *p=&arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p<====>%p\n", i, &arr[i],p+i);//%p是用来打印地址的，默认16进制
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));//默认10进制
//	}
//	return 0;
//}
////&arr[0] = 009BFCE8
////& arr[1] = 009BFCEC
////& arr[2] = 009BFCF0
////& arr[3] = 009BFCF4
////& arr[4] = 009BFCF8
////& arr[5] = 009BFCFC
////& arr[6] = 009BFD00
////& arr[7] = 009BFD04
////& arr[8] = 009BFD08
////& arr[9] = 009BFD0C    
// 数组在内存中是连续存放的，他们都间接差四（因为是int 类型）
  //随着数组下标的增长，地址是由低到高变化的
//
// 2.  二维数组的创建和初始化
// 2.1  二维数组的创建
//
//#include<stdio.h>
//int main()
//{
	//int arr[3][5];
	 //   int int int int int 
		//int int int int int
		//int int int int int
	//在我们的感觉中，二维数组就是有一个行和列的数组
	//2.2 二维数组的初始化
	//int arr[3][5] = {1,2,3,4,5,6};//12345    60000
	//int arr[][5] = {1,2,3,4,5,6};//12345    60000  //可以省略行数，根据列数确定行
//	int arr[3][5] = { {1,2},{3,5},{5,6} };  //  12000  35000   56000
//	//int arr[4][5] = { 0 };//默认初始化都是0
////       二维数组的访问
//	int i;
//	for (i = 0; i < 3; i++) //等于sizeof(arr)/sizeof(arr[0])
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)//*******等于sizeof(arr[2])/sizeof(arr[2][0])
//		{
//			printf("&arr[%d][%d]= %p \n",i,j, &arr[i][j]);//二维数组在内存中也是连续存放的
//		}
//		//printf("\n");
//	}
//	return 0;
//} 
//C语言支持多维数组，三维数组一般理解为多个二维数组  但是用的真不多，45等等数组都行
//
// 3.数组的越界
// 数组的下标都是从0开始的，如果数组中有n个元素，那么最后一个元素的下标就是n-1
// 如果，数组下标小于0或者大于n-1，那么就是数组越界访问，超出数组的合法空间
// 编译器不会报错，但是会出问题！它没有发现而已啦
// 
// 4.数组作为函数参数
// 4.1  冒泡排序函数的错误设计
//#include<stdio.h>
//void buddle_sort(int arr[],int sz)//(int* arr相当于 int arr[]) 
//{
//	int i = 0;
//
//	for (i = 0; i < sz-1;i++)//冒泡次数
//	{
//		int flag = 1;//假设已经有序
//		int j = 0;
//		for (j = 0; j <sz-1-i;j++)// 冒泡过程    为什么是sz - 1 - i
//			//因为当为10个元素的时候，要比较9对   9个元素比较8对 第三次冒泡只剩下7对，前面的几对已经排好序了
//			//每次比较以及交换的对数 在发生变化 
//		{
//			if(arr[j]>arr[j+1])
//				{
//					flag = 0;//进入交换说明不是有序的
//					//交换
//					int tmp=arr[j];
//					arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//				}
//		}
//		if (1 == flag)
//		{	
//		break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,4,6,1,2,3,5,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	buddle_sort(arr,sz);//冒泡排序    传过去的是数组首元素的地址
//	////数组中两个相邻的元素进行比较，如果不满足顺序就交换
//	////排序为升序，数组中两个相邻的元素
//	////897654
//	////879654
//	////876954
//	////..
//	////876549这个9已经拍好了
//	////786549
//	////768549..
//	////765489  89 就都排好了
//	////如果我们总共有10个元素，那么我们只需要9次就可以了，以为9个排好了最后一个也没问题
//	int i = 0;
//	for (i = 0; i <sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//  	//  printf("%p\n", arr);
//	  //printf("%p\n", &arr[0]);
//	  //printf("%p",&arr);
//	//数组名就是数组首元素的地址（绝大部分的情况）
//	//   特例：1.  sizeof 单独放一个地址的时候，数组名不是数组首元素的地址,它计算的是整个数组的大小
//	// 2.  & 数组名 ，数组名不是数组首元素的地址，数组名表示整个数组，去除的是整个数组的地址
//	return 0;
//}
//其实我们这个冒泡排序的函数不够最优化，当我们用一个顺序一致的数组时，我们还是会进入循环一层一层判断   上面的程序我就进行更改了
//int i = 0;
//for (i = 0; i < sz - 1; i++)//冒泡
//{
//	int j = 0;
//	for (j = 0; j < sz - 1 - i; j++)//排序       // 为什么是sz - 1 - i
//		//因为当为10个元素的时候，要比较9对   9个元素比较8对 第三次冒泡只剩下7对
//		//每次比较以及交换的对数 在发生变化 
//	{
//		if (arr[j] > arr[j + 1])
//		{
//			//交换
//			int tmp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tmp;
//		}
//	}
//}
//
// 小例子：  三子棋
//测试三子棋游戏的逻辑
//#include<stdio.h>
//void menu()
//{
//		printf("***************************\n");
//		printf("***********1.play**********\n");
//		printf("***********0.exit**********\n");
//		printf("***************************\n");
//}
//void test()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:printf("\n开始游戏\n"); break;
//		case 0:printf("\n结束游戏\n"); break;
//		default:printf("\n请重新输入\n"); break;
//		}
//	} while (input);
//}
//void game()
//{
//	char board[3][3] = { 0 };//用一个二维数组来表示棋盘，并对其进行初始化
//
//}
//int main()
//{
//	test();
//	return 0;
//}
// 以上为测试代码
// test.c   测试游戏的逻辑
// game.c   游戏的实现
// game.h  函数声明，符号的定义
// 这需要新建一个工程分别放上咱们写的这些函数和代码，所以我另起一个工程命名为three_chest_game
// 
// 作业内容如下
//#include<stdio.h>
//void fun(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i <sz - 1; i++)//搞了两种写法 我没用第一种写法是因为我怕修改 形参 没法对 实参 造成影响  这里我漏了一个大的知识点
//	{					      //数组是连续存放的， 我们传递过来的是个数组首元素的地址，后面紧接着的都是数组后面元素的地址，对其内容进行更改，能对数组内容造成影响
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//	
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}
//void fun2(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (*(arr + j) > *(arr + j + 1))
//			{
//				flag = 0;
//				int tmp = *(arr + j);
//				*(arr + j) = *(arr + j + 1);
//				*(arr + j + 1) = tmp;
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[9] = { 3,1,6,5,4,2,9,8,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	fun2(arr,sz);
//	printf("%d\n",sz);
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//void reverse(int arr[], int sz)
//{
//	int i;
//	int a = sz - 1;//sz - 1 sz - 1 sz - 1 sz - 1 sz - 1 sz - 1 sz - 1 sz - 1 sz - 1 sz - 1
//	for (i = 0; i < sz/2; i++)
//	{
//		int tmp=0;
//		tmp = arr[i];
//		arr[i] = arr[a];
//		arr[a] = tmp;
//		a--;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	reverse(arr, sz);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void init(int arr[],int sz)
//{
//	int i;
//	for (i = 0; i <sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,6,7,8,9,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	init(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//void change(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("交换完成，嗨嗨！\n");
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[] = { 3,1,2,6,4,5,7,9,8 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	change(arr1,arr2, sz);
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}