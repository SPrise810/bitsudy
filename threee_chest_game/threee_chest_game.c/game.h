#pragma once
//���������Ժ�����̴�С�ĸ��ģ�����ʹ��һ�ָ��Ӷ��صķ�ʽ��������
#define ROW 3
#define COL 3
//��ʼ������
#include<stdio.h>//Ϊ��ʹ��printf����
//��Ȼ��ˣ����ǵ�game.c�Լ�three_chest_game�ж�����game.h��ͷ�ļ�
//gameͷ�ļ����ֺ���stdio.h��ͷ�ļ�
//����game.c��three....�Ĵ����п���ɾ����stdio.h��ͷ�ļ���
//
#include<stdlib.h>
#include<time.h>
void InitBoard(char board[ROW][COL], int row, int col);//��������
//�����Ǵ�ӡ���̵ĺ�������
DisplayBoard(char board[ROW][COL], int row, int col);
//�������ĺ�������
void player_move(char board[ROW][COL],int row,int col);
//��������ĺ�������
void computer_move(char board[ROW][COL],int row,int col);
char is_win(char board[ROW][COL],int row,int col);

