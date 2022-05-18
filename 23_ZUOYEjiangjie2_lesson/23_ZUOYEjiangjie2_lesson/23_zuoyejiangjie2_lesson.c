#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//19年 20年因为疫情原因都没办法
//把作业讲好
//
//
//struct student
//{
//	int age;
//	char name[10];
//}stu;
//stu是创建的一个结构体变量 
//操作符有‘.’操作符： 结构体变量.成员名
//还有箭头操作符， ： 结构体指针->成员名
//还有            ：（*结构体指针）.成员名
// 
// 
// 
// 
//交换数组的奇偶数
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)//这样写还可能有问题
//		//如果我们的数组为全奇数，全偶数，我们还要避免数组越界（left++加飞了，比right大）
//	{//  所以要在left++ 和right--这两个循环加上一个条件（left<right)
//		while ((left < right)&&(arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right)&&(arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr,sz);
//	return 0;
//}
//
//
//关于奖学金，努力一年时间拿一个奖学金
//最多8000块钱
//找个好实习，一个月就他妈的一万块钱我蒙了
//我他妈懵了个大逼了
//我们要把目光放长远，有大格局，大格局....
//
// 知识点：整型提升
//
//int main()
//{
//
//		unsigned char a = 200;
//		//00000000000000000000000011001000(整型数据）
//		//11001000---a实际存放的内容
//		unsigned char b = 100;
//		//00000000000000000000000001100100
//		//01100100--b
//		unsigned char c = 0;
//		c = a + b;
//		//将a和b存放进c中会进行整型提升
//		//存放到C中的数据会发生截断
//		//00000000000000000000000011001000
//		//00000000000000000000000001100100
//		//00000000000000000000000100101100
//		//00101100---c
//		printf(" % d % d", a + b, c);
//	return 0;
//}
//
//如何区分小端大端
//int a = 1;
//0x00 00 00 01
//
//存放形式： 01 00 00 00
            //低       高
//小端如上
//大端相反   00 00 00 01
//
//打印杨辉三角
//int main()
//{
//    int arr[10][10] = { 0 };
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 10; j++)
//        {
//            if (j == 0)
//            {
//                arr[i][j] = 1;
//            }
//            if (i == j)
//            {
//                arr[i][j] = 1;
//            }
//            if (i >= 2 && j >= 1)
//            {
//                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//            }
//        }
//    }
//    for (i = 0; i < 10; i++)
//    {
//        int j = 0;
//        for (j = 0; j <=i; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//写法2
//int main()
//{
//    int arr[10][10] = { 0 };
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        int j = 0;
//        for (j = 0; j <=i; j++)
//        {
//            if (j == 0)
//            {
//                arr[i][j] = 1;
//            }
//            if (i == j)
//            {
//                arr[i][j] = 1;
//            }
//            if (i >= 2 && j >= 1)
//            {
//                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//            }
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//
//    }
//    return 0;
//}
//简便了一点嘿嘿
//一定要在学习一下打印菱形的方法--然后在杨辉三角里面进行规整的打印
//在22节打印菱形
// 
// 
//把一个现实的实际问题转化成数学问题
//
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//1我们分别假设a,b,c,d分别是凶手
//2然后进行话语判断
//3我们根据已知判断哪种情况符合已知条件
//int main()
//{
//    int killer = 0;
//    for (killer = 'a'; killer <= 'd'; killer++)
//    {
//        if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//        {
//            printf("%c\n", killer);
//        }
//    }
//    return 0;
//}
//
//
//
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；  (b==2 +  a==3  )==1
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    int e = 0;
//    for (a = 1; a <= 5; a++)
//    {
//        for (b = 1; b <= 5; b++)
//        {
//            for (c = 1; c <= 5; c++)
//            {
//                for (d = 1; d <= 5; d++)
//                {
//                    for (e = 1; e <= 5; e++)
//                    {
//                        if (((b == 2) + (a == 3) == 1)&&
//                            ((b==2)+(e==4)==1)&&
//                            ((c==1)+(d==2)==1)&&
//                            ((c==5)+(d==3)==1)&&
//                            ((e==4)+(a==1)==1))
//                            {
//                            if(a* b* c* d* e == 120)
//                            printf("a=%d,b=%d,c=%d,d=%d,e=%d", a, b, c, d, e);
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return 0;
//}
//
//
//牛客“公务员面试”题目
//
//int main()
//{
//    int i = 0;
//    int score = 0;
//    int max = 0;
//    int min = 100;
//    int sum = 0;
//    int n = 0;
//    while (scanf("%d", &score) != EOF)
//        //和while（1）里面再加上scanf("%d",&score);相同
//    {
//        n++;
//        if (score > max)
//            max = score;
//        if (score < min)
//            min = score;
//        sum += score;
//        if (n == 7)
//        {
//            printf("%.2f\n", (sum - max - min) / 5.0);
//            n = 0;
//            sum = 0;
//            max = 0;
//            min = 100;
//        }
//    }
//    return 0;
//}
//
//
//获得月份天数
//int main()
//{
//    int y = 0;
//    int m = 0;
//    int days[12] = { 31,28,31,30,31,30,31,31,30,31,39,31 };
//    while (scanf("%d %d", &y, &m) == 2)//读到1个就返回1
//    //while(~scanf("%d %d",&y,&m))//EOF返回是-1，补码为全1，按位取反~就全为0了
//    {                    //或者写成！=EOF，正常就是返回2 
//                        //啥也读不到就是就是返回EOF
//        int day = days[m - 1];
//        if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//        {
//            if (m == 2)
//            {
//                day += 1;
//            }
//        }
//        printf("%d\n", day);
//    }
//    return 0;
//}
//用case语句就是麻烦点。因为要写很多个case月份对应的天数
//
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[100] = { 0 };
//    int arr2[100] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int m = 0;
//    scanf("%d", &m);
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != m)
//        {
//            arr2[j] = arr[i];
//            if (j != n - 1)
//            {
//                j++;
//            }
//        }
//    }
//    for (i = 0; i < j; i++)
//        printf("%d ", arr2[i]);
//    return 0;
//}
//
//
//
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    int del = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &del);//要删除的元素
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != del)
//        {
//            arr[j++] = arr[i];
//        }
//    }
//
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


































