#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
int main(void)
{
	printf("��ӭ����������Ϸģ��\n");
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
	printf("ע�⣬�����벻Ҫ���븺��,������Ϸ���˳�\n");
	printf("�����븴����������:>");
	int Fuduji_num = 0;
	scanf("%d", &Fuduji_num);
	printf("������С�������:>");
	int xiaohong_num = 0;
	scanf("%d", &xiaohong_num);
	printf("����������������:>");
	int youtiao_num = 0;
	scanf("%d", &youtiao_num);
	printf("������ڰ������:>");
	int heibang_num = 0;
	scanf("%d", &heibang_num);
	printf("�����븣��Ħ˹������:>");
	int fuer_num = 0;
	scanf("%d", &fuer_num);
	//�ж����������Ƿ�����
	if (fuer_num < 0 || xiaohong_num < 0 || youtiao_num < 0 || heibang_num < 0 || Fuduji_num < 0)
	{
		printf("��������������Ϸ�˳�\n");
		exit(-1);
	}
	if (fuer_num==0 && xiaohong_num == 0 && youtiao_num==0 && heibang_num==0 &&Fuduji_num== 0)
	{
		printf("��Ϸ������\n");
		exit(-1);
	}
	menu(&Fuduji,&xiaohong,&youtiao,&heibang,&fuer,Fuduji_num,xiaohong_num,youtiao_num,heibang_num,fuer_num);
	//��ʼ����

	int ip = 0;
	printf("��������б����Ĵ�����ÿһ�α�������С��������̭������һ����������\n");
	int temp=scanf("%d", &ip);
	for (int j = 0; j < ip; j++)
	{
		printf("��%d�α���\n", j + 1);
		Competition(&Fuduji, &xiaohong, &youtiao, &heibang, &fuer, Fuduji_num, xiaohong_num, youtiao_num, heibang_num, fuer_num);
		/*�ж������С��ɾС����*/
		Curmenu(&Fuduji, &xiaohong, &youtiao, &heibang, &fuer,&Fuduji_num,&xiaohong_num,&youtiao_num,&heibang_num,&fuer_num);
		menu(&Fuduji, &xiaohong, &youtiao, &heibang, &fuer, Fuduji_num, xiaohong_num, youtiao_num, heibang_num, fuer_num);
		printf("--------------------------------------------------\n");
		Sleep(1000);
	}
	return 0;
}