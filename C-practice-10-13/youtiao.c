#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
//对油条进行初始化
void Inityoutiao(struct player* youtiao)
{
	youtiao->choice = 0;
	youtiao->score = 0;
	youtiao->n = 0;
	strcpy(youtiao->name, "youtiao");

}
//油条进行比赛
struct player* playyoutiao(struct player* Fuduji, struct player* xiaohong, struct player* youtiao, struct player* heibang, struct player* fuer, int Fuduji_num, int xiaohong_num, int youtiao_num, int heibang_num, int fuer_num)
{
	int i = 0;
	if (youtiao_num == 0)
	{
		return youtiao;
	}
	for (i = 0; i < Fuduji_num; i++)
	{
		paly(Fuduji, youtiao);
	}
	hireplayer(Fuduji, youtiao);
	for (i = 0; i < xiaohong_num; i++)
	{
		paly(youtiao, xiaohong);
	}
	hireplayer(youtiao, xiaohong);
	for (i = 0; i < youtiao_num - 1; i++)
	{
		paly(youtiao, youtiao);
	}
	hireplayer(youtiao, youtiao);
	for (i = 0; i < heibang_num; i++)
	{
		paly(youtiao, heibang);
	}
	hireplayer(youtiao, heibang);
	for (i = 0; i < fuer_num; i++)
	{
		paly(youtiao, fuer);
	}
	hireplayer(youtiao, fuer);
	return youtiao;
	InitFuduji(&Fuduji);
	Initxiaohong(&xiaohong);
	Inityoutiao(&youtiao);
	Initheibang(&heibang);
	Initfuer(&fuer);
}