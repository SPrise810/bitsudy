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













































