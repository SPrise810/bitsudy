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
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        //�ж���ĸ
//        //if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
//        if (isalpha(ch))//�����ϣ��Ǹ�������
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//        //�����\n
//        getchar();
//    }
//    return 0;
//}
//
//
// �ڶ�С�ڿ�ʼ��
//ָ������������������ָ��ʵ��ָ�����ݵ���������
//Ұָ����ָ��δ��������Ѿ��ͷŵ��ڴ��ַ
// 
//���Ǻ����ѧ
//malloc free calloc realoc  ����  �Ǹ���̬�ڴ�����
//
// 
//int main()
//{
//	int a = 10;//4�ֽ�
//	int arr[10] = { 0 };//40�ֽ�
//	
//	//���Ǻ�Ȼ��Ҫ��չarr������ڴ�ռ䣬��ô�����ȥ��
//	//��ô����Ҫ��̬�����ڴ�
//	//malloc  ����ռ�
//	//free  ���տռ�
//	// 
//	return 0;
//}
// 
// 
// ����ָ��  ��һ�� ָ�룬ָ������
// int(*a[10])(int)   ����ָ�������
// 
// 
// �ַ���������
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void fun(char *arr,int k)
//{
//	//ABCDEF
//
//	int i = 0;
//	int j = 0;
//	int len=strlen(arr);
//	//��һ��
//	//reverse(arr, arr + k - 1);//�������֣������ַ�������
//	//reverse(arr + k, arr + len - 1);
//	//reverse(arr, arr + len - 1);
//	//������
//	//char tmp = 0;
//	//for (j = 0; j < k%len; j++)//�������Ż�  k--> k%len
//	//{
//	//	tmp = *arr;
//	//	for (i = 0; i < len - 1; i++)
//	//	{
//	//		*(arr + i) = *(arr + i + 1);
//	//	}
//	//	*(arr + len - 1) = tmp;
//	//}
//}
// #include<string.h>
//int main()
//{
//	char arr[10] = "ABCDEF";
//	//�����ַ���
//	int k = 0;
//	scanf_s("%d", &k);
//	fun(arr, k);
//	printf("%s", arr);
//	return 0;
//}
//���Ͼ���
// Ҫ��ʱ�临�Ӷ�<  (O)n
// ����˵���ǲ��ܰ���˳��һ��һ�����ң�����Ҫ���ݾ�����ص����
// �����Ż���ʵ�ֿ��ٲ���
//��һ�����־��󣬾����ÿһ�д������ǵ����ģ�������ϵ����ǵ�����
//����Ĺ��������Ͻ�Ϊ�жϻ����㣬��Ϊ���Ͻ�������������Ԫ�أ���������С��Ԫ��
//���д�����������ľ����в���ĳ�����Ƿ����
//void find_k(int arr[3][3], int k, int r, int c)
//{
//	int x = 0;
//	int y = c - 1;
//	int flag = 1;
//	int count = 0;
//	//���Ͻǵ�Ԫ��λ��xy
//	//while(1)���Ͻ�������ѭ��
//	while (x<r&& y>=0)
//	{
//		count++;
//		if (arr[x][y] < k)
//		{
//			x = x + 1;
//		}
//		else if (arr[x][y] > k)
//		{
//			y = y - 1;
//		}
//		else
//		{
//			flag = 0;
//			printf("�ҵ��˹��������±���%d %d\n", x+1, y+1);
//			break;
//		}
//	}
//	printf("ʱ�临�Ӷ�Ϊ%d\n  ", count);
//	if(flag)
//	printf("û����\n");
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 11;
//	find_k(arr, k, 3, 3);
//
//	return 0;
//}
// 
// 
//�������ǶԳ�������һ�����Ż��͸ı�
//ʹ�ú����ܹ� ���� ��������Ҫ�Ĳ�����x��y
//int find_k(int arr[3][3], int k, int *pr, int *pc)
////�Ժ����Ĳ�������ָ������ã�����ͨ����֮Ϊ�����Ͳ��� 
//{
//	int x = 0;
//	int y = *pc - 1;
//	int flag = 1;
//	int count = 0;
//	//���Ͻǵ�Ԫ��λ��xy
//	//while(1)���Ͻ�������ѭ��
//	while (x < *pr && y >= 0)
//	{
//		count++;
//		if (arr[x][y] < k)
//		{
//			x = x + 1;
//		}
//		else if (arr[x][y] > k)
//		{
//			y = y - 1;
//		}
//		else
//		{
//			*pr = x+1;
//			*pc = y+1;
//			//printf("�ҵ��˹��������±���%d %d\n", x + 1, y + 1);
//			//break;
//			return 0;
//		}
//	}
//	printf("ʱ�临�Ӷ�Ϊ%d\n  ", count);
//	*pr = -1;
//	*pc = -1;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 11;
//	int x = 3;
//	int y = 3;
//	find_k(arr, k, &x, &y);
//	if (x == -1 && y == -1)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�±���%d %d\n", x, y); 
//	}
//	return 0;
//}
//�����ڳ�����ƵĹ�����Ӧ������ʹ�����ǵĺ�����ö���
//����� ���ھ� �����
// 
// 
//OJ��Ŀ
//ţ���� BC100  
//�������кϲ�
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int arr1[1000];
	int arr2[1000];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", arr1[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", arr2[i]);
	}
	//��ʼ����ϲ�
	i = 0;
	j = 0;
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			printf("%d ", arr1[i]);
			i++;
		}
		else
		{
			printf("%d ", arr2[j]);
			j++;
		}
	}
	if (i == n)
	{
		for (; j < m; j++)
		{
			printf("%d ", arr2[j]);
		}
	}
	else
	{
		for (; i < n; i++)
		{
			printf("%d ", arr2[i]);
		}
	}
	return 0;
}
 




















