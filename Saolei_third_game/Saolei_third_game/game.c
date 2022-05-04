#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void init_board(char arr[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}
void show_board(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------ɨ����Ϸ-------\n");
	printf(" ");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for(i=1;i<=row;i++)
	{
		printf("%d| ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}
void set_mine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand()%row+1;
		y = rand()%col+1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';//���õ���
			count--;
		}
	}
}
int get_mine_count(char mine[ROWS][COLS], int x, int y)//�����������׵ĸ���
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}
void find_mine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("\n��������Ҫ�Ų������\n");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <=col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź�����ȵ�����\n");
				show_board(mine, ROW, COL);
				break;
			}
			else//�ҵ�������������
			{
				int count = get_mine_count(mine, x, y);
				//�����׵����
				//Ѱ����Χ�м�������
				show[x][y] = count + '0';
				show_board(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�������������:\n");
		}
	}
	if (win == row * col - EASY_COUNT)//�����һ��֮�����������ɨ�׵���Ϸʵ��
	{
		printf("��ϲ�����׳ɹ�\n");
		show_board(mine,ROW,COL);
	}// ���������ǲ��ԣ���Ҳ��ҪһЩ����
}
