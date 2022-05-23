#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//指针和数组笔试题解析
//int main()
//{
//	//sizeof  计算的是对象所占内存的大小，单位为字节
//	int a[] = { 1,2,3,4 };
//	//1.sizeof(数组名） ，这里的数组名表示整个数组，计算的是整个数组的大小
//	//& 数组名，这里的数组名表示整个数组，去除的是整个数组的地址
//	printf("%d\n", sizeof(a));//      16
//	printf("%d\n", sizeof(a+0));// 4/8 取决于编译器位数  a+0是数组第一个元素的地址，是地址，大小就是4/8个字节
//	printf("%d\n", sizeof(*a));//  数组首元素的地址，*a表示数组的第一个元素，sizeof(*a)就是第一个元素的大小 4字节
//	printf("%d\n", sizeof(a+1));//数组第二个元素的地址 4字节
//	printf("%d\n", sizeof(a[1]));//  数组第二个元素   4字节
//	printf("%d\n", sizeof(&a));//  取出的是数组的地址  ，但也是地址 4字节
//	printf("%d\n", sizeof(*&a));//  取地址再解引用，属于第一种情况 16字节
//	printf("%d\n", sizeof(&a+1));//  &a拿到的是数组地址，+1 跳过数组，指向后面位置的地址 4/8字节（取决于编译器位数）
//	printf("%d\n", sizeof(&a[0]));//  取出的数组第一个元素的 地址 4/8 
//	printf("%d\n", sizeof(&a[0]+1));//  取出的是数组第二个元素的地址  4/8
//	return 0;
//}
// 
// 
// 下一题
// 
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//    6 
//	//strlen 我们会生成随机值，它会在数组后面的内存找到\0才结束
//	printf("%d\n", sizeof(arr+0));//  1，首元素地址
// 	printf("%d\n", sizeof(*arr));//   1  首元素内容 char
//	printf("%d\n", sizeof(arr[1]));// arr[1]  数组的第二个元素，大小是 1字节
//	printf("%d\n", sizeof(&arr));//   取出的是数组的地址  地址 4/8字节
//	printf("%d\n", sizeof(&arr+1));//  取地址+1  还是地址  4/8字节
//	printf("%d\n", sizeof(&arr[0]+1));// 取首元素的地址+1 ,第二个元素的地址 4/8字节
//	return 0;
//}
// 
// 
// 在界面上方能够更换平台位数  选择x64 位平台
// 选择后会出现警告，这里我们的sizeof  会默认返回unsigned long long 类型的数据，对应printf 也要改成%llu
// 
//第三题
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//     arr无\0会在数组后面继续数，直到发现\0  随机值
//	printf("%d\n", strlen(arr+0));//   首元素的地址  随机值
//	//printf("%d\n", strlen(*arr));//不报错，但是有问题 且编译器发现不了    数组首元素  char 'a'=97，锤子看什么都是钉子，看见就要敲一敲 在指针的眼里什么都是地址，97不能是地址，会访问出错err   
//	//printf("%d\n", strlen(arr[1]));//不报错，但是有问题 且编译器发现不了  我们把98传给指针，也是错误的err
//	printf("%d\n", strlen(&arr));//    取出的是整个数组的地址，还是随机值
//	printf("%d\n", strlen(&arr+1));//  数组后面的的地址  随机值
//	printf("%d\n", strlen(&arr[0]+1));//  第二个元素的地址 随机值
//	return 0;
//	//我们向内存申请空间  是   创建变量
//	//sizeof是操作符
//}
// 
// 
//第四题 
//// 
//int main()
//{
//	char arr[] = "abcdef";// abcdef\0
//	printf("%d\n", sizeof(arr));// 数组总大小 7 
//	printf("%d\n", sizeof(arr+0));//    数组首元素地址 4/8个字节
// 	printf("%d\n", sizeof(*arr));//   数组首元素地址解引用  'a'=1字节
//	printf("%d\n", sizeof(arr[1]));// 下标位1 的元素  数组的第二个元素 1字节
//	printf("%d\n", sizeof(&arr));//   数组的地址   4/8字节
//	printf("%d\n", sizeof(&arr+1));//  数组\0后面的地址  4/8字节
//	printf("%d\n", sizeof(&arr[0]+1));//  数组第二个元素的地址  4/8字节
//	return 0;
//}
// 
// 
// 第五题
//int main()
//{
//	char arr[] = "abcdef";// abcdef\0
//	//strlen统计\0之前的数据个数
//	printf("%d\n", strlen(arr));//   6     
//	printf("%d\n", strlen(arr+0));//    首元素的地址  6 
//	printf("%d\n", strlen(*arr));//    err  97非法访问内存，出错（编译器检查不出）
//	printf("%d\n", strlen(arr[1]));// err   98非法访问内存， 出错（编译器检查不出）
//	printf("%d\n", strlen(&arr));//   6
//	printf("%d\n", strlen(&arr+1));//   随机值
//	printf("%d\n", strlen(&arr[0]+1));// 第二个元素的地址 5
//	return 0;
//}
// 
// 
//sizeof 是一个操作符  计算的是对象所占内存的大小-单位是字节 size_t
// 不在乎内存中存放的是什么，只在乎内存大小
// 
// strlen 库函数
// 只能求字符串长度
// 从给定的地址访问字符，统计\0之前出现的字符个数
// 只能求字符串，小心非法访问
// 
// 
// 第六题
// 
//int main()
//{
//	char* p = "abcdef";// 在内存中 存放着一个常量字符串abcdef
////指针p，p是指针变量  指向了 字符串“abcdef”
//	printf("%d\n", sizeof(p));//       是地址   
//	printf("%d\n", sizeof(p+1));//     是地址   字符b的地址
//	printf("%d\n", sizeof(*p));//      是  a  ，char 一个字节
//	printf("%d\n", sizeof(p[0]));//    a   一个字节  
//	printf("%d\n", sizeof(&p));//      指针变量在内存中的地址，二级地址
//	printf("%d\n", sizeof(&p + 1));//  &p+1，  p 为 char* ,char* *q=&p;跳过p这个地址，后面的地址，4/8个字节
//	printf("%d\n", sizeof(&p[0] + 1));// 第一个元素的地址+1 -->b的地址   4/8字节
//	return 0;
//}
// 
// 
//// 第七题
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));//   6     
//	printf("%d\n", strlen(p+1));//   b的地址往后数   5
//	//printf("%d\n", strlen(*p));//    err  97非法访问内存，出错（编译器检查不出）
//	//printf("%d\n", strlen(p[0]));// err   98非法访问内存， 出错（编译器检查不出）
//	printf("%d\n", strlen(&p));// p是指针变量  我们在p的地址里面找\0, 和我们的字符串没有关系了，向后数 字符 的话就完全是随机值了
//	printf("%d\n", strlen(&p+1));//  p是指针变量， &p+1 还是地址，是p地址的地址，随机值
//	printf("%d\n", strlen(&p[0]+1));// 第二个元素的地址    5
//	return 0;
//}
// 
// 
// 第八题
// 
// 
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//表示整个数组 12*4  =  48字节
//	printf("%d\n", sizeof(a[0][0]));//第一行第一个元素 4字节
//	printf("%d\n", sizeof(a[0]));//第一行  4*4 16个字节
//	//我们知道这个二维数组三行四列，
//	//我们访问每行的元素 是 a[0][i]  a[1][i]  a[2][i] a[3][i]  （0<=i<=3) 
//	//二维数组的理解： 
//	//可以把二维数组想象成一维数组， 二维数组的每一行是一个一维数组
//	//a[0]单独放在sizeof内部，计算的就是第一行的大小
//	//
//	printf("%d\n", sizeof(a[0] + 1));// //a[0]+1作为 第一行第二个元素的地址   4/8字节
//	//a[0]作为第一行的数组名，并没有单独放在sizeof内部，也没有被取地址
//	//所以a[0]就是数组首元素的地址，就是第一行第一个元素的地址，a[0]+1就是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0]+1)));//第一行第二个元素的内容 整型 4字节 *(a[0] + 1)
//	printf("%d\n", sizeof(a+1));//   4/8字节 a首元素地址 --a是二维数组，首元素的的地址就是第一行的地址
//	//所以a表示的是二维数组第一行的地址，a+1就是第二行的 地址 地址4/8字节
//	printf("%d\n", sizeof(*(a+1)));//   16  对第二行进行解引用，访问到的就是第二行
////同比于  sizeof(a[1])
//	printf("%d\n", sizeof(&a[0]+1));//第一行的地址 +1  ，就是第二行的地址  4/8 字节
//	printf("%d\n", sizeof(*(&a[0]+1)));//第二行的地址进行解引用，拿到了第二行  16个字节
//	printf("%d\n", sizeof(*a));//a为首元素地址，进行解引用，就是第一行， 16字节
//	//第二种  *a=*(a+0)  第一行的数组名单独凡在sizeof内部，计算的就是第一行的大小
//	printf("%d\n", sizeof(a[3]));// 16
//	//我们在分析这个的时候，发现a[3]其实是不在我们初始化的内容中的
//	//那么我们可能立马会觉得a[3]没法计算，但是我们要了解到 我们sizeof 其实不会访问到我们的内存
//	//它不会看他到底有多少元素的内容，而是关注它的数据类型
//	//举例：
//	// int b=0;
//	//sizeof(b)  =4
//	//sizeof(int)  =4
//	//所以我们这里sizeof的话，其实结果仍然为16 ，它认为是a二维数组的第四行
//	return 0;
//}
// 
// 
// 
// 我们一定要理解数组名
// 两个例外
// sizeof（数组名） 
// &数组名
// 表示整个数组
// 
// strlen 找\0 ，
// 
// 
// 
// 指针笔试题
// 
// 
// 
// 第一题
// 
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2 5,做对啦哈哈哈
//	return 0;
//}
// 
// 
// 
//第二题
// 
//struct test
//{
//	int num;
//	char* pcname;
//	short sdate;
//	char cha[2];
//	short sba[4];
//}*p;
////x86环境结构体是20字节
////x64环境还有所区别
//int main()
//{
//	//0x1  就是16进制的 16^0*1
//	p = (struct test*)0x100000;
//	//%p打印  打印字节
//	//p结构体指针 结构体指针+1  是1*结构体的大小 
//	//即加了个20  ，转换成16进制  14（16^1*1+16^0*4)
//
//	printf("%p\n", p + 0x1); //0x100014  
//	printf("%p\n", (unsigned long)p + 0x1);//强制转换成一个unsigned long 变成一个整型，加的就是1个字节
//	printf("%p\n", (unsigned int*)p + 0x1);//而p如果强制转换成指针  指针+1  就是4个字节
//	//我们是将数字以地址的16进制为格式进行打印出来
//	//这里不要混淆概念
//	//这里打印的还是数字，只是以地址的形式打印出来了而已
//	return 0;
//}
//考察的是指针类型，考察不同类型的指针在加减的时候 是 加减多少个字节 
// 
// 
// 
// 第三题
int main()
{
	int a[4] = { 1,2,3,4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);//2
	printf("%x %x", ptr1[-1], *ptr2);//4     2   
	return 0;
}
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
//