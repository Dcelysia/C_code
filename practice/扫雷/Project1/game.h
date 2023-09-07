#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#define ROWS 11
#define COLS 11
#define ROW 9
#define COL 9
#define mine_count 10

//初始化棋盘的函数
void Initboard(char arr[ROWS][COLS], int rows, int cols);
//打印棋盘的函数
void Displayboard(char arr[ROWS][COLS], int row, int col);
//设置地雷的函数
void Setmine(char arr[ROWS][COLS], int row, int col);
//发现地雷的函数
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);

