#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ָ���������������
//int main()
//{
//	//sizeof  ������Ƕ�����ռ�ڴ�Ĵ�С����λΪ�ֽ�
//	int a[] = { 1,2,3,4 };
//	//1.sizeof(�������� ���������������ʾ�������飬���������������Ĵ�С
//	//& ���������������������ʾ�������飬ȥ��������������ĵ�ַ
//	printf("%d\n", sizeof(a));//      16
//	printf("%d\n", sizeof(a+0));// 4/8 ȡ���ڱ�����λ��  a+0�������һ��Ԫ�صĵ�ַ���ǵ�ַ����С����4/8���ֽ�
//	printf("%d\n", sizeof(*a));//  ������Ԫ�صĵ�ַ��*a��ʾ����ĵ�һ��Ԫ�أ�sizeof(*a)���ǵ�һ��Ԫ�صĴ�С 4�ֽ�
//	printf("%d\n", sizeof(a+1));//����ڶ���Ԫ�صĵ�ַ 4�ֽ�
//	printf("%d\n", sizeof(a[1]));//  ����ڶ���Ԫ��   4�ֽ�
//	printf("%d\n", sizeof(&a));//  ȡ����������ĵ�ַ  ����Ҳ�ǵ�ַ 4�ֽ�
//	printf("%d\n", sizeof(*&a));//  ȡ��ַ�ٽ����ã����ڵ�һ����� 16�ֽ�
//	printf("%d\n", sizeof(&a+1));//  &a�õ����������ַ��+1 �������飬ָ�����λ�õĵ�ַ 4/8�ֽڣ�ȡ���ڱ�����λ����
//	printf("%d\n", sizeof(&a[0]));//  ȡ���������һ��Ԫ�ص� ��ַ 4/8 
//	printf("%d\n", sizeof(&a[0]+1));//  ȡ����������ڶ���Ԫ�صĵ�ַ  4/8
//	return 0;
//}
// 
// 
// ��һ��
// 
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//    6 
//	//strlen ���ǻ��������ֵ�����������������ڴ��ҵ�\0�Ž���
//	printf("%d\n", sizeof(arr+0));//  1����Ԫ�ص�ַ
// 	printf("%d\n", sizeof(*arr));//   1  ��Ԫ������ char
//	printf("%d\n", sizeof(arr[1]));// arr[1]  ����ĵڶ���Ԫ�أ���С�� 1�ֽ�
//	printf("%d\n", sizeof(&arr));//   ȡ����������ĵ�ַ  ��ַ 4/8�ֽ�
//	printf("%d\n", sizeof(&arr+1));//  ȡ��ַ+1  ���ǵ�ַ  4/8�ֽ�
//	printf("%d\n", sizeof(&arr[0]+1));// ȡ��Ԫ�صĵ�ַ+1 ,�ڶ���Ԫ�صĵ�ַ 4/8�ֽ�
//	return 0;
//}
// 
// 
// �ڽ����Ϸ��ܹ�����ƽ̨λ��  ѡ��x64 λƽ̨
// ѡ������־��棬�������ǵ�sizeof  ��Ĭ�Ϸ���unsigned long long ���͵����ݣ���Ӧprintf ҲҪ�ĳ�%llu
// 
//������
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//     arr��\0������������������ֱ������\0  ���ֵ
//	printf("%d\n", strlen(arr+0));//   ��Ԫ�صĵ�ַ  ���ֵ
//	//printf("%d\n", strlen(*arr));//������������������ �ұ��������ֲ���    ������Ԫ��  char 'a'=97�����ӿ�ʲô���Ƕ��ӣ�������Ҫ��һ�� ��ָ�������ʲô���ǵ�ַ��97�����ǵ�ַ������ʳ���err   
//	//printf("%d\n", strlen(arr[1]));//������������������ �ұ��������ֲ���  ���ǰ�98����ָ�룬Ҳ�Ǵ����err
//	printf("%d\n", strlen(&arr));//    ȡ��������������ĵ�ַ���������ֵ
//	printf("%d\n", strlen(&arr+1));//  �������ĵĵ�ַ  ���ֵ
//	printf("%d\n", strlen(&arr[0]+1));//  �ڶ���Ԫ�صĵ�ַ ���ֵ
//	return 0;
//	//�������ڴ�����ռ�  ��   ��������
//	//sizeof�ǲ�����
//}
// 
// 
//������ 
// 
int main()
{
	char arr[] = "abcdef";// abcdef\0
	printf("%d\n", sizeof(arr));// �����ܴ�С 7 
	printf("%d\n", sizeof(arr+0));//    ������Ԫ�ص�ַ 4/8���ֽ�
 	printf("%d\n", sizeof(*arr));//   ������Ԫ�ص�ַ������  'a'=1�ֽ�
	printf("%d\n", sizeof(arr[1]));// �±�λ1 ��Ԫ��  ����ĵڶ���Ԫ�� 1�ֽ�
	printf("%d\n", sizeof(&arr));//   ����ĵ�ַ   4/8�ֽ�
	printf("%d\n", sizeof(&arr+1));//  ����\0����ĵ�ַ  4/8�ֽ�
	printf("%d\n", sizeof(&arr[0]+1));//  ����ڶ���Ԫ�صĵ�ַ  4/8�ֽ�
	return 0;
}
// 
// 
// ������
//int main()
//{
//	char arr[] = "abcdef";// abcdef\0
//	//strlenͳ��\0֮ǰ�����ݸ���
//	printf("%d\n", strlen(arr));//   6     
//	printf("%d\n", strlen(arr+0));//    ��Ԫ�صĵ�ַ  6 
//	printf("%d\n", strlen(*arr));//    err  97�Ƿ������ڴ棬��������������鲻����
//	printf("%d\n", strlen(arr[1]));// err   98�Ƿ������ڴ棬 ��������������鲻����
//	printf("%d\n", strlen(&arr));//   6
//	printf("%d\n", strlen(&arr+1));//   ���ֵ
//	printf("%d\n", strlen(&arr[0]+1));// �ڶ���Ԫ�صĵ�ַ 5
//	return 0;
//}
// 
// 
//sizeof ��һ��������  ������Ƕ�����ռ�ڴ�Ĵ�С-��λ���ֽ� size_t
// ���ں��ڴ��д�ŵ���ʲô��ֻ�ں��ڴ��С
// 
// strlen �⺯��
// ֻ�����ַ�������
// �Ӹ����ĵ�ַ�����ַ���ͳ��\0֮ǰ���ֵ��ַ�����
// ֻ�����ַ�����С�ķǷ�����
// 
// 
// ������
// 
//int main()
//{
//	char* p = "abcdef";// ���ڴ��� �����һ�������ַ���abcdef
////ָ��p��p��ָ�����  ָ���� �ַ�����abcdef��
//	printf("%d\n", sizeof(p));//       �ǵ�ַ   
//	printf("%d\n", sizeof(p+1));//     �ǵ�ַ   �ַ�b�ĵ�ַ
//	printf("%d\n", sizeof(*p));//      ��  a  ��char һ���ֽ�
//	printf("%d\n", sizeof(p[0]));//    a   һ���ֽ�  
//	printf("%d\n", sizeof(&p));//      ָ��������ڴ��еĵ�ַ��������ַ
//	printf("%d\n", sizeof(&p + 1));//  &p+1��  p Ϊ char* ,char* *q=&p;����p�����ַ������ĵ�ַ��4/8���ֽ�
//	printf("%d\n", sizeof(&p[0] + 1));// ��һ��Ԫ�صĵ�ַ+1 -->b�ĵ�ַ   4/8�ֽ�
//	return 0;
//}
// 
// 
//// ������
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));//   6     
//	printf("%d\n", strlen(p+1));//   b�ĵ�ַ������   5
//	//printf("%d\n", strlen(*p));//    err  97�Ƿ������ڴ棬��������������鲻����
//	//printf("%d\n", strlen(p[0]));// err   98�Ƿ������ڴ棬 ��������������鲻����
//	printf("%d\n", strlen(&p));// p��ָ�����  ������p�ĵ�ַ������\0, �����ǵ��ַ���û�й�ϵ�ˣ������ �ַ� �Ļ�����ȫ�����ֵ��
//	printf("%d\n", strlen(&p+1));//  p��ָ������� &p+1 ���ǵ�ַ����p��ַ�ĵ�ַ�����ֵ
//	printf("%d\n", strlen(&p[0]+1));// �ڶ���Ԫ�صĵ�ַ    5
//	return 0;
//}
// 
// 
// �ڰ���
// 
// 
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//��ʾ�������� 12*4  =  48�ֽ�
	printf("%d\n", sizeof(a[0][0]));//��һ�е�һ��Ԫ�� 4�ֽ�
	printf("%d\n", sizeof(a[0]));//�ڶ���  4*4 16���ֽ�
	//����֪�������ά�����������У�
	//���Ƿ���ÿ�е�Ԫ�� �� a[0][i]  a[1][i]  a[2][i] a[3][i] 
	//��ά��������⣺ 
	//���԰Ѷ�ά���������һά���飬 ��ά�����ÿһ����һ��һά����
	//a[0]��������sizeof�ڲ�������ľ��ǵ�һ�еĴ�С
	//
	printf("%d\n", sizeof(a[0]+1));//
	printf("%d\n", sizeof(*(a[0]+1)));//
	printf("%d\n", sizeof(a+1));//
	printf("%d\n", sizeof(*(a+1)));//
	printf("%d\n", sizeof(&a[0]+1));//
	printf("%d\n", sizeof(*(&a[0]+1)));//
	printf("%d\n", sizeof(*a));//
	printf("%d\n", sizeof(a[3]));//
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