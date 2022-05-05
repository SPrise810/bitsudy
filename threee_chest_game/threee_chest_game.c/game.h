#pragma once
//方便我们以后对棋盘大小的更改，我们使用一种更加独特的方式进行声明
#define ROW 3
#define COL 3
//初始化棋盘
#include<stdio.h>//为了使用printf函数
//既然如此，我们的game.c以及three_chest_game中都含有game.h的头文件
//game头文件中又含有stdio.h的头文件
//所以game.c和three....的代码中可以删除掉stdio.h的头文件了
//
#include<stdlib.h>
#include<time.h>
void InitBoard(char board[ROW][COL], int row, int col);//函数声名
//下面是打印棋盘的函数声明
DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋的函数声明
void player_move(char board[ROW][COL],int row,int col);
//电脑下棋的函数声明
void computer_move(char board[ROW][COL],int row,int col);
char is_win(char board[ROW][COL],int row,int col);

