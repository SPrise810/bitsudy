#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("****************************\n");
	printf("*******1.play��ʼ��Ϸ*******\n");
	printf("*******0.exit������Ϸ*******\n");
	printf("****************************\n");

}
void game()
{
	//ɨ����Ϸ��ʵ��
	char mine[ROWS][COLS] = { 0 };//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ
	//��ʼ������
	init_board(mine,ROWS, COLS,'0');//���ǽ�����������0 �� 1 �����б�ʾ
	init_board(show, ROWS, COLS,'*');//  ��չʾ����ҵ�������*��͹������
	set_mine(mine, ROW, COL);	//���õ���
	//show_board(mine, ROW, COL);//��ӡ����
	show_board(show, ROW, COL);//��ӡ����
	find_mine(mine,show,ROW, COL);//�Ų���


}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do 
	{
		menu();
		printf("�����룺>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}