#define _CRT_SEUCRE_NO_WARNINGS 1
#include<stdio.h>
//
// 
// 
// �н���Ϊ������
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
// ������
// 
// 
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	//ָ������������Ԫ�أ�Ԫ������Ϊchar* ����
//	//���Ƿֱ�ÿ���ַ��������ַ��ĵ�ַ����ָ��
//	char** pa = a;
//	//���ǽ������� a�������ָ�� pa
//	pa++;
//	//ָ��ָ������һ��Ԫ�صĵ�ַ���
//	//��ӡ�ľ���at��
//	printf("%s\n", *pa);
//	return 0;
//}
// 
// 
// 
// 
//�ڰ��� 
// 
// 
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp+3);
//	//��++  -- Ȼ��*  ���+3
//	printf("%s\n", *cpp[-2]+3);
//	//�н���һ����**��cpp-2)-->c+3�ĵ�ַ��"FIRST"Ȼ��� 3 
//	printf("%s\n", cpp[-1][-1]+1);
//	//*(*(CPP-1)-1)+1
//	return 0;
//}
// 
// 
// 
// ��ҵ���⣺
//����ˮ�ɻ��� 
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
// ��ҵ���⣺
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
//������д�����
//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		//�ж�i�Ƿ�Ϊlily number
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
//�ж���ĸ
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
// ���署��
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
//�ο���
// 
// 
int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        //�ж���ĸ
        //if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        if (isalpha(ch))//�����ϣ��Ǹ�������
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        //�����\n
        getchar();
    }
    return 0;
}
























