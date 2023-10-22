#pragma once
#include <stdio.h>
#define ROWS ROW+2
#define COLS COL+2
#define ROW 9
#define COL 9
#define EASY_COUNT 10
#include <time.h>
#include <stdlib.h>
void autoUncover(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
void Intboard(char board [ROWS][COLS],int rows,int cols,char set);
void Display(char board[ROWS][COLS],int row,int col);
void Setmine(char board[ROWS][COLS], int row, int col);
void Findmine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col);