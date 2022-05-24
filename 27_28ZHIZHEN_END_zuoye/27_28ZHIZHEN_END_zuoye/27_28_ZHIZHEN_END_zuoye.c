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
int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        //判断字母
        //if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        if (isalpha(ch))//呦呦呦，是个函数赖
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        //清理掉\n
        getchar();
    }
    return 0;
}
























