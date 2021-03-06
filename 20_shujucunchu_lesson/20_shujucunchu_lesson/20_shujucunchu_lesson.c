#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//数据存储第二节
//大小端存储： 要记住
// 详细看19节
//大三的同学加入知识星球网站，进行学习，有内推码进行实习
// 练习:
//int main()
//{
//	//-128~127
//	char a = -128;
//	printf("%u\n", a);//打印unsigned Char的数据
//	return 0;
//}
//-128是一个整数
//10000000000000000000000010000000
//反码： 
//11111111111111111111111101111111
// 补码：
//11111111111111111111111110000000
// char类型放不下这些数据
// 要进行截断
// 10000000=a
// %u指的是打印无符号的整数
// 要进行整型提升
// 最高位是符号位，按照符号位进行提升
// 11111111111111111111111110000000  当成补码（因为是unsigned）-->=原码
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}
//00000000000000000000000010000000
//11111111111111111111111110000000
//结果和第一个程序是一样的 
// 
//int main()
//{
//	int i = 20;
//	unsigned int j = 10;
//	printf("%u无符号 %d有符号 \n", i + j);
//	return 0;
//}
// 10000000000000000000000000010100
//-20:
// 11111111111111111111111111101100 
// 
// 10:
// 00000000000000000000000000001010
// 
// 11111111111111111111111111110110直接加起来 求和
// 11111111111111111111111111110101  （-1后）
// 10000000000000000000000000001010    原码  ：-10
// 
//#include<windows.h>
//int main()
//{
//	unsigned int i;//无符号数，哪有大于等于0，全是正数
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}
// 死循环了
// 
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//-1、-2、-3 
//	}
//	printf("%d", strlen(a));
//	//strlen是求字符串长度的，找\0的位置，统计\0之前出现多少个字符
//	return 0;
//}
// char类型总共2byte
// 8bit
//00000000
//在char类型中，大小为-128-127
//总共为255个数
//我们将一个个整数存放在char类型变量中
// -1 -2 -3 -4 ....不断的进行存储
//然后在存储到-128后，-129我们进行转换会进行char变量类型的截断
//-129最终就存储为我们的127然后继续存储直到0
//所以我们最终运行的结果为255
//  
// 第七题
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <=255; i++) {
//		printf("hello world，%d\n",i);
//	} 
//	return 0;
//}
// unsigned char 无符号
// 00000000
// 00000001
// ...
// 01111111
// 11111111
// 我们发现无符号的变量类型非常容易死循环
// unsigned char的取值范围为0~255
// 我们循环的判断条件是0~255
// 那么即使i++,i的值超出了255，但是变量类型不给力
// 我们存放的数值仍然还是255以内的正整数
// 所以我们这个最后还是没有办法跳出这个循环
// 结果结尾死循环
// 
// 以后我们在使用循环的时候尽量使用有符号数，无符号数直接寄
// 
// 3.浮点型在内存中的存储
// 示例：
//int main()
//{
//	int n = 9;
//	float* pfloat = (float*)&n;//int*
//	printf("n的值为：%d\n", n);//9
//	printf("ploat的值为：%f\n", *pfloat);//9.000000
//	*pfloat = 9.0;
//	printf("n的值为%d\n", n);//9
//	printf("*pfloat的值为%f\n", *pfloat);//9.000000
//
//	return 0;
//}
// 
// 
// 整数和浮点数在内存中的存储是有所差异的
// 根据国际标准IEEE(电气和电子工程协会）754，任意一个二进制浮点数V可以表示成下面的形式
// 
// 5.5 是一个十进制的浮点数
// 二进制：
// 101.101//wrong写法
// 小数点前后分别表示2的次方
// ... 2^3 2^2 2^1 小数点  2^-1   2^-2   2^-3...
// (-1)^0*1.001*2^2   这就是5.5的二进制表示
// -1的0次方*二进制*二进制的^2次方（二进制的二次方就是100，科学计数法的E）
//  符号S 是0
// 指数E  是2
// M为二进制有效数字1.***（1<=M<2)
// 但是像是3.14这种数会进行四舍五入，不能够很好的精确保存
// 32bit划分：
// S 1bit  E11bit  M23bit 单精度浮点型
// S 1bit  E11bit  M52bit 双精度浮点型
// 
// 在计算机内部保存M的时候，默认这个数的第一位总是1，因此可以被舍去
// 只保存后面的xxxxxx部分，比如保存1.01的时候，只保存01，等到读取的时候在把第一位的1
// 加上去，这样做的目的是节省1位有效数字，以32位浮点数位例，留给M的只有23位
// 将第一位舍去就有了24位
//  
// 关于指数E
// 如果E为8为，值为0~255
// E为11，取值范围是0~2047
// 但是E也可以是一个负数，我们规定存入内存是，E的真实值必须再加上一个中间数
// 对于8为的E，这个中间数是127，对于11位的E，这个中间数是1023
// 例如
// 2^10的E是10，所以保存成32位浮点数时，必须保存成10+127=137，即10001001
// 为了让他是一个正数我们就进行了修正
// 
//int main()
//{
//	float f = 5.5;
//	//101.1
//	//(-1)^0*1.011*2^2
//	//S=0
//	//E=2
//	//M=1.011
//	//开始存储到内存
//	//0    10000001			 01100000000000000000000
//	//S    E 2+127                      M
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//0X 40B00000
//	return 0;
//}
// 
// 
//int main()
//{
//	//0000
//	//当我们从内存中取出时，也有三种情况：
//	//1.E有0 有1 
//	//减去127得到真实值，
//	//2.E全0
//	//这时浮点数的指数E为1-127，-126(一般保留1-127的形式）
//	//有效数字也不还原1，直接就是0.xxxxxx*2^-126(E)   无限接近于0
//	//3.E为全1
//	//表示正负无穷大的数字,E为255-127=128
//	//我们就浅讲一下
//	//就这样，
//	//就基本上还是原先的还原为原先的值
//	return 0;
//}
// 
//我们回到当初重新看一下最初的题 
// // 示例：
//int main()
//{
//	int n = 9;
//	float* pfloat = (float*)&n;//int*
//	//放的浮点数，将int的二进制格式转换为浮点数格式
//	//00000000000000000000000000001001
//	//0 00000000 00000000000000000001001
//	//（-1）^0*0.00000000000000000001001*2^-126  这就是转换后的值
//	printf("n的值为：%d\n", n);//9
//	printf("ploat的值为：%f\n", *pfloat);//9.000000   所以结果是0.000000
//	*pfloat = 9.0;//浮点数的视角存放9.0
//	//1001.0
//	//(-1)^0*1.001*2^3
//	//S=0
//	//M=1.001
//	//E=3+127
//	//0 10000010 00100000000000000000000
//	//01000001000100000000000000000000  补码=原码
//	//这样我们就得出了我们最初的结果，一个很大的数字
//	printf("n的值为%d\n", n);//9
//	printf("*pfloat的值为%f\n", *pfloat);//9.000000
//
//	return 0;
//}
// 解析完毕
// 内功修炼蛤蛤蛤
// 这样就是我们这节课的知识哈哈
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