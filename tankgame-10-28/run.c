#define _CRT_SECURE_NO_WARNINGS
#include "name.h"
int main(void)
{
	srand((unsigned)time(NULL));
	startmenu();
	printf("请输入敌方坦克的数量:>");
	int ctank = 0;
	scanf("%d", &ctank);
	if (ctank > 143)
	{
		printf("输入的坦克数量过大，地图容不下\n");
		return 0;
	}
	char arr[14][14] = { 0 };
	//玩家的位置
	int px = 0;
	int py = 0;
	Initmenu(arr,ctank,&px,&py);
	play(arr, px, py);
	return 0;
}