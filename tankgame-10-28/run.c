#define _CRT_SECURE_NO_WARNINGS
#include "name.h"
int main(void)
{
	srand((unsigned)time(NULL));
	startmenu();
	printf("������з�̹�˵�����:>");
	int ctank = 0;
	scanf("%d", &ctank);
	if (ctank > 143)
	{
		printf("�����̹���������󣬵�ͼ�ݲ���\n");
		return 0;
	}
	char arr[14][14] = { 0 };
	//��ҵ�λ��
	int px = 0;
	int py = 0;
	Initmenu(arr,ctank,&px,&py);
	play(arr, px, py);
	return 0;
}