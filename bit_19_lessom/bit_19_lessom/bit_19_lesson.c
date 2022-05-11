#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//初阶测评和讲解
//测评的目标：
//1.了解在线oj笔试的流程和环境
//2.了解自己的学习情况
//3. 查漏补缺
//
//未来找工作的时候，基本上使用的都是在线OJ
//不能够作弊欸，作弊可不行，会被拉入黑名单，这是道德行为上的漏洞
//
//
//int main()
//{
//	int cnt = 0;
//	//8          1
//	//6 7        2
//	//	45 56     4
//	//	23 34 34 45      8
//	//	10 12 12 23 12 23 23  34    16
// //           10  10 10 12 10 10 12 10 12 12 23   22
//	//	               10       10   10  10 10 12   12
//	//	10 2
//	return 0;
//}
//求最小公倍数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? a : b);
//	int i = 1;
//	while (1)
//	{
//		if (m%a== 0 && m%b==0)
//		{
//			break;
//		}
//		m++;
//	}
//	printf("%d ", m);
//	return 0;
//}
//简便方法:
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (a * i / b!=0 )
//	{
//		i++;
//	}
//	printf("%d", a*i);
//	return 0;
//}
//输入输出不是C语言本身的，是库函数里面的函数
// C语言本身并不存在输入输出
//
//指针  
// 二进制操作符
// 
// 
// 
// 
// 
//【倒置字符串】将一句话的单词进行倒置，标点不倒置。
// 比如 I like beijing. 经过函数后变为：beijing. like I
//对整体字符串进行逆序
//对字符中每个单词进行逆序
//#include<assert.h>
//void reverse(char* l,char* r)
//{
//	assert(l&&r);
//	while (l < r)
//	{
//		char tmp = *l;
//		*l = *r;
//		*r = tmp;
//		l++;
//		r--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	//scanf("%s\n", arr);
//	gets(arr);//职业输入：字符串
//	//开始进行逆序
//	//1.逆序整个字符串
//	//2.再逆序每个单词
//	//写个函数
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + len - 1;
//	reverse(left, right);
//	//2.逆序每个单词
//
////逆序一个单词	//char* cur = arr;
//	//char* start = arr;
//	//	while (*arr!=' ')
//	//{
//	//		cur++;
//	//}
//	//	reverse(start,cur-1)
//	char* cur = arr;
//	char* start = arr;
//	while (*cur!='\0')
//	{
//		while (*cur != ' '&& *cur!='\0')//     ！='\0'是为了末尾操作的
//		{
//			cur++;
//		}
//		reverse(start, cur - 1);//单词逆序
//		start = cur + 1;
//		if(*cur!='\0')
//		cur++;
//	}//但还是有问题，最后一个单词的末尾是\0，而不是' '
//	printf("%s", arr);
//	return 0;
//}
