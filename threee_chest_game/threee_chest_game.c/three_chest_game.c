#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"//Ϊ�������ܹ�ʹ�ö�����game.h�е�ȫ�ֱ���
//������Ϸ�߼�test.c
//��Ϸ��ʵ��game.c
//���������������ŵĶ���game.h
void menu()
{
	printf("*******************\n");
	printf("****  1.play  *****\n");
	printf("****  0.exit  *****\n");
	printf("*******************\n");
	printf("��ܰ��ʾ������ı�׼��ʽ�� x y\n������֮���пո�\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ά��������������
	InitBoard(board, ROW, COL);
	//������г�ʼ��
	DisplayBoard(board, ROW, COL);
	//��ӡ����
	while (1)
	{
		player_move(board, ROW, COL);
		//�������
		DisplayBoard(board, ROW, COL);
		//��ӡ����
		ret=is_win(board,ROW,COL);//�ж���Ӯ
		if(ret!='C')
		{
			break;
		}
		computer_move(board, ROW, COL);//����������
		DisplayBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);//�ж���Ӯ
		//��ӡ����
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
		printf("��ϲ��ϲ��ϲ��ϲ��ϲ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
		printf("̫��ϧ�ˣ���������һ��\n");
	}
	else if(ret=='Q')
	{
		printf("ƽ��\n");
		printf("ƽ��\n");
		printf("ƽ��\n");
		printf("ƽ��\n");
		printf("ƽ��\n");

	}
	//DisplayBoard(board, ROW, COL);

}
//��Ϸ����������
//���Ӯ-'*'
//����Ӯ-'#'
//ƽ��-'Q'
//����-'C;
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{

		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ϸ\n");
			game();
			break;
		case 0:printf("������Ϸ\n"); break;
		default:printf("��������\n"); break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}