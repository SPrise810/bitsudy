#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
// 
//int i;//ȫ�ֱ������û�г�ʼ����Ĭ�ϻᱻ��ʼ��Ϊ0
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//sizeof ��һ����������������������صĽ����sizeof_t�ģ�size_t���޷�������
//�����Ǽ����ʱ�򣬷���һ���޷��ŵĺ��з��ŵ�ʱ��
//���ǻ��������ת��
// ֪ʶ�㣺
// 
// ����ת��
// ���ǰ������������ʽ��������ת��,�����������ͳһ�������ʽ
// long double
// double
// float
// unsigned long int
// long int
// unsigned int 
// int
// 
//i�ͻᱻת�����޷���
//11111111111111111111111111111111   ����-1�������һ������������϶�����4��
//
//����OJ����Ŀ����2����ʽ
// IO�ͣ����룬�����main)
// �ӿ��ʹ��루�������һ��������
//
//��Ŀ���ж�һ�����Ķ�������1�ĸ���
//int NumberOf1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//} 
//int NumberOf2(unsigned int n)//����ʮ�����м���ÿһλ�ķ������Ľ��ɶ�������ʽ
//{
//	//ʮ��������n=123
//	//����ÿһλ
//	//n%10
//	//n=n/10
//	//��n%10.....
//	int i = 0;
//	int count = 0;
//	//�������漰����unsigned������
//	//���������Ҫ֪��һ�����������
//	//��ô���Ǿͺ��ѣ�����-1
//	//�������Ǿ���Ҫת�����޷������������Ϳ��Դ�����
//	//����-1
//	unsigned int m = n;//Ȼ��ѭ�����n����m�����ˣ�����Ϊ��Ӧ�Ժ�����OJ��Ŀ
//	//��Ӧ�ĺ����ӿڵ�int n��Ҫ�Ķ��� unsigned int n
//	for (i = 0; i < 32; i++)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//			n /= 2;
//		}
//	}
//	return count;
//}
//int NumberOf3(int n)
//{
//	int count = 0;
//	//n=n&(n=1)
//	//����n=13
//	//1101--n
//	//1100--n-1
//	//&n=1100
//	//1011--n-1
//	//&n=1000
//	//0111--n-1
//	//&n=0
//	//�м���1��ִ�м��Σ�Ч�ʸ�
//	while (n)
//	{
//		n = n & (n = 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", NumberOf1(n));
//	printf("%d\n", NumberOf2(n));
//	printf("%d\n", NumberOf3(n));
//
//	return 0;
//}
//
//
// 
// 
//дһ�����룬�ж��������ֶ�����ÿһλ����ͬ�����ֵĸ���
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int diff = 0;
//	//��1
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if (((m >> i) & 1) !=( (n >> i) & 1))
//	//	{
//	//		diff++;
//	//	}
//	//}
//	//����
//	int tmp = n ^ m;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		diff++;
//	}
//	printf("%d", diff);
//}
//���^
//��ͬΪ0������Ϊ1
//Ȼ�����֮��Ϳ��Խ���0��1���ж��ˣ��ͼ���������
//
//
//32λϵͳ�£�
//���͵Ĵ�СΪ4�ֽ�
//ָ��ռ 4���ֽ�
//����ϵͳ�ܷ��ʵ�����ڴ�ռ䣺 2^32
//4 ���ֽ�--32������λ ������2^32����ַ
//64λ�����£� ָ��8���ֽ�
//�����ʿռ䣺2^64
//ȫ��ָ��δ��ʼ��   Ĭ�ϳ�ʼ��Ϊ 0
//
////С�˴洢ģʽ
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//
//����ָ�룺int(*arr)[];
//ָ������ int* arr[];
//
// 
// 
// 
// 
//ͨ����ַ��ӡ
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", *(p + i));
//	}
//	printf("\n");
//}
//void print2(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", *p);
//		p++;//����ȱ���Ǹı�pָ���Ԫ��λ��
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	print2(arr, sz);
//	return 0;
//}
// 
// 
//�����ַ���������
//int main()
//{
//	char arr[1000] = { 0 };
//	//scanf("%s", arr);//�ո��Ƕ���������
//	gets(arr);
//	int sz = strlen(arr);
//	char* left = arr;
//	char* right = arr + sz - 1;
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}
//	printf("%s", arr);
//	return 0;
//}
// 
// 
// 
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d", sum);
//	return 0;
//}
// 
// ˮ�ɻ���
// 
#include<math.h>
int main()
{
	//ˮ�ɻ���ʵ������һ��������
	//�������϶��ˣ����԰ٶ��˽�һ�ºٺ�
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int n = 1;
		int tmp = i;
		while (tmp /= 10)
		{
			n++;
		}
		tmp = i;
		int sum;
		while (tmp)//1234
		{
			sum+=(int)pow(tmp % 10, n);//����ÿһλ��n�η�����Ҫ����mathͷ�ļ�
			//pow����double,���ǽ���ǿ������ת��
			tmp /= 10;
		}
		//�Ƚ�
		if (sum == i)
		{
			printf("%d ", i);
		}
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
// 32443124
// 
//

//
//3124312





























































