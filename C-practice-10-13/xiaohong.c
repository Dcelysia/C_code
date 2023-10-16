#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//对小红进行初始化
void Initxiaohong(struct player* xiaohong)
{
	xiaohong->choice = 1;
	xiaohong->score = 0;
	xiaohong->n = 0;
	strcpy(xiaohong->name, "xiaohong");
}

//小红进行比赛
struct player* playxiaohong(struct player* Fuduji, struct player* xiaohong, struct player* youtiao, struct player* heibang, struct player* fuer, int Fuduji_num, int xiaohong_num, int youtiao_num, int heibang_num, int fuer_num)
{
	int i = 0;
	if (xiaohong_num == 0)
	{
		return xiaohong;
	}
	for (i = 0; i < Fuduji_num; i++)
	{
		paly(Fuduji, xiaohong);
	}
	hireplayer(Fuduji, xiaohong);
	for (i = 0; i < xiaohong_num - 1; i++)
	{
		paly(xiaohong, xiaohong);
	}
	hireplayer(xiaohong, xiaohong);
	for (i = 0; i < youtiao_num; i++)
	{
		paly(xiaohong, youtiao);
	}
	hireplayer(xiaohong, youtiao);
	for (i = 0; i < heibang_num; i++)
	{
		paly(xiaohong, heibang);
	}
	hireplayer(xiaohong, heibang);
	for (i = 0; i < fuer_num; i++)
	{
		paly(xiaohong, fuer);
	}
	hireplayer(xiaohong, fuer);
	return xiaohong;
	InitFuduji(&Fuduji);
	Initxiaohong(&xiaohong);
	Inityoutiao(&youtiao);
	Initheibang(&heibang);
	Initfuer(&fuer);
}