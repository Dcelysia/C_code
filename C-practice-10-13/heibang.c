#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
//对黑帮进行初始化
void Initheibang(struct player* heibang)
{
	heibang->choice = 1;
	heibang->score = 0;
	heibang->n = 0;
	strcpy(heibang->name, "heibang");
}
//黑帮进行比赛
struct player* playheibang(struct player* Fuduji, struct player* xiaohong, struct player* youtiao, struct player* heibang, struct player* fuer, int Fuduji_num, int xiaohong_num, int youtiao_num, int heibang_num, int fuer_num)
{
	int i = 0;
	if (heibang_num == 0)
	{
		return heibang;
	}
	for (i = 0; i < Fuduji_num; i++)
	{
		paly(Fuduji, heibang);
	}
	hireplayer(Fuduji, heibang);
	for (i = 0; i < xiaohong_num; i++)
	{
		paly(heibang, xiaohong);
	}
	hireplayer(heibang, xiaohong);
	for (i = 0; i < youtiao_num; i++)
	{
		paly(heibang, youtiao);
	}
	hireplayer(heibang, youtiao);
	for (i = 0; i < heibang_num - 1; i++)
	{
		paly(heibang, heibang);
	}
	hireplayer(heibang, heibang);
	for (i = 0; i < fuer_num; i++)
	{
		paly(heibang, fuer);
	}
	hireplayer(heibang, fuer);
	return heibang;
	InitFuduji(&Fuduji);
	Initxiaohong(&xiaohong);
	Inityoutiao(&youtiao);
	Initheibang(&heibang);
	Initfuer(&fuer);
}
