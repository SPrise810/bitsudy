#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
////�ַ������ڴ溯��
//
//int main()
//{
//	char ch = 'a';
//	//c����û���ַ�������
//	//����������һϵ�в����ַ����ĺ���
//	//1.1���ַ������Ⱥ��� strlen����  ��Ҫ����string.hͷ�ļ�
//	//strlen �������᷵���ַ����ĳ���,���������� size_t   �޷�����
//	//ԭ�����ҵ��ַ�����ĩβ�Դ���б��0
//	//������ǽ��ַ����� ��ʼ��һ�����ַ����ͣ���ô���ǵ�strlen �ͻ�Ѱ��ʧ��
//	char arr[] = "qasddad";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	if (strlen("abc") - strlen("abcd") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	//����취1��  ���Բ����ֱ�ӱȽϴ�С
//	//����취2��  ǿ������ת��
//	return 0;
//}
//
//

//ģ��ʵ��strlen
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	//���ԣ� �������ǿ�ָ�룬���򱨴�
//	assert(str != NULL);
//	while ((*str) != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[100] = {0};
//	gets(arr);
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//����Ϊ������д��
//���ǻ��еݹ�д��
//����ָ��д��


//1.2 �ַ�����������strcpy()
//��Դ�ַ���(����\0)������Ŀ���ַ���
//��ע�� Դ�ַ���������\0Ϊĩβ����
//int main()
//{
//	//char arr1[20] = { 0 };
//	//char arr2[] = "abcdef";
//	////char arr2[] = { 'a','b','c','\0' };
//	////char arr2[10]={"abc"};
//	// ���һ
//	//char arr1[4] = { 0 };
//	//char arr2[10] = { "abcdefg" };
//	//�����
//	//char * arr1 = "abcdefghijklm";
//	//char arr2[10] = { "abcdef" };  
//    //�����
//	char arr1[20] = { 0 };
//	char* arr2 = "abcdef";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//}


//����my_strcpy()����
//#include<assert.h>
//strcpy���ص���Ŀ��ռ����ʼ��ַ char *
//strcpy�����ķ������͵�������Ϊ��ʵ����ʽ���ʣ�����ֱ�� ����
//����printf("%s",my_strcpy(arr1,arr2));
// 
//char *  my_strcpy(char* dest, const char* src)
//{
//	//assert(dest != NULL);
//	//assert(src != NULL);
//	assert(src && dest);
//	//while (*src != '\0')
//	//{
//	//	*dest = *src;
//	//	dest++;
//	//	src++;
//	//}
//	//while (*src != '\0')
//	//{
//	//	*dest++ = *src++;
//	//}
//	char* ret = dest;
//	while (*dest++=*src++)
//	{
//		;	//���������أ�������������һ����ֵ���ʽ
//	}
//	*dest = *src;
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char* arr2 = "hello bit";
//	my_strcpy(arr1, arr2);
//
//	return 0;
//}


//1.3strcat() ����
//�ַ���׷�Ӻ���
//����
//#include<assert.h>
//char* my_strcat(char* dest, char* src)
//{
//	//1.�ҵ�Դ�ַ����е�\0
//	//2.�ٰ�Դ�ַ���������Ŀ��ռ�
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest != '\0')
//	{
//		dest++;
//	} 
//	//while (*dest++)//����д������һ��������
//	//			   //�����ǵ�dest�ж�Ϊ\0֮�����ǵĺ���++��Ȼ����в�����������һ���ַ��ռ䱻�Թ�
//	//{
//	//	;
//	//}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	//char arr1[] = { 'h','e','l','l','o' };
//	//char arr1[20] = "hello\0xxxxxxx";//����ԭ�� б��0 �ں����е�����
//	//ͨ�����ԣ����Ƿ��� ��Ҫ��ӵ��ַ�����ĩβ����\0Ϊ��־��������
//	char arr2[] = " bit";
//
//	//strcat(arr1, arr2);
//
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	//׷������
//	return 0;
//}

//�ַ����Լ����Լ�׷�ӿ��������
//int main()
//{
//	char arr[20] = "bit";
//	my_strcat(arr, arr);
//	printf("%s\n", arr);//�������ѭ��
//	//��һ��whileѭ������Դ�ַ���dest�ҵ�\0���ڶ���������һ������ѭ����src��ͷ��ʼ���п�����Ŀ���ַ���
//	//������һ�����⣬����destĩβ��\0��srcָ���b�����ǵ��ˣ�����Դ�ַ����Ͳ�����\0 ���Ի���ѭ��
//  //������˵����ָ���ǵĸ��˺���д��
//  // ��ʵ�ʵı�������У����ǻ��ǻᷢ�����ǵ�ԭ����strcat������������û������
//	return 0;
//}

//strcmp����
//�ַ����Ƚ�  ����

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	printf("%d",strcmp(arr1, arr2));
//	//����������ȽϵĲ����ַ����ĳ���
//	//�����ַ����ж�Ӧλ���ϵ��ַ��Ĵ�С
//	//�����ͬ���ͱȽ���һ�Զ���ֱ����ͬ���߶�����\0
//	//�ַ��Ƚϵ�ʱ�� һ�� һ�� һ�� �ǱȽ�ASCII��ֵ
//	//�������з���ֵ��1��-1��0 �ֱ�������С�ڵ���
//	//�������ﲻ�̶ܹ�˼ά������ֵȷ��Ϊ1��-1��0
//	//����Ӧ������Ϊ>0  <0   =0 
//	//1,-1,0ֻ����VS�������б�ʾ����С�ڵ��ڵ����
//	return 0;
//}

