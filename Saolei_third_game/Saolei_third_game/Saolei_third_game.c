#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("****************************\n");
	printf("*******1.play开始游戏*******\n");
	printf("*******0.exit结束游戏*******\n");
	printf("****************************\n");

}
void game()
{
	//扫雷游戏的实现
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息
	//初始化棋盘
	init_board(mine,ROWS, COLS,'0');//我们将内置棋盘用0 和 1 来进行表示
	init_board(show, ROWS, COLS,'*');//  将展示给玩家的棋盘用*，凸显神秘
	set_mine(mine, ROW, COL);	//布置地雷
	//show_board(mine, ROW, COL);//打印棋盘
	show_board(show, ROW, COL);//打印棋盘
	find_mine(mine,show,ROW, COL);//排查雷


}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do 
	{
		menu();
		printf("请输入：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择！\n");
			break;
		}
	} while (input);
	return 0;
}