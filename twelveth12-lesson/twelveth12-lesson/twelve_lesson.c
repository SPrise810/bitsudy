#define _CRT_SECURE_NO_WARNINGS 1
//
//递归不能够无限递归下去  
//
//#include<stdio.h>
//int fun(int n)
//{
//	if (n == 5)
//	{
//		return 2;
//	}
//	else
//		return 2 * fun(n + 1);
//}
//int main()
//{
//	int ret = fun(2);
//	printf("%d", ret);
//	return 0;
//}
//
//实现字符串逆序
//
//input:  abcdef
///output:fedcba
//#include<stdio.h>
//#include<string.h>
//void reverse_string1(char* arr)//指针
//{
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	while(left<right)
//	{
//	char tmp = *left;
//	*left = *right;
//	*right = tmp;
//	left++;
//	right--;
//	}
//}
//void reverse_string2(char arr[])//数组
//{
//	int len = strlen(arr);//求字符串长度  几个元素 不包含\0
//	int left = 0;//   能用sizeof来求,但是要注意\0这个元素仍然存在
//	//int right = len-1;
//	//int right=sz - 2;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse_string3(char* arr)//递归
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr=*(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//	{
//		reverse_string3(arr + 1);
//	}
//	*(arr + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);//8
//	//reverse_string1(arr);
//	//reverse_string2(arr); 
//	//reverse_string3(arr);//实际的体验当中，我们还是仍然认为循环的方式更加优秀
//	// 	   我们只是为了练习一下递归才用的递归写的字符串逆序
//	//printf("%d\n",sz);//8
//	//printf("%d\n", strlen(arr));//7
//	printf("%s \n", arr);
//	return 0;
//}
//sizeof 和 strlen 的区别需要在了解了解
//
//写一个队规函数Digitsum(n)，输入一个非负整数，返回组成它的数字之和
//
//#include<stdio.h>
//int Digitsum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return Digitsum(n / 10) + n % 10;
//	}
//	else
//		return n;
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = Digitsum(num);
//	printf("%d\n", ret);
//	return 0;
//}
//
//编写一个函数  实现n的k次方，使用递归实现
//
//#include<stdio.h>
//double fun(int n, int k)
//{
//	if (k > 0)
//		return n * fun(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / fun(n, -k);//负数又回到正数的行列里面进行运算
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret=fun(n, k);
//	printf("%lf", ret);
//	return 0;
//}
//先装个逼哈哈哈哈哈，笑拉了  先吹个蛋哥C++  然后汤哥java都是大哥级别的
//上海爱数软件 完全不加班 上班有班车 下班有班车 工作完全养老 哈哈
//非代码项目
//非 Linux 内核图
//网络协议栈的图   直接画出来 ，我丢， 一两米长宽的玩意儿  字儿都是指甲盖长的
//我真的是醉了哈哈哈
//实习实习实习实习实习实习实习实习实习 
//好好学习，他妈的
//好好学习好好学习好好学习
//
//创建一个整形数组，完成对数组的操作
//
//实现函数init(),初始化数组为全0
//实现reverse(),函数完成数组元素的逆置
//#include<stdio.h>
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	reverse(arr, sz);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	
//	return 0;
//}
////
////交换两个数组的内容
////
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	//无法通过数组名直接进行整体交换
//	//我们通过一个一个进行交换
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}
//
////新内容：操作符操作
////
////算术操作符：       +   -  *   /  %
////
//#include<stdio.h>
//int main()
//{
//	//我们主要讲一讲除法 和 取余
//	float a= 3 / 2;//这里我们使用整数  3 和  整数  2 ，实际上还是整数除法。
//	//对于其结果仍然为一个整数
//	printf("%f\n",a);//结果为1.000000
//	float b = 3.0 / 2;
//	printf("%f\n",b);
//	int c1 = 9 % 2;//取余数
//	//对于取余操作数来说，两边的数都只能是整形
//	int c2 = 9.0 % 2;//9.0属于浮点型，不能够进行整数取余操作
//	return 0;
//}
//
// 
// 
//移位操作符
//
// 
// 必须了解二进制 
//   <<左移操作符    >>右移操作符
//移位操作符的操作数只能是整数
//左移：左边丢弃，右边补0
//#include<stdio.h>
//int main()
//{
//	//整数的二进制表示有三种形式：   原码  反码   补码 
//	//正整数的原码，反码，补码是相同的
//	//负整数的原码、补码、反码是要计算的
//	//
//	int a = 5;//101，这里还需要注意，因为a是一个整形，它总共有4个字节，32个比特位
//	//如果想用二进制101来表示五，我们需要补充前面的位数
//	//00000000000000000000000000000101
//	//第一个0表示符号位：为0表示整数，符号为1 表示负数
//	//更具正整数的二进制规律，那么其补码与反码和正码一样：
//	//00000000000000000000000000000101
//	int a2 = -5;
//	//10000000000000000000000000000101 正码：符号位改为1 其余不变
//	//11111111111111111111111111111010 反码：相较于正码符号位不变，其余都反过来
//	//11111111111111111111111111111011 补码：反码加一就是补码
//	//整数在内存中存放的是补码的二进制，这个以后还会讲，不用着急
//	// 
//	int b = a << 1;//即把我们的...101向左移动一位，成了...1010,
//	int b2 = a2 << 1;
//	printf("%d\n", a);
//	printf("%d\n", b);//我们打印出来的都是原码
//	printf("%d\n", b2);//只是我们存储的时候用的是补码
//	return 0;
//}
//原码------------》反码-------------------》补码
        //符号不变           //反码+1
        //其他位按位取反
//① 《---其他位取反      《----    补码-1
//②   补码  取反  末位+1
//
// 右移比较难一点
// 
//#include<stdio.h>
//int main()
//{
//    int a = 5;//00000000000000000000000000000101
//    int b = a >> 1;//右移：  算术右移，逻辑右移
//    //  算术：  右边丢弃，左边补原符号位
//    //逻辑右移： 右边丢弃，左边补0
//    int a2 = -5;
//    int b2 = a2 >> 1;
//    printf("a=%d b=%d\n", a, b);//有/2的效果
//    printf("a2=%d b2=%d\n", a2, b2);//采用了算术右移
//    //右移操作符的方式（算术  逻辑） 取决于编译器本身
//    return 0;
//}
//移动负一位，这个东西标准未定义  ：    num>>-1
//
// 
// 
//位操作符
// & --按（二进制）位与   |  ---按（二进制）位或   ^  ----按（二进制）位异或
//&a  ，单目操作符
// a&b  ， 双目操作符
#include<stdio.h>
int main()
{
    int a = 3;
    int b = -5;
    int c = a & b;
    printf("%d", c);
    //00000000000000000000000011    3   补码
    //11111111111111111111111011    -5
    //00000000000000000000000011    3   c的补码   &
    //11111111111111111111111011   -5   c的补码   |
    // &  按位与  如果ab补码同时为1 ，则c的补码为1，否则  为0
    //|   按位或  只要ab的补码有一个为1 ，则c补码为1，否则为0
    return 0;
}

















