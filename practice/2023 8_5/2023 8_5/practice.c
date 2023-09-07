#include <stdio.h>

int main()
{
	int a = 1;
	char* pa = (char*)&a;
	if (*pa == 1)
	{
		printf("Ð¡¶Ë\n");
	}
	else
	{
		printf("´ó¶Ë");
	}
	return 0;
}