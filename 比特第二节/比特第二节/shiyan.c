//�������ʵ�ǣ�
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//		printf("����\n");
//	else
//		printf("δ����\n");
//	return 0;
//}
///*���д�� 18<=age<30    ������10��Ļ�����ô10<30 �� ����10<18Ϊ�� 
//int main()
//{
//	int age = 0;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 30)
//		printf("����\n");
//	else if (age >= 30 && age < 50)
//		printf("����\n");
//	else if (age >= 50 && age < 80)
//		printf("������\n")
//	else
//		printf("������\n");
//	return 0;
//}
////0Ϊ��  ��0 Ϊ���������ȫ����  -1�� 0.1��������
////һ�Դ����ž���һ�������
////
////����else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
////  else                       ����������������
////	printf("haha\n");
//		else
//			printf("haha\n");
//	return 0;
//}
////���ǵ㣺 if ��  �����else ����ƥ��
////�жϺ�if �� else �ķ�Χ������Чʹ�ô����ţ���Ҫ������������������
////if ��else ��������һ����䣬��Ϊִ�еĲ���if ����else
////���������Ҫ����������ϰ�ߣ�
////������C++���  ������  ǰ����  ����զ�������
////
////����return��֮��ͻ��ȥ
////"�������"д����
//if (condition)
//{
//	reutrn x;
//}
//return y;
//
////������д����
//if (condition)
//{
//	return x;
//}
//else
//return y;
//
//
//
//int test()
//{
//	int a = 2;
//	if (a)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int ret = test();
//	printf("ret =%d", ret);
//	return 0;
//}
//
////������
//int main()
//{
//	int num = 1;
//	//if (num == 5)//������
//		printf("hehe\n");
//}
//int main()
//{
//	int num = 1;
//	//if (5 = num)//����
//		printf("hehe\n");
//}
//�������жϱ����볣���Ƿ����ʱ���ѳ���������������ҳ�����
//��ϰ ��ӡ1~100��ȫ������
int main()
{
	int i;
	for(i=0; i<100; i++)

	if (i % 2!=0)
	{
		printf("%d ",i);
	}
	return 0;
}
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
		{
			printf("%d", i);
		}
		i++;
	}
	return 0;
}
int main()
{
	int i = 1;
	while (i <= 100)
	{
		printf("%d", i);
		i = i + 2;//�������
	}
}
#include<string.h>
int main()
{
	printf("%d\n", strlen("c:\test\628\test.c"));
	return 0;
}
*/
//////////////////////////////whileѭ������
//#include<stdio.h>
//int main()
//{
//	//while (1)
//	//{
//	//	printf("hehe\n");
//	//}
//	//return 0;
//
//	//int i = 1;
//	//while (i <= 10)
//	//{
//	//	if (i == 5)
//	//		break;
//	//	printf("%d", i);
//	//	i++;
//	//}
//	//return 0;
//
//	int i=1;
//	while (i<=10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//getchar �����ȡ������᷵��EOF ,�����ȡ��������᷵�ض������ַ�
//	 //EOF  Ϊ-1
//	 // char �����޷�����һ�����ͣ��治��
//	//int ch=getchar ();�ã�������������
//	
//	//int ch = getchar();
//	//putchar(ch);
//
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//scanf���ص�Ҳ��int ������ش���Ҳ�Ƿ���EOF
//
//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������\n");
//	scanf("%s",password);
//	printf("��ȷ�����루Y/N):>");
//	int ch = getchar();
//	if ('Y' == ch)
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}
//
//}
//��getchar ��  scanf ֮��   ����һ����������
//������������password֮�󣬻��������������ǵ�����+\n
//123456��ȡ����֮��ʣ��һ��\n��Ȼ�������ߵ�����һ��getchar ��һ��
//��������\n�ͱ�getchar ��ȡ���Ӷ����ж�

//����
//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������\n");
//	scanf("%s", password);
//	printf("��ȷ�����루Y/N):>");
//	getchar();
//	int ch = getchar();
//	if ('Y' == ch)
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}
//
//}
//������������123456 abcdef\n֮����������ֻ��ж�ʧ�ܣ���Ϊ���������ַ���
//�������ո��ʱ����Զ���������ô�������ֻ�ʣ�� abcdef\n ��ôһ��getchar ��û�а취�����������ȫ��������
//����˵���ּ���һ��getchar �ķ������о����Եģ�
//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������\n");
//	scanf("%s", password);
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
////(д��д�ֺŶ����ԣ���Ҫ��ϣ�������ܹ�֪�� ������һ������䣬�����Ͽ���䣬���ǺõĴ���ϰ�ߣ�
//	}
//	printf("��ȷ�����루Y/N):>");
//	getchar();
//	int ch = getchar();
//	if ('Y' == ch)
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}
//	return 0;
//}
//������һ��whileѭ�����¶���һ��tmp ��ѭ��getchar ��ô���Ǿͽ�������ʣ�µ�����ȫ���Ե���
// ������������\n��ʱ�����Ǿ��Զ�ֹͣ����ʱ����
// ǰ������ȡ�������ݾ�����������������룬Ȼ����������ǾͿ�������ִ��
// getchar ��䣬ʵ����������Ҫ�Ĵ�������
//��3����������������������ʱ����İ취�������������������������ô�죬�����һ�������һ�ֽ����ʽ���Ѱ��ˣ�û�б�Ҫ����
//#include<stdio.h>
//int main()
//{
//	int ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//��ȡ�ַ���ֻ��ӡ�����ַ�

