#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
//福尔摩斯进行比赛
struct player* playfuer(struct player* Fuduji, struct player* xiaohong, struct player* youtiao, struct player* heibang, struct player* fuer, int Fuduji_num, int xiaohong_num, int youtiao_num, int heibang_num, int fuer_num)
{
	int i = 0;
	if (fuer_num == 0)
	{
		return fuer;
	}
	for (i = 0; i < Fuduji_num; i++)
	{
		paly(Fuduji, fuer);
	}
	hireplayer(Fuduji, fuer);
	for (i = 0; i < xiaohong_num; i++)
	{
		paly(fuer, xiaohong);
	}
	hireplayer(fuer, xiaohong);
	for (i = 0; i < youtiao_num; i++)
	{
		paly(fuer, youtiao);
	}
	hireplayer(fuer, youtiao);
	for (i = 0; i < heibang_num; i++)
	{
		paly(fuer, heibang);
	}
	hireplayer(fuer, heibang);
	for (i = 0; i < fuer_num - 1; i++)
	{
		paly(fuer, fuer);
	}
	hireplayer(fuer, fuer);
	return fuer;
	InitFuduji(&Fuduji);
	Initxiaohong(&xiaohong);
	Inityoutiao(&youtiao);
	Initheibang(&heibang);
	Initfuer(&fuer);
}

//初始化福尔摩斯
void Initfuer(struct player* fuer)
{
	fuer->choice = 1;
	fuer->score = 0;
	fuer->n = 1;
	strcpy(fuer->name, "fuer");

}