#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���ײ����ͽ���
//������Ŀ�꣺
//1.�˽�����oj���Ե����̺ͻ���
//2.�˽��Լ���ѧϰ���
//3. ��©��ȱ
//
//δ���ҹ�����ʱ�򣬻�����ʹ�õĶ�������OJ
//���ܹ����ךG�����׿ɲ��У��ᱻ��������������ǵ�����Ϊ�ϵ�©��
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
//����С������
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
//��㷽��:
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
//�����������C���Ա���ģ��ǿ⺯������ĺ���
// C���Ա����������������
//
//ָ��  
// �����Ʋ�����
// 
// 
// 
// 
// 
//�������ַ�������һ�仰�ĵ��ʽ��е��ã���㲻���á�
// ���� I like beijing. �����������Ϊ��beijing. like I
//�������ַ�����������
//���ַ���ÿ�����ʽ�������
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
//	gets(arr);//ְҵ���룺�ַ���
//	//��ʼ��������
//	//1.���������ַ���
//	//2.������ÿ������
//	//д������
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + len - 1;
//	reverse(left, right);
//	//2.����ÿ������
//
////����һ������	//char* cur = arr;
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
//		while (*cur != ' '&& *cur!='\0')//     ��='\0'��Ϊ��ĩβ������
//		{
//			cur++;
//		}
//		reverse(start, cur - 1);//��������
//		start = cur + 1;
//		if(*cur!='\0')
//		cur++;
//	}//�����������⣬���һ�����ʵ�ĩβ��\0��������' '
//	printf("%s", arr);
//	return 0;
//}
