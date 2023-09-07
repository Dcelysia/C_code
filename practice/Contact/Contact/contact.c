#include "contact.h"

void Initcon(Contact* pc)
{
	pc->data = (Peoinfo*)malloc(3 * sizeof(Peoinfo));
	pc->sz = 0;
	pc->capcity = 3;
	if (pc->data == NULL)
	{
		perror("Initcon");
		return;
	}
	LoadContact(pc);//¼�뱣���ͨѶ¼	
}
void SaveContact(Contact* pc)
{
	FILE* pr = fopen("contact.dat", "w");
	if (NULL == pr)
	{
		perror("SaveContact");
		return;
	}
	//¼���ļ�
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(Peoinfo), 1, pr);

	}
	//�ر��ļ�
	fclose(pr);
	pr = NULL;
}
void ADDContact(Contact* pc)//����һ���˵ĺ���
{
	CheckContact(pc);
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tel);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	printf("����ɹ�\n");
	pc->sz++;
}
void PrintContact(const Contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tel, pc->data[i].addr);
	}
}
int Findbyname(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void DelContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("�Ѿ�ɾ���� ");
   }
	printf("������Ҫ���ҵ�����:>");
	char findname[MAX_AGE];
	scanf("%s", findname);
	int ret=Findbyname(pc,findname);
	if (ret == -1)
	{
		printf("���޴��ˣ�������ȷ������������Ƿ���ȷ");
	}
	else
	{
		/*memset(&(pc->data[ret]), 0, sizeof(pc->data[ret]));*/
		int i = ret;
		for (i = ret; i < pc->sz-1; i++)
		{
			pc->data[ret] = pc->data[i + 1];
		}
		pc->sz--;
		printf("ɾ���ɹ�\n");
	}
}
void SearchContact(const Contact* pc)
{
	printf("������Ҫ���ҵ�����:>");
	char findname[MAX_AGE];
	scanf("%s", findname);
	int pos=Findbyname(pc, findname);
	if (pos == -1)
	{
		printf("���˲�����\n");
		

	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->data[pos].name,  pc->data[pos].age, pc->data[pos].sex, pc->data[pos].tel, pc->data[pos].addr);
	}
	

}
void ModifyContact(Contact* pc)
{
	printf("������Ҫ�޸ĵ�����:>");
	char findname[MAX_AGE];
	scanf("%s", findname);
	int pos = Findbyname(pc, findname);
	if (pos == -1)
	{
		printf("���˲�����\n");


	}
	else
	{
		printf("����������\n");
		printf("����������:>");
		scanf("%s", pc->data[pos].name);
		printf("����������:>");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("������绰:>");
		scanf("%s", pc->data[pos].tel);
		printf("�������ַ:>");
		scanf("%s", pc->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
	

}
void DestoryContact(Contact* pc)
{
	free(pc->data);
	pc -> data = NULL;
	pc->capcity = 0;
}
void LoadContact(Contact* pc)
{
	FILE* pr = fopen("contact.dat", "r");
	if (NULL == pr)
	{
		perror("LoadContact");
	}
	//¼������
	Peoinfo tem = { 0 };
	while (fread(&tem, sizeof(Peoinfo), 1, pr))
	{
		CheckContact(pc);
		pc->data[pc->sz]= tem;
		pc->sz++;
	}


	//�رտ���
	fclose(pr);
	pr = NULL;
}
void CheckContact(Contact* pc)
{
	if (pc->sz == pc->capcity)
	{
		Peoinfo* pr = (Peoinfo*)realloc(pc->data, (pc->capcity + IGN_MAX) * sizeof(Peoinfo));
		if (pr != NULL)
		{
			pc->data = pr;
			pc->capcity += IGN_MAX;
			printf("���ݳɹ�\n");
		}
		else
		{
			perror("ADDContact");
			return;
		}

	}
}