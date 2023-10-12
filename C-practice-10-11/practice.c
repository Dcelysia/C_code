#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int n1 = 0, n2 = 0, n = 0;
//	scanf("%d %d %d", &n1, &n2, &n);
//	int d = n2 - n1;
//	printf("%d", n1 + (n - 1) * d);
//	return 0;
//}

//int main(void)
//{
//	long long n1 = 0, n2 = 0;
//	scanf("%lld %lld", &n1, &n2);
//	printf("%lld", n1 * n2);
//	return 0;
//}
#include <math.h>
int main(void)
{
	int ip1 = 0;
	scanf("%d", &ip1);
	int op = pow(2, ip1);
	printf("%d",op);
}