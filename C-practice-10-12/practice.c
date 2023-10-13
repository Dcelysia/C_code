#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	long long ip = 0;
//	scanf("%lld", &ip);
//	if (ip == 0)
//	{
//		printf("zero\n");
//	}
//	if (ip > 0)
//	{
//		printf("positive\n");
//	}
//	if (ip < 0)
//	{
//		printf("negative\n");
//	}
//	return 0;
//}


//int main(void)
//{
//	double ip = 0.0;
//	scanf("%lf", &ip);
//	if (ip < 0)
//	{
//		ip = -ip;
//	}
//	printf("%.2lf", ip);
//
//	return 0;
//}
//
//int main(void)
//{
//	int ip = 0;
//	scanf("%d", &ip);
//	if (ip % 2 == 0)
//	{
//		printf("even\n");
//	}
//	else
//	{
//		printf("odd\n");
//	}
//
//	return 0;
//}

//
//int main(void)
//{
//	char ip = 0;
//	ip = getchar();
//	if (ip % 2 == 0)
//	{
//		printf("NO\n");
//	}
//	else
//	{
//		printf("YES\n");
//	}
//
//	return 0;
//}


int main(void)
{
    long long a = 0, b = 0;
    int temp=scanf("%lld %lld", &a, &b);
    if (a > b)
    {
        printf(">");
    }
    else if (a == b)
    {
        printf("=");
    }
    else
    {
        printf("<");
    }
    return 0;
}