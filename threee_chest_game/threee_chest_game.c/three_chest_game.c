#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"//为了我们能够使用定义在game.h中的全局变量
//测试游戏逻辑test.c
//游戏的实现game.c
//函数的声明，符号的定义game.h
void menu()
{
	printf("*******************\n");
	printf("****  1.play  *****\n");
	printf("****  0.exit  *****\n");
	printf("*******************\n");
	printf("温馨提示：下棋的标准格式是 x y\n即数字之间有空格\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//二维数组存放下棋数据
	InitBoard(board, ROW, COL);
	//对其进行初始化
	DisplayBoard(board, ROW, COL);
	//打印棋盘
	while (1)
	{
		player_move(board, ROW, COL);
		//玩家下棋
		DisplayBoard(board, ROW, COL);
		//打印棋盘
		ret=is_win(board,ROW,COL);//判断输赢
		if(ret!='C')
		{
			break;
		}
		computer_move(board, ROW, COL);//随机下棋操作
		DisplayBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);//判断输赢
		//打印棋盘
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
		printf("恭喜恭喜恭喜恭喜恭喜\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
		printf("太可惜了，建议再来一把\n");
	}
	else if(ret=='Q')
	{
		printf("平局\n");
		printf("平局\n");
		printf("平局\n");
		printf("平局\n");
		printf("平局\n");

	}
	//DisplayBoard(board, ROW, COL);

}
//游戏结束的条件
//玩家赢-'*'
//电脑赢-'#'
//平局-'Q'
//继续-'C;
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{

		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("继续游戏\n");
			game();
			break;
		case 0:printf("结束游戏\n"); break;
		default:printf("重新输入\n"); break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}