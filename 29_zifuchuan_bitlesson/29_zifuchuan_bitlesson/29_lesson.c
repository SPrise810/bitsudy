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


//strncat ����



















