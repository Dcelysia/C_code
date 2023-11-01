#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
//打印开头引语
void startmenu();
//打印游戏页面
void menu(char arr[14][14]);
//初始化战场
void Initmenu(char arr[14][14], int ctank, int* px, int* py);
//游玩的关键函数
void play(char arr[14][14],int px,int py);
//将场上所有的敌方坦克再随机向上下左右移动
void commove(char arr[14][14]);
//发射炮弹的方向和运动和结果的判断
void fire(char arr[14][14],int who,char whe,int px,int py);
//复活死去的坦克
void fuhuoba(char arr[14][14]);
//判断有没有坦克可以杀掉玩家
void ifctankkill(char arr[14][14]);
//打印结束菜单
void endmenu();