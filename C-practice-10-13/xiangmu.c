#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
int main(void)
{
	printf("欢迎来到信任游戏模拟\n");
	struct player Fuduji;
	struct player xiaohong;
	struct player youtiao;
	struct player heibang;
	struct player fuer;
	InitFuduji(&Fuduji);
	Initxiaohong(&xiaohong);
	Inityoutiao(&youtiao);
	Initheibang(&heibang);
	Initfuer(&fuer);
	printf("注意，人数请不要输入负数,否则游戏会退出\n");
	printf("请输入复读机的数量:>");
	int Fuduji_num = 0;
	scanf("%d", &Fuduji_num);
	printf("请输入小红的数量:>");
	int xiaohong_num = 0;
	scanf("%d", &xiaohong_num);
	printf("请输入油条的数量:>");
	int youtiao_num = 0;
	scanf("%d", &youtiao_num);
	printf("请输入黑帮的数量:>");
	int heibang_num = 0;
	scanf("%d", &heibang_num);
	printf("请输入福尔摩斯的数量:>");
	int fuer_num = 0;
	scanf("%d", &fuer_num);
	//判断人数输入是否有误
	if (fuer_num < 0 || xiaohong_num < 0 || youtiao_num < 0 || heibang_num < 0 || Fuduji_num < 0)
	{
		printf("输入人数错误，游戏退出\n");
		exit(-1);
	}
	if (fuer_num==0 && xiaohong_num == 0 && youtiao_num==0 && heibang_num==0 &&Fuduji_num== 0)
	{
		printf("游戏结束！\n");
		exit(-1);
	}
	menu(&Fuduji,&xiaohong,&youtiao,&heibang,&fuer,Fuduji_num,xiaohong_num,youtiao_num,heibang_num,fuer_num);
	//开始比赛

	int ip = 0;
	printf("请输入进行比赛的次数，每一次比赛将最小分数者淘汰，增加一个最大分数者\n");
	int temp=scanf("%d", &ip);
	for (int j = 0; j < ip; j++)
	{
		printf("第%d次比赛\n", j + 1);
		Competition(&Fuduji, &xiaohong, &youtiao, &heibang, &fuer, Fuduji_num, xiaohong_num, youtiao_num, heibang_num, fuer_num);
		/*判断最大最小并删小补大*/
		Curmenu(&Fuduji, &xiaohong, &youtiao, &heibang, &fuer,&Fuduji_num,&xiaohong_num,&youtiao_num,&heibang_num,&fuer_num);
		menu(&Fuduji, &xiaohong, &youtiao, &heibang, &fuer, Fuduji_num, xiaohong_num, youtiao_num, heibang_num, fuer_num);
		printf("--------------------------------------------------\n");
		Sleep(1000);
	}
	return 0;
}