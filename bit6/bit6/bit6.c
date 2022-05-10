#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//		i++;
//	}while (i<=10);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	//产生1~n个数字
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
/////////////////////////////计算阶乘的和
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	for(i = 0; i <= n; i++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//}
//嵌套循环，欸嘿
//但是效率比较低
//简单做法就是直接在计算阶乘的循环里进行累加就可以了..
////代码如下：
//#include<stdio.h>
//int main()
//{
//	int n;
//	int i;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
////
 //在一个有序数组中查找具体的某个数字
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//查找元素7
//	int sz = sizeof(arr) / sizeof(arr[0]);//整个数组大小除以每个元素的大小
//	int left = 0;//做下表
//	int right = sz - 1;//右下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}//代表中间元素
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是 %d", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("没有找到啊这\n");
//	}
//	return 0;
//}
//我买了一双鞋，1-100块钱之间，你猜多少钱？
//折中 取50，划分区间
//此乃折半查找法
//扣3333333333333333，确定自己已经听懂了
//我们是要明确如何找到中间元素的，当我们知道这些东西的时候

//mid在这个过程中是转换的主体，而left right 是我们调控的范围
//我们通过调控范围lr 以及不断更新mid ，通过if条件判断来实现二分法判断
//
//
//编写代码，演示多个字符从两端移动，向中间汇聚
//#include<stdio.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "dasdasdfaifasffasfafaf";
//	char arr2[] = "######################";
//	int left = 0;
//	//int right =sizeof(arr1)/sizeof(arr1[0])-2;//剪2 是因为去除末尾的\0需要减1，然后在减1是因为字符串下标是从0开始的，我们算出来这个字符串的个数之后，需要按照下标刷新计算
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);//单位是毫秒，是为了延迟时间，这是windows 带着的函数
//		system("cls");//这是清理平台，刷新屏幕的函数，在stdlib的库当中
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//
//
//编写代码实现，模拟用户登录情景，并且只能登陆三次。
//(只允许输入三次密码， 如果密码正确则提示登录成功，如果三次均输入错误，则推出程序）
//两个字符串的比较是不能直接使用==的
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password, "bh090091") == 0)//这是一个函数，比较字符串是否都相等，如果相等的话输出0，可以查一下在cplusplus 网站上
//		{
//			printf("密码正确，欢迎来到汉堡，嗨嗨！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入密码\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均输入错误，鬼！");
//	}
//	return 0;
//}
//
//猜数字游戏
//玩家猜数字
//玩家猜小了，就告知猜小了  猜大了就告知猜大了
//直到猜对为止
//游戏可以一直玩

