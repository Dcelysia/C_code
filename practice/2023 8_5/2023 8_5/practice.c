#include <stdio.h>

int main()
{
	int a = 1;
	char* pa = (char*)&a;
	if (*pa == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���");
	}
	return 0;
}