//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1, s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	//if (*s1 > *s2)
//	//	return 1;
//	//else
//	//	return -1;
//	return *s1 - *s2;//���У�ֻ������д��������VS�涨�ķ���ֵ-1 �� 1 �Լ� 0
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	printf("%d", strcmp(arr1, arr2));
//	return 0;
//}

//���ܽ�һ�£�  strcpy  strcat   strcmp  ��Щ���ǳ��Ȳ������Ƶĺ���
//         �ַ�������  �ַ���׷�� �ַ����ȽϺ���

//��ô���Ǻ��潲����Щ���ǳ��������Ƶĺ���  strncpy strncat  strncmp
//strncpy(arr1,arr2,6)
//�����ǵ�Դ����arr12����Ŀ��ռ�arr1���У���������δ����ſ����ַ��ĸ���
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "qwe";
//	//strncpy(arr1, arr2, 3);
//	strncpy(arr1, arr2, 5);
//	printf("%s", arr1);
//	return 0;
//}

//\0�����ַ����е����ݣ���Ϊһ���ַ����Ľ��� ��־����
//strncat �ַ���׷�Ӻ���
//���Ǵӱ���ӵ��ַ�����\0λ�ÿ�ʼ����
//�ҵ�\0֮��Ȼ��������Ҫ��ӵ��ַ��� �ӵ��ַ����ĺ��棬�ӵ�ͬʱ���ǽ�ԭ�ַ�����
//���ݽ��и��ǣ��������֮����ĩβ���ַ������һ��\0���н�β

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwertyuiop";
//	//char arr2[] = "qwe";
//	strncat(arr1,arr2,5);//5���ַ����ݼ�һ��\0
//	printf("%s\n", arr1);
//
//	return 0;
//}

//����ʵ��
//char* fun(char* arr1,char* arr2,int n)
//{
//	char* ret = arr1;
//	int i = 0;
//	while (*(arr1) != '\0')
//	{
//		arr1++;
//	}
//	for (i = 0; i < n; i++)
//	{
//		*(arr1) = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*(++arr1) = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[20] = {0};
//	char arr2[20] = {0};
//	int n = 0;
//	gets(arr1);
//	gets(arr2);
//	scanf("%d", &n);
//	printf("%s", fun(arr1, arr2, n)) ;
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcde";
//	int ret = strncmp(arr1, arr2, 6);
//	printf("%d", ret);
//	return 0;
//}

//��չ�� 
//�������ǿ��ȥ�Ƚ��ַ�������Ĵ�С�����£�
//	char arr1[] = "abcdef";
//	char arr2[] = "abcde";
//if (arr1 < arr2)
//{
//	;
//}
//��������������ǱȽϵ��ǣ������ַ����ĵ�ַ
//if ("abc" < "abcdef")
//{
//	;
//}
//������������ǱȽϵ������������ַ����ĵ�ַ
//char* p = "abc";ʵ�����ǽ�a�ĵ�ַ���������Ƕ����ָ��p

//����ʵ�� strncmp�Զ��巶Χ�ַ����ȽϺ���
//int fun(char* arr1, char* arr2, int n)
//{
//	while (--n)
//	{
//		if (( * arr1 - *arr2) == 0)
//		{
//			arr1++;
//			arr2++;
//		}
//		if ((*arr1 - *arr2) > 0)
//		{
//			return 1;
//		}
//		if ((*arr1 - *arr2) < 0)
//		{
//			return -1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = { 0 };
//	gets(arr1);
//	gets(arr2);
//	int n;
//	scanf("%d", &n);
//	printf("%d",fun(arr1, arr2, n));
//	return 0;
//}

//strstr�������ж��ַ����İ�����ϵ��
//char * strstr(const char *str1,const char * str2);  ��������Ϊ�ַ�����ָ�룬
//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr_1[] = "abcdeqabcdef";
//	char arr2[] = "cdef";
//	char* ret=strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("û�ҵ���Ӧ�ַ���\n");
//	}
//	else
//		printf("%s\n", ret);
//	//
//	ret = strstr(arr_1, arr2);
//	if (ret == NULL)
//	{
//		printf("û�ҵ���Ӧ�ַ���\n");
//	}
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//����ʵ��my_strstr()
//��ʵ���ǵ�ʵ�ֹ��̻��ǱȽϸ��ӵģ�˵ʵ��
//���� �����ַ����ֱ�Ϊ  abbbcdef �� bbc 
//����Ҫ����һ������������ַ�����κ������в��ܹ���������亯������
#include<assert.h>
char* my_strstr(const char* arr1,const char* arr2)
{
	assert(arr1 && arr2);//��ָ��Ϊ��ָ�룬ָ��Ĵ�����������
	const char* s1 = arr1; 
	const char* s2 = arr2;
	const char* cur = arr1;
	while (*cur)//while (*cur != '\0')
	{
		s1 = cur;
		s2 = arr2;
		while (*s1&&*s2&&(* s1 == * s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cur;
		}
		cur++;
	}
	return NULL;
}
//�����ִ���ʱ����ʵ����һ������Ч�ģ��������KMP�㷨���������⽲����C���ԣ������㷨
//��Ҫ��һ���˽�Ŀ�����bվ ����  ���ش󲩸�
int main()
{
	char arr1[100] = { 0 };
	char arr2[100] = { 0 };
	gets(arr1);
	gets(arr2);
		if (my_strstr(arr1, arr2) == NULL)
		{
			printf("û�ҵ���Ӧ�ַ���\n");
		}
		else
			printf("%s\n", my_strstr(arr1, arr2));
	return 0;
}







