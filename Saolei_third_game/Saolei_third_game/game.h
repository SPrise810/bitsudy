//第一步  布置地雷
//第二步 扫雷  
//输入坐标  后进行判断
//是雷  就炸死
//不是雷  告诉周围坐标
//
// 结束条件：找出所有非雷的坐标
// 
// 棋盘 实现 需要二维数组  
//布置棋盘，我们首先把地雷摆上，总共摆十个  9*9的棋盘
//
// 我们使用0和1 来表示我们棋盘上的雷
// 然后我们扫的过程中也要显示 附近一共有多少颗 地雷，所以我们就需要进行表示
// 如此 就会产生冲突
// 我们 即要显示 其中是不是雷 又要显示（不是雷的情况)附近总共有多少个雷
//
// 于是我们使用两个数组  一个表示放置布置好地雷的信息     
//              另一个表示排查出的地雷的信息
//我们使用字符来象征地雷，所以使用的数组也就是char 类型的数组啦
//
// char mine[9][9];   布置的雷的信息
//1 雷 
//0 非雷
//
//char show[9][9]
//* -       未排查
//数组字符- 已排查 
//
//第三步为了摸清坐标附近雷的情况，我们就需要进行排查
// 但是在边界的坐标没法进行一周的排查，因为可能导致越界问题
// 因为它本身就是在边界上的位置
// 所以我们想到一种方法  把我们的二维数组扩大一圈 这样以来就能够解决越界问t
//char mine[11][11];    布置好的雷的信息
//char show[11][11];  排查出的雷的信息
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
void init_board(char arr[ROWS][COLS], int rows, int cols, char set);
void show_board(char arr[ROWS][COLS], int row, int col);
void set_mine(char arr[ROWS][COLS], int row, int col);
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//我们使用do while结构 进行游戏实现
//我们使用两个二维数组  布置雷的信息 排查雷的信息
//为了不让数组越界，我们又在数组中各增加两行两列
//创建好棋盘之后，我们就进行打印
//然后设置地雷
//然后实现排雷操作
//我们进行游戏的结束条件  即 当什么条件的时候，我们才能够赢
//
//我们想一想能不能通过自己的一些操作 把地雷进行标记
// 我们能不能和扫雷游戏一样，展开一片
// 我们对此进行分析：   发现规律可以和递归相结合 
// 1首先，该坐标不是雷
// 2第二该坐标周围也不是雷  
// 3该坐标未被排查过
// 满足上述三个条件，我们就能进行递归展开
// 拓展
// 拓展
// 拓展   自己学
//




