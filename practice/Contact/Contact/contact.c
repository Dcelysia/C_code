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
	LoadContact(pc);//录入保存的通讯录	
}
void SaveContact(Contact* pc)
{
	FILE* pr = fopen("contact.dat", "w");
	if (NULL == pr)
	{
		perror("SaveContact");
		return;
	}
	//录入文件
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(Peoinfo), 1, pr);

	}
	//关闭文件
	fclose(pr);
	pr = NULL;
}
void ADDContact(Contact* pc)//输入一个人的函数
{
	CheckContact(pc);
	printf("请输入姓名:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tel);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);
	printf("输入成功\n");
	pc->sz++;
}
void PrintContact(const Contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
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
		printf("已经删完了 ");
   }
	printf("请输入要查找的名字:>");
	char findname[MAX_AGE];
	scanf("%s", findname);
	int ret=Findbyname(pc,findname);
	if (ret == -1)
	{
		printf("查无此人，请重新确认输入的姓名是否正确");
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
		printf("删除成功\n");
	}
}
void SearchContact(const Contact* pc)
{
	printf("请输入要查找的名字:>");
	char findname[MAX_AGE];
	scanf("%s", findname);
	int pos=Findbyname(pc, findname);
	if (pos == -1)
	{
		printf("此人不存在\n");
		

	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->data[pos].name,  pc->data[pos].age, pc->data[pos].sex, pc->data[pos].tel, pc->data[pos].addr);
	}
	

}
void ModifyContact(Contact* pc)
{
	printf("请输入要修改的名字:>");
	char findname[MAX_AGE];
	scanf("%s", findname);
	int pos = Findbyname(pc, findname);
	if (pos == -1)
	{
		printf("此人不存在\n");


	}
	else
	{
		printf("请重新输入\n");
		printf("请输入姓名:>");
		scanf("%s", pc->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pc->data[pos].tel);
		printf("请输入地址:>");
		scanf("%s", pc->data[pos].addr);
		printf("修改成功\n");
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
	//录入数据
	Peoinfo tem = { 0 };
	while (fread(&tem, sizeof(Peoinfo), 1, pr))
	{
		CheckContact(pc);
		pc->data[pc->sz]= tem;
		pc->sz++;
	}


	//关闭开启
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
			printf("增容成功\n");
		}
		else
		{
			perror("ADDContact");
			return;
		}

	}
}