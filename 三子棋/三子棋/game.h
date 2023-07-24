#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include <stdio.h>
#include<time.h>
void Initboard(char board, int row, int col);
void Displayboard(char board, int row, int col);
char iswin(char board[ROW][COL], int row, int col);

