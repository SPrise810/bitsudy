#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
////字符串和内存函数
//
//int main()
//{
//	char ch = 'a';
//	//c语言没有字符串类型
//	//但是我们有一系列操作字符串的函数
//	//1.1求字符串长度函数 strlen（）  需要引用string.h头文件
//	//strlen 函数将会返回字符串的长度,返回类型是 size_t   无符号数
//	//原理是找到字符串中末尾自带的斜杠0
//	//如果我们将字符数组 初始化一个个字符类型，那么我们的strlen 就会寻找失败
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
//	//解决办法1：  可以不相减直接比较大小
//	//解决办法2：  强制类型转换
//	return 0;
//}
//
//

//模拟实现strlen
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	//断言： 让他不是空指针，否则报错
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
//上述为计数器写法
//我们还有递归写法
//还有指针写法


//1.2 字符串拷贝函数strcpy()
//把源字符串(包括\0)拷贝到目标字符串
//备注： 源字符串必须是\0为末尾结束
//int main()
//{
//	//char arr1[20] = { 0 };
//	//char arr2[] = "abcdef";
//	////char arr2[] = { 'a','b','c','\0' };
//	////char arr2[10]={"abc"};
//	// 情况一
//	//char arr1[4] = { 0 };
//	//char arr2[10] = { "abcdefg" };
//	//情况二
//	//char * arr1 = "abcdefghijklm";
//	//char arr2[10] = { "abcdef" };  
//    //情况三
//	char arr1[20] = { 0 };
//	char* arr2 = "abcdef";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//}


//自制my_strcpy()函数
//#include<assert.h>
//strcpy返回的是目标空间的起始地址 char *
//strcpy函数的返回类型的设置是为了实现链式访问，就是直接 引用
//例如printf("%s",my_strcpy(arr1,arr2));
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
//		;	//该如何理解呢，我们括号里是一个赋值表达式
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


//1.3strcat() 函数
//字符串追加函数
//比如
//#include<assert.h>
//char* my_strcat(char* dest, char* src)
//{
//	//1.找到源字符串中的\0
//	//2.再把源字符串拷贝到目标空间
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest != '\0')
//	{
//		dest++;
//	} 
//	//while (*dest++)//这种写法存在一定的问题
//	//			   //当我们的dest判断为\0之后，我们的后置++仍然会进行操作，导致有一个字符空间被略过
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
//	//char arr1[20] = "hello\0xxxxxxx";//测试原来 斜杠0 在函数中的作用
//	//通过测试，我们发现 在要添加的字符串的末尾是以\0为标志而结束的
//	char arr2[] = " bit";
//
//	//strcat(arr1, arr2);
//
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	//追加内容
//	return 0;
//}

//字符串自己给自己追加拷贝的情况
//int main()
//{
//	char arr[20] = "bit";
//	my_strcat(arr, arr);
//	printf("%s\n", arr);//会造成死循环
//	//第一步while循环我们源字符串dest找到\0，第二步进入下一个拷贝循环，src从头开始进行拷贝到目标字符串
//	//但是有一个问题，我们dest末尾的\0被src指向的b给覆盖掉了，这样源字符串就不存在\0 所以会死循环
//  //上述所说的是指我们的个人函数写法
//  // 在实际的编译过程中，我们还是会发现我们的原函数strcat函数运行起来没有问题
//	return 0;
//}

//strcmp函数
//字符串比较  函数

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	printf("%d",strcmp(arr1, arr2));
//	//我们在这里比较的不是字符串的长度
//	//而是字符串中对应位置上的字符的大小
//	//如果相同，就比较下一对儿，直到不同或者都遇到\0
//	//字符比较的时候 一定 一定 一定 是比较ASCII码值
//	//函数带有返回值，1，-1，0 分别代表大于小于等于
//	//我们这里不能固定思维将返回值确认为1，-1，0
//	//我们应当调整为>0  <0   =0 
//	//1,-1,0只是在VS编译器中表示大于小于等于的情况
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
//	return *s1 - *s2;//都行，只是这种写法不符合VS规定的返回值-1 和 1 以及 0
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	printf("%d", strcmp(arr1, arr2));
//	return 0;
//}

//简单总结一下：  strcpy  strcat   strcmp  这些都是长度不受限制的函数
//         字符串拷贝  字符串追加 字符串比较函数

//那么我们后面讲的这些就是长度受限制的函数  strncpy strncat  strncmp
//strncpy(arr1,arr2,6)
//将我们的源代码arr12贝到目标空间arr1当中，后面的整形代表着拷贝字符的个数
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "qwe";
//	//strncpy(arr1, arr2, 3);
//	strncpy(arr1, arr2, 5);
//	printf("%s", arr1);
//	return 0;
//}

//\0算是字符串中的内容，作为一个字符串的结束 标志存在
//strncat 字符串追加函数
//我们从被添加的字符串的\0位置开始找起
//找到\0之后然后将我们需要添加的字符串 加到字符串的后面，加的同时我们将原字符串的
//内容进行覆盖，再添加完之后，在末尾给字符串添加一个\0进行结尾

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwertyuiop";
//	//char arr2[] = "qwe";
//	strncat(arr1,arr2,5);//5个字符内容加一个\0
//	printf("%s\n", arr1);
//
//	return 0;
//}

//自主实现
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

//拓展： 
//如果我们强行去比较字符串本身的大小，如下：
//	char arr1[] = "abcdef";
//	char arr2[] = "abcde";
//if (arr1 < arr2)
//{
//	;
//}
//在这种情况下我们比较的是，两个字符串的地址
//if ("abc" < "abcdef")
//{
//	;
//}
//这种情况下我们比较的是两个常量字符串的地址
//char* p = "abc";实际上是将a的地址赋给了我们定义的指针p

//自主实现 strncmp自定义范围字符串比较函数
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

//strstr函数（判断字符串的包含关系）
//char * strstr(const char *str1,const char * str2);  返回类型为字符类型指针，
//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr_1[] = "abcdeqabcdef";
//	char arr2[] = "cdef";
//	char* ret=strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("没找到对应字符串\n");
//	}
//	else
//		printf("%s\n", ret);
//	//
//	ret = strstr(arr_1, arr2);
//	if (ret == NULL)
//	{
//		printf("没找到对应字符串\n");
//	}
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//自主实现my_strstr()
//其实我们的实现过程还是比较复杂的，说实话
//例如 两个字符串分别为  abbbcdef 和 bbc 
//我们要考虑一下上面的特殊字符串如何合理运行才能够正常完成其函数功能
#include<assert.h>
char* my_strstr(const char* arr1,const char* arr2)
{
	assert(arr1 && arr2);//若指针为空指针，指向的串就有问题了
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
//查找字串的时候其实还有一个更高效的，更经典的KMP算法，但我们这讲的是C语言，不是算法
//想要进一步了解的可以在b站 搜索  比特大博哥
int main()
{
	char arr1[100] = { 0 };
	char arr2[100] = { 0 };
	gets(arr1);
	gets(arr2);
		if (my_strstr(arr1, arr2) == NULL)
		{
			printf("没找到对应字符串\n");
		}
		else
			printf("%s\n", my_strstr(arr1, arr2));
	return 0;
}