//写个函数菜单
//一开始我们先有一个思路，首先制定一个大体的规划
#include<stdio.h>
#include<time.h>
void menu()
{
	printf("******************\n");
	printf("*****1.play*******\n");
	printf("*****0.exit*******\n");
	printf("******************\n");
}
//猜数字游戏的实现
void game()
{

	//1.生成一个随机数
	//2.猜数字
	//14//srand((unsigned int)time(NULL));//所以我们改变其位置，因为当我们输入的速度足够快时，随机数不够随机，所以需要放在主函数里面	
	//15srand不需要正确生成随机数的方法频繁的调用，我们只需要调用一次就可以了，所以我们直接放在主函数里只调用一次，这个时候我们的随机数就足够随机，这就是
	//算法生成的随机都是伪随机，不可能是真正的随机，关于rand 和srand 的底层逻辑我们无从知晓，我们只需要学会应用即可
	//4time 时间函数 
	//3rand 生成随机数函数

	//5我们在调用rand 函数之前我们需要调用srand ，大概意思为设置随机数的生成器，将随机数初始化
	//6srand（）； 需要引用一个unsigned int数据类型，我们为了生成一个随机数我们要传入一个随机数，那么传入什么随机数呢，那就是时间，因为时间是在不断改变的
	//7我们从而引出一个时间戳的概念，时间戳就是我们把现在的时间与计算机的起始时间的差值转换成数字，那么就是不断变化的一个数值，
	//8然后我们就需要time函数
	//9time函数有一个参数，time_t,如果我们想把时间戳存起来，我们可以把地址传递给这个 参数，这样这个函数就会把时间戳放在这个参数里面了
	//10这是一种获得时间戳的方法，我们这里采用的是第二种，time 函数会返回一个时间戳，我们只要接收这个返回值就可以了
	//11如果想要用返回值，那么我们就用一个空指针返回就行了即演示为 time(NULL); ，time_t仔细研究就是 long类型的整型类型的整数
	//12但是我们srand 需要的是一个unsigned int 的整型类型，他俩还是有差异的，所以我们就通过强制类型转换
	//13但是我们发现我们在生成随机数的时候，如果我们生成的速度足够快，那么随机数就又有可能相等，因为我们总是在调用函数game()的时候重新运行rand 函数  
	int guess = 0;
	int ret = rand() % 100 + 1;//生成一个随机数控制大小，0~99个数字后再加一个1就是0~100内的任意随机值
	//printf("%d\n", ret);测试
	while (1)
	{
		printf("猜数字：>\n");
		scanf("%d", &guess);
		if (ret > guess)
			printf("猜小了，嘎\n");
		else if (guess > ret)
			printf("猜大了，嘎\n");
		else
		{
			printf("猜对了，嗨嗨~\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do 
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:printf("退出游戏\n");
			break;
		default:printf("输入错误，请重新输入：\n");
		}
	} while (input);
	return 0;
}
// //这是我们函数的一个初级的模型理念，我们现在要写一个game函数来实现游戏
//////
//#include<stdio.h>
//	int main()
//	{
//		again:
//		printf("hehe\n");
//		goto again;
//		return 0;
//	}
	//goto 类似一个传送的技能 这样就可能会使代码的节奏比较凌乱，所以我们说，可以以没有必要使用，会影响代码的可读性
	//goto 可以往前跳，但是不能跨函数调整，就是说，不能在函数跳转，就是说不能把“传送”符号放在函数里面。

	////但是某些场合goto还是有用的，例如一次跳出两层或多层循环。
	//for()
	//	for()
	//		for ()
	//		{
	//			if(disater!出现危险)
	//				goto error；
	//		}

	//error：
		//处理错误情况
	//就当成传送用吧
	//
	//关机程序
	//只要程序运行起来，电脑就在一分钟内关机，如果输入：我是猪，就取消关机
//#include<stdio.h>
//#include<stdlib.h>
//	int main()
//	{
//		char input[20] = { 0 };
//		//打开电脑右下角，搜索，cmd 命令提示符，输入shutdown （一个命令）用来关机，
//		//空格-s 表示设置关机 空格-t 表示设置时间关机
//		//我们输入 shutdown -s -t 60
//		//输入 shutdown -a 终止关机
//		//我们在C语言中，system是一个库函数，是用来执行系统命令的，我们通过这个函数，来控制电脑的关机
//		system("shutdown -s -t 60");
//		again:
//		printf("请注意，你的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		//然后进行判断
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");//取消关机
//			printf("好滴，小猪\n");
//		}
//		else
//		{
//			printf("看我真实不真实你就完了！\n");
//			goto again;
//		}
//		return 0;
//	}
	//我们当然可以不用goto 语句
//#include<stdio.h>
//#include<stdlib.h>
//	int main()
//	{
//		char input[20] = { 0 };
//		system("shutdwon -s -t 60");
//		while (1)
//		{
//			printf("请注意，你的电脑将在一分钟后关机，如果输入：我是猪，就取消关机\n")；
//				scanf("%s", input);
//			if (strcmp(input, "我是猪") == 0)
//			{
//				system("shutdown -a");
//				break;
//			}
//		}
//		return 0;
//	}
	//从这个角度来看，这个goto 语句可有可无其实也




























