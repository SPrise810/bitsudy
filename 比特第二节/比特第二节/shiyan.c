//第五节其实是！
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//		printf("成年\n");
//	else
//		printf("未成年\n");
//	return 0;
//}
///*如果写成 18<=age<30    举例是10岁的话，那么10<30 真 但是10<18为假 
//int main()
//{
//	int age = 0;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 30)
//		printf("青年\n");
//	else if (age >= 30 && age < 50)
//		printf("中年\n");
//	else if (age >= 50 && age < 80)
//		printf("中老年\n")
//	else
//		printf("老寿星\n");
//	return 0;
//}
////0为假  非0 为真其他情况全是真  -1啊 0.1啊都是真
////一对大括号就是一个代码块
////
////悬空else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
////  else                       这个和下面的有区别
////	printf("haha\n");
//		else
//			printf("haha\n");
//	return 0;
//}
////考虑点： if 和  最近的else 优先匹配
////判断好if 和 else 的范围！请有效使用大括号，不要如上述代码容易误导人
////if 和else 合起来是一条语句，因为执行的不是if 就是else
////代码风格很重要！养成良好习惯！
////高质量C++编程  看看书  前三章  看看咋培养风格
////
////代码return完之后就会回去
////"风格迥异"写法：
//if (condition)
//{
//	reutrn x;
//}
//return y;
//
////正常人写法：
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
////代码三
//int main()
//{
//	int num = 1;
//	//if (num == 5)//不报错
//		printf("hehe\n");
//}
//int main()
//{
//	int num = 1;
//	//if (5 = num)//报错
//		printf("hehe\n");
//}
//当我们判断变量与常量是否相等时，把常量放在左侧容易找出问题
//练习 打印1~100的全部奇数
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
		i = i + 2;//究其规律
	}
}
#include<string.h>
int main()
{
	printf("%d\n", strlen("c:\test\628\test.c"));
	return 0;
}
*/
//////////////////////////////while循环讲解
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
//	//getchar 如果读取错误则会返回EOF ,如果读取正常，则会返回读到的字符
//	 //EOF  为-1
//	 // char 类型无法返回一个整型，存不下
//	//int ch=getchar ();用ｉｎｔ类型来接收
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
//scanf返回的也是int 如果返回错误也是返回EOF
//
//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码\n");
//	scanf("%s",password);
//	printf("请确认密码（Y/N):>");
//	int ch = getchar();
//	if ('Y' == ch)
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//
//}
//再getchar 和  scanf 之间   还有一个缓冲区的
//当我们输入完password之后，缓冲区就有了我们的密码+\n
//123456读取完了之后剩下一个\n，然后我们走到了下一步getchar 这一步
//缓冲区的\n就被getchar 读取，从而误导判断

//法二
//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码\n");
//	scanf("%s", password);
//	printf("请确认密码（Y/N):>");
//	getchar();
//	int ch = getchar();
//	if ('Y' == ch)
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//
//}
//当我们输入完123456 abcdef\n之后，这个代码又会判断失败，因为我们输入字符串
//再碰到空格的时候会自动结束，那么缓冲区又会剩下 abcdef\n 那么一个getchar 就没有办法处理掉缓冲区全部的内容
//所以说这种加上一个getchar 的方法是有局限性的！
//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码\n");
//	scanf("%s", password);
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
////(写不写分号都可以，主要是希望我们能够知道 这里有一个空语句，最后加上空语句，这是好的代码习惯）
//	}
//	printf("请确认密码（Y/N):>");
//	getchar();
//	int ch = getchar();
//	if ('Y' == ch)
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//	return 0;
//}
//我们用一个while循环重新定义一个tmp ，循环getchar 那么我们就将缓冲区剩下的内容全部吃掉了
// 当我们遇到了\n的时候我们就自动停止，这时我们
// 前面所读取到的内容就是我们所输入的密码，然后后米娜我们就可以正常执行
// getchar 语句，实现我们所需要的代码内容
//法3，这个就是遇到这种情况的时候处理的办法，别死磕如果遇到其他请款该怎么办，这就是一种情况的一种解决方式而已罢了，没有必要死磕
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
//读取字符，只打印数字字符

//for
//#include <stdio.h>
//int main()
//{
//	int i = 1;//初始化
//		while (i <= 10)//判断
//		{
//		printf("%d", i);
//		i++;//调整
//		}
//		return 0;
//}
// //三个条件，循环缺一不可
//我们就用for循环来解决这一个问题
//for(表达式1 初始化部分； 表达式2 判断部分； 表达式3 调整部分）
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}示例
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
//break结果是1234 
//如果换成continue 结果是1234 死循环（错了） 实际上是12346878910
//为什么会没有5呢
//5之后，跳过本次循环，直接回到调整阶段 i++ ，然后i成了6

//1.既然我们已经开始再for 的循环框里进行循环了
//那我们就不要在循环体内进行 调整阶段 的修改(尽量）
//2.前闭后开区间写法 ，从i=0；开始 <10  则循环10次 <15则循环15次
// 从0开始的时候这种写法可读性比较强
//3.0for 循环的变种
// 初始化判断调整全都删掉之后for(;;)
//如果我们把for循环的判断部分省略，那么就恒为真 
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
//只打印10个了，i=0 j0~9   然后i=1 j=10不满足条件了，然后我们就出现问题了
//4.循环变量我们可以用两个变量来控制循环
//
////打印3的所有的倍数
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
////最大公约数
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
//1000~2000间的闰年
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
////三个数字大小排序 
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
//100~200 间的质数/素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	// 外层循环用来获取100~200之间的所有数据，100肯定不是素数，因此i从101开始
//	for (i = 101; i <= 200; i++)
//	{
//		//判断i是否为素数：用[2, i)之间的每个数据去被i除，只要有一个可以被整除，则不是素数
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//
//		// 上述循环结束之后，如果j和i相等，说明[2, i）之间的所有数据都不能被i整除，则i为素数
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);//计数，一共有多少个质数
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
//1~100 出现9的次数
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