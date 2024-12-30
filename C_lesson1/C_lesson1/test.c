//课上没听懂的部分---记录时间点
//耐得住寂寞---- 坚持学习并突出  --  空杯心态  --写博客
//坚持写博客  CSDN  后期自己搭建博客
//github投送
//印象笔记、有道云笔记  笔记可以检索
//xmind - 思维导图工具  整理课程学完后的框架
//欲带王冠 必承其重
//遇到问题 先尝试自觉解决
/* 
*		学习内容：
		计算机语言  算法和数据结构  操作系统  计算机网络  项目实战  数据库 + 一系列的精品课程
		不懂就问（当然是先尝试自己解决）

知识点：
	什么是C语言？
	1:11:46
	集成开发环境  编辑 编译 链接 运行 调试
	写出来的.c文本的文件 经过 编译 链接 生成.exe文件
	*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("hello world!\n");
	return 0;
}

/*
逐过程调试F10
void main()也可以  但是写法很古老
int main(void)//明确表示main函数中不接收参数

sizeof(long long)>=sizeof(long)>=sizeof(int)>=sizeof(int)>=sizeof(short)>=sizeof(char)
这些变量类型是用来创建变量的
不能以数字开头
区分大小写
不能使用关键字命名
驼峰命名法
	局部变量优先
scanf函数使用过程中，需要使用CRT_SECURE_NO_WARNINGS  但是每个工程都需要重新写一遍这个代码
*/