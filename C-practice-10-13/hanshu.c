#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
int fuerp = 0;
void isscore(struct player* p1, struct player* p2)//�ж�ʤ���ĺ���
{
	if (p1->choice == 1 && p2->choice == 0)
	{
		p2->score += 3;
		p1->score -= 1;
	}
	if (p2->choice == 1 && p1->choice == 0)
	{
		p1->score += 3;
		p2->score -= 1;
	}
	if (p1->choice == 1 && p2->choice == 1)
	{
		p2->score += 2;
		p1->score += 2;
	}
}

//���߱���
void paly(struct player* p1, struct player* p2)
{
	//ʵ�ָ���Ħ˹����
	//�ж��Ƿ񷴻�
	if ((strcmp(p1->name, "fuer") == 0) && ((p1->n == 2) || (p1->n == 3) || (p1->n == 4) || (p1->n == 1)))
	{
		if (p2->choice == 0)
		{
			fuerp = 1;
		}
	}
	if ((strcmp(p2->name, "fuer") == 0) && ((p2->n == 2) || (p2->n == 3) || (p2->n == 4) || (p2->n == 1)))
	{
		if (p1->choice == 0)
		{
			fuerp = 1;
		}
	}
	if ((strcmp(p1->name, "fuer") == 0) && p1->n == 2)
	{
		p1->choice = 0;
	}
	if ((strcmp(p2->name, "fuer") == 0) && p2->n == 2)
	{
		p2->choice = 0;
	}
	if ((strcmp(p2->name, "fuer") == 0) && ((p2->n == 3) || (p2->n == 4)))
	{
		p2->choice = 1;
	}
	if ((strcmp(p1->name, "fuer") == 0) && ((p1->n == 3) || (p1->n == 4)))
	{
		p1->choice = 1;
	}
	if ((strcmp(p2->name, "fuer") == 0) && (p2->n > 4))
	{
		if (fuerp == 1)
		{
			p2->choice = p1->choice;
		}
		else if (fuerp == 0)
		{
			p2->choice = 0;
		}
	}
	if ((strcmp(p1->name, "fuer") == 0) && (p1->n > 4))
	{
		if (fuerp == 1)
		{
			p1->choice = p2->choice;
		}
		else if (fuerp == 0)
		{
			p1->choice = 0;
		}
	}
	isscore(p1, p2);
	if (strcmp(p1->name, "fuer") == 0)
	{
		p1->n++;
	}
	if (strcmp(p2->name, "fuer") == 0)
	{
		p2->n++;
	}
	//ʵ�ָ������ĺ���
	if (strcmp(p1->name, "Fuduji") == 0)
	{
		p1->choice = p2->choice;
	}
	if (strcmp(p2->name, "Fuduji") == 0)
	{
		p2->choice = p1->choice;
	}
	//ʵ�ֺڰ��ϴ�ĺ���
	if ((strcmp(p1->name, "heibang") == 0) && (p2->choice == 0))
	{
		p1->choice = 0;
	}
	if ((strcmp(p2->name, "heibang") == 0) && (p1->choice == 0))
	{
		p2->choice = 0;
	}


}
//��ӡҳ��
void menu(struct player* Fuduji, struct player* xiaohong, struct player* youtiao, struct player* heibang, struct player* fuer, int Fuduji_num, int xiaohong_num, int youtiao_num, int heibang_num, int fuer_num)
{
	//for (int i = 0; i < Fuduji_num; i++)
	//{
	//	printf("%s     ", Fuduji->name);
	//}
	//printf("\n");
	//for (int i = 0; i < xiaohong_num; i++)
	//{
	//	printf("%s   ", xiaohong->name);
	//}
	//printf("\n");
	//for (int i = 0; i < youtiao_num; i++)
	//{
	//	printf("%s    ", youtiao->name);
	//}
	//printf("\n");
	//for (int i = 0; i < heibang_num; i++)
	//{
	//	printf("%s    ", heibang->name);
	//}
	//printf("\n");
	//for (int i = 0; i < fuer_num; i++)
	//{
	//	printf("%s       ", fuer->name);
	//}
	//printf("\n");
	printf("------------------------------------------------------------\n");
	printf("-----������:%d --------------------С��:%d------------------\n",Fuduji_num,xiaohong_num);
	printf("-----����:%d ----------------------�ڰ�:%d------------------\n",youtiao_num,heibang_num);
	printf("-----����Ħ˹:%d -------------------------------------------\n",fuer_num);
	printf("------------------------------------------------------------\n");


}
//�ж������С��ɾС����
void Curmenu(struct player* Fuduji, struct player* xiaohong, struct player* youtiao, struct player* heibang, struct player* fuer, int* Fuduji_num, int* xiaohong_num, int* youtiao_num, int* heibang_num, int* fuer_num)
{
	struct player* max = (struct player*)malloc(sizeof(struct player));

	struct player* min = (struct player*)malloc(sizeof(struct player));
	max->score = -1000;
	min->score = 2147483647;
	//�ж����
	if (Fuduji->score > max->score)
	{
		max->score= Fuduji->score;
	}
	if (xiaohong->score > max->score)
	{
		max->score = xiaohong->score;
	}
	if (youtiao->score > max->score)
	{
		max->score = youtiao->score;
	}
	if (heibang->score > max->score)
	{
		max->score = heibang->score;
	}
	if (fuer->score > max->score)
	{
		max->score = fuer->score;
	}
	//�ж���С
	if (Fuduji->score < min->score)
	{
		min->score = Fuduji->score;
	}
	if (xiaohong->score < min->score)
	{
		min->score = xiaohong->score;
	}
	if (youtiao->score < min->score)
	{
		min->score = youtiao->score;
	}
	if (heibang->score < min->score)
	{
		min->score = heibang->score;
	}
	if (fuer->score < min->score)
	{
		min->score = fuer->score;
	}
    //�������С
	//����С
	if (Fuduji->score == min->score)
	{
		*Fuduji_num-=1;
	}
	if (xiaohong->score == min->score)
	{ 
		*xiaohong_num -= 1;
	}
	if (heibang->score == min->score)
	{
		*heibang_num -= 1;
	}
	if (fuer->score == min->score)
	{
		*fuer_num -= 1;
	}
	if (youtiao->score == min->score)
	{
		*youtiao_num -= 1;
	}
	//�����
	if ((Fuduji->score == max->score) && (*Fuduji_num != 0))
	{
		*Fuduji_num+=1;
	}
	if ((xiaohong->score == max->score) && (*xiaohong_num != 0))
	{
		*xiaohong_num += 1;
	}
	if ((heibang->score == max->score) && (*heibang_num != 0))
	{
		*heibang_num+=1;
	}
	if (fuer->score == max->score)
	{
		*fuer_num += 1;
	}
	if ((youtiao->score == max->score) && (*youtiao_num != 0))
	{
		*youtiao_num += 1;
	}
}
////����
void Competition(struct player* Fuduji, struct player* xiaohong, struct player* youtiao, struct player* heibang, struct player* fuer, int Fuduji_num, int xiaohong_num, int youtiao_num, int heibang_num, int fuer_num)
{
	int i = 0;
	int j = 0;
	struct player* newFuduji=playFuduji(Fuduji, xiaohong, youtiao, heibang, fuer, Fuduji_num, xiaohong_num, youtiao_num, heibang_num, fuer_num);
	struct player* newxiaohong = playxiaohong(Fuduji, xiaohong, youtiao, heibang, fuer, Fuduji_num, xiaohong_num, youtiao_num, heibang_num, fuer_num);
	struct player* newyoutiao = playyoutiao(Fuduji, xiaohong, youtiao, heibang, fuer, Fuduji_num, xiaohong_num, youtiao_num, heibang_num, fuer_num);
	struct player* newheibang = playheibang(Fuduji, xiaohong, youtiao, heibang, fuer, Fuduji_num, xiaohong_num, youtiao_num, heibang_num, fuer_num);
	struct player* newfuer = playfuer(Fuduji, xiaohong, youtiao, heibang, fuer, Fuduji_num, xiaohong_num, youtiao_num, heibang_num, fuer_num);
	Fuduji = newFuduji;
	xiaohong = newxiaohong;
	youtiao = newyoutiao;
	heibang = newheibang;
	fuer = newfuer;
}
void hireplayer(struct player* p1, struct player* p2)
{
	if (strcmp(p1->name, "Fuduji") == 0)
	{
		p1->choice = 1;
	}
	if (strcmp(p2->name, "Fuduji") == 0)
	{
		p2->choice = 1;
	}
	if (strcmp(p2->name, "heibang") == 0)
	{
		p2->choice = 1;
	}
	if (strcmp(p1->name, "heibang") == 0)
	{
		p1->choice = 1;
	}
	if (strcmp(p1->name, "fuer") == 0)
	{
		p1->choice = 1;
		p1->n = 1;
		fuerp = 0;
	}
	if (strcmp(p2->name, "fuer") == 0)
	{
		p2->choice = 1;
		p2->n = 1;
		fuerp = 0;
	}

}

