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

//判断输赢
//玩家赢-返回*
//电脑赢-返回#
//平局-返回Q
//继续-返回C
char Iswin(char board[ROL][COL], int rol, int col);