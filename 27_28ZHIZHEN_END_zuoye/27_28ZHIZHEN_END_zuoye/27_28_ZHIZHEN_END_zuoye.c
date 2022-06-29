#define _CRT_SEUCRE_NO_WARNINGS 1
#include<stdio.h>
//
// 
// 
// 承接上为第六题
// 
// 
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d  %d", *(ptr1 - 1), *(ptr2 - 1));
//	//10 5
//	return 0;
//}
//
// 
// 
// 第七题
// 
// 
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	//指针数组有三个元素，元素类型为char* 类型
//	//我们分别将每个字符串的首字符的地址存入指针
//	char** pa = a;
//	//我们将数组名 a存入二级指针 pa
//	pa++;
//	//指针指向了下一个元素的地址了喔
//	//打印的就是at了
//	printf("%s\n", *pa);
//	return 0;
//}
// 
// 
// 
// 
//第八题 
// 
// 
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp+3);
//	//先++  -- 然后*  最后+3
//	printf("%s\n", *cpp[-2]+3);
//	//承接上一步，**（cpp-2)-->c+3的地址，"FIRST"然后加 3 
//	printf("%s\n", cpp[-1][-1]+1);
//	//*(*(CPP-1)-1)+1
//	return 0;
//}
// 
// 
// 
// 作业讲解：
//变种水仙花数 
// 
// #include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		if (((i % 10) * (i / 10) + (i % 100) * (i / 100) + (i % 1000) * (i / 1000) + (i % 10000) * (i / 10000)) == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
// 
//  
// 作业讲解：
//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 99999; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j = 1; j <= 4; j++)
//		{
//				int m = i % (int)pow(10, j);
//				int n = i / (int)pow(10, j);
//				sum += m * n;
//		}
//		if (sum == 1)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}
//// 
// 
//解析答案写的真好
//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		//判断i是否为lily number
//		int j = 10;
//		int sum = 0;
//		int tmp = i;
//		for (j = 10; j <= 10000; j *= 10)
//		{
//			sum += (tmp % j) * (tmp / j);
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//
//
//判断字母
//
//int main()
//{
//    char c;
//    scanf("%c", &c);
//    if (('a' <= c) && (c <= 'z'))
//    {
//        printf("YES\n");
//    }
//    else if (('A' <= c) && (c <= 'Z'))
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//}
// 鹏哥讲的
//int main()
//{
//	int ch = getchar();
//	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//
//}
// 
// 
//参考答案
// 
// 
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        //判断字母
//        //if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
//        if (isalpha(ch))//呦呦呦，是个函数赖
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//        //清理掉\n
//        getchar();
//    }
//    return 0;
//}
//
//
// 第二小节开始：
//指针数据类型声明的是指针实际指向内容的数据类型
//野指针是指向未分配或者已经释放的内存地址
// 
//我们后面会学
//malloc free calloc realoc  函数  是负责动态内存管理的
//
// 
//int main()
//{
//	int a = 10;//4字节
//	int arr[10] = { 0 };//40字节
//	
//	//我们忽然想要扩展arr数组的内存空间，那么该如何去做
//	//那么就需要动态管理内存
//	//malloc  申请空间
//	//free  回收空间
//	// 
//	return 0;
//}
// 
// 
// 数组指针  是一种 指针，指向数组
// int(*a[10])(int)   函数指针的数组
// 
// 
// 字符串左旋：
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void fun(char *arr,int k)
{
	//ABCDEF

	int i = 0;
	int j = 0;
	int len=strlen(arr);
	reverse(arr, arr + k - 1);//输入数字，控制字符串逆序
	reverse(arr + k, arr + k - 1);
	reverse(arr, arr + len - 1);
	//char tmp = 0;
	//for (j = 0; j < k%len; j++)//这里有优化  k--> k%len
	//{
	//	tmp = *arr;
	//	for (i = 0; i < len - 1; i++)
	//	{
	//		*(arr + i) = *(arr + i + 1);
	//	}
	//	*(arr + len - 1) = tmp;
	//}
}
//杨氏矩阵
// 要求时间复杂度<  (O)n
// 就是说我们不能按照顺序一个一个查找，而是要根据矩阵的特点规律
// 进行优化，实现快速查找
//有一个数字矩阵，矩阵的每一行从左到右是递增的，矩阵从上到下是递增的
//这里的规律是右上角为判断基本点，因为右上角是所在行最大的元素，所在列最小的元素
//请编写程序再这样的矩阵中查找某个数是否存在
void find_k(int arr[3][3], int k, int r, int c)
{
	int x = 0;
	int y = c - 1;
	int flag = 1;
	//右上角的元素位置xy
	//while(1)不严谨容易死循环
	while (x<r&& y>=0)
	{
		if (arr[x][y] < k)
		{
			x = x + 1;
		}
		else if (arr[x][y] > k)
		{
			y = y - 1;
		}
		else
		{
			flag = 0;
			printf("找到了哈哈哈，下标是%d %d\n", x+1, y+1);
			break;
		}
	}
	if(flag)
	printf("没找着");
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 11;
	find_k(arr, k, 3, 3);

	return 0;
}
//#include<string.h>
//int main()
//{
//	char arr[10] = "ABCDEF";
//	//左旋字符串
//	int k = 0;
//	scanf_s("%d",&k);
//	fun(arr, k);
//	printf("%s", arr);
//	return 0;
//}
// 
// 
// 
// 
// // 




















