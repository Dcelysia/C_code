#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
//初始化复读机
void InitFuduji(struct player* Fuduji)
{
	Fuduji->choice = 1;
	Fuduji->score = 0;
	Fuduji->n = 0;
	strcpy(Fuduji->name, "Fuduji");
}
//复读机进行比赛
struct player* playFuduji(struct player* Fuduji, struct player* xiaohong, struct player* youtiao, struct player* heibang, struct player* fuer, int Fuduji_num, int xiaohong_num, int youtiao_num, int heibang_num, int fuer_num)
{
	int i = 0;
	if (Fuduji_num == 0)
	{
		return Fuduji;
	}
	for (i = 0; i < Fuduji_num - 1; i++)
	{
		paly(Fuduji, Fuduji);
	}
	hireplayer(Fuduji, Fuduji);
	for (i = 0; i < xiaohong_num; i++)
	{
		paly(Fuduji, xiaohong);
	}
	hireplayer(Fuduji, xiaohong);
	for (i = 0; i < youtiao_num; i++)
	{
		paly(Fuduji, youtiao);
	}
	hireplayer(Fuduji, youtiao);
	for (i = 0; i < heibang_num; i++)
	{
		paly(Fuduji, heibang);
	}
	hireplayer(Fuduji, heibang);
	for (i = 0; i < fuer_num; i++)
	{
		paly(Fuduji, fuer);
	}
	hireplayer(Fuduji, fuer);
	return Fuduji;
	InitFuduji(&Fuduji);
	Initxiaohong(&xiaohong);
	Inityoutiao(&youtiao);
	Initheibang(&heibang);
	Initfuer(&fuer);
}