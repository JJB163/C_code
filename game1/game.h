#pragma once
#define ROL 5
#define COL 5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void InitBoard(char board[ROL][COL], int rol, int col);

void Displayboard(char board[ROL][COL],int rol,int col);

void Playermove(char board[ROL][COL],int rol,int col);

void Computermove(char board[ROL][COL], int rol, int col);

//�ж���Ӯ
//���Ӯ-����*
//����Ӯ-����#
//ƽ��-����Q
//����-����C
char Iswin(char board[ROL][COL], int rol, int col);