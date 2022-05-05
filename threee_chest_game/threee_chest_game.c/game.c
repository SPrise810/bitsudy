#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//DisplayBoard(char board[ROW][COL ], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%c", board[i][j]);
//		}
//		printf("\n");
//	}
//}
//�������̴�ӡ�Ĵ����޷�չʾ��������Ҫ��Ч��,��������ĺ�����ʾ���ָ��ߵ�Ч��
//DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//��ӡ����
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[1][2]);
//		if (i < row - 1)
//			printf("---|---|---\n");
//	}
//}
//����������Ȼ���ڲ���֮����������Ǹ������еĴ�С����ӡ������Ч��������Ԥ��
DisplayBoard(char board[ROW][COL], int row, int col)
{
	int j = 0;
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ����
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j<col-1)
			printf("|");
		}
		printf("\n");
		//��ӡ�ָ���
		if (i < row - 1)
		{
			for(j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void player_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�������\n");
	while (1)
	{
		printf("���������꣺>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ�ã�����������");
			}
		}
		else
		{
			printf("����Ƿ�������������");
		}
	}
}
void computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0; int y = 0;
	printf("�������壺>\n");
	while (1)
	{
		x = rand() % row;//ȡ���Ϊ0~2
		y = rand() % col;//ȡ���Ϊ0~2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
static int if_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//û��
			}
		}
	}
	return 1;
}
char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//�ж��������Ƿ������Ӯ
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//ֱ�ӷ���������ַ���ʡȥ�˲���Ҫ���鷳
		}
	}
	//�ж��������Ƿ������Ӯ
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (if_full(board, row, col) == 1)//�ж�ƽ���������
	{
		return 'Q';
	}
	return 'C';
}