//for
//#include <stdio.h>
//int main()
//{
//	int i = 1;//��ʼ��
//		while (i <= 10)//�ж�
//		{
//		printf("%d", i);
//		i++;//����
//		}
//		return 0;
//}
// //����������ѭ��ȱһ����
//���Ǿ���forѭ���������һ������
//for(���ʽ1 ��ʼ�����֣� ���ʽ2 �жϲ��֣� ���ʽ3 �������֣�
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}ʾ��
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//		{
//			continue;//break;
//		}
//		printf("%d", i);
//	}
//	return 0;
//}
//break�����1234 
//�������continue �����1234 ��ѭ�������ˣ� ʵ������12346878910
//Ϊʲô��û��5��
//5֮����������ѭ����ֱ�ӻص������׶� i++ ��Ȼ��i����6

//1.��Ȼ�����Ѿ���ʼ��for ��ѭ���������ѭ����
//�����ǾͲ�Ҫ��ѭ�����ڽ��� �����׶� ���޸�(������
//2.ǰ�պ�����д�� ����i=0����ʼ <10  ��ѭ��10�� <15��ѭ��15��
// ��0��ʼ��ʱ������д���ɶ��ԱȽ�ǿ
//3.0for ѭ���ı���
// ��ʼ���жϵ���ȫ��ɾ��֮��for(;;)
//������ǰ�forѭ�����жϲ���ʡ�ԣ���ô�ͺ�Ϊ�� 
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//ֻ��ӡ10���ˣ�i=0 j0~9   Ȼ��i=1 j=10�����������ˣ�Ȼ�����Ǿͳ���������
//4.ѭ���������ǿ�������������������ѭ��
//
////��ӡ3�����еı���
//#include<stdio.h>
//int main()
//{
//	int i=1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
////���Լ��
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	int i;
//	scanf("%d%d", &a, &b);
//	if (b >= a)
//	{
//		i = a;
//		a = b;
//		b = i;
//	}
//	for (i = b; i > 0; i--)
//	{
//		if (b % i == 0 && a % i == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}
//1000~2000�������
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 400 == 0) || ((i % 4 == 0) && (i % 100 != 0)))
//			printf("%d ", i);
//	}
//	return 0;
//}
//
////�������ִ�С���� 
//int main()
//{
//int a, b, c;
//scanf("%d%d%d", &a, &b, &c);
//int i;
//if (a >= b)
//{
//	i = a;
//	a = b;
//	b = i;
//}
//if (a >= c)
//{
//	i = a;
//	a = c;
//	c = i;
//}
//if (b >= c)
//{
//	i = b;
//	b = c;
//	c = i;
//}
//printf("%d %d %d", c, b, a);
//return 0;
//}
//100~200 �������/����
//int main()
//{
//	int i = 0;
//	int count = 0;
//	// ���ѭ��������ȡ100~200֮����������ݣ�100�϶��������������i��101��ʼ
//	for (i = 101; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ��������[2, i)֮���ÿ������ȥ��i����ֻҪ��һ�����Ա���������������
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//
//		// ����ѭ������֮�����j��i��ȣ�˵��[2, i��֮����������ݶ����ܱ�i��������iΪ����
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);//������һ���ж��ٸ�����
//	return 0;
//}
//int main()
//{
//	int i;
//	int j;
//	for (i = 101; i < 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", j);
//		}
//	}
//	return 0;
//}
//1~100 ����9�Ĵ���
//int main()
//{
//	int i;
//	int cnt=0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			cnt++;
//		}
//		if (i / 10 == 9)
//		{
//			cnt++;
//		}
//	}
//	printf("%d", cnt);
//	return 0;
//}
//int main()
//{
//	int i;
//	double a=0;
//	double sum=0;
//	for (i = 1; i <= 100; i+=2)
//	{
//		a = 1.0 / i;
//		sum = sum + a;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		a = 1.0 / i;
//		sum = sum - a;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//
//int main()
//{
//	int a[10];
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int max=a[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] >= max)
//		{
//			max = a[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

int main()
{
	int i,j;
	for (i = 1; i <=9;i++)
	{
		for (j = 1; j <=i; j++)
		{
			printf("%d*%d = %d ", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}