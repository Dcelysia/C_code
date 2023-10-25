#define _CRT_SECURE_NO_WARNINGS


//int main(void)
//{
//	int m = 0, n = 0;
//	scanf("%d", &m);
//	scanf("%d", &n);
//	int i = 1;
//	int op2 = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int tmp = 0;
//		scanf("%d",& tmp);
//		if (m >= tmp)
//		{
//			m -= tmp;
//		}
//		else
//		{
//			op2++;
//		}
//
//	}
//	printf("%d", op2);
//	return 0;
//}
//int main(void)
//{
//	
//	return 0;
//}
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int if1 = 0;
//	int op = 0;
//	int max = 1;
//	for (int i = 0; i < n; i++)
//	{

//		int n1, n2;
//		scanf("%d %d", &n1, &n2);
//
//		if ((n1 >= 90 && n1 <= 140) && (n2 >= 60 && n2 <= 90))
//		{
//			if1++;
//		}
//		else
//		{
//			if1 = 0;
//		}
//		max = max > if1?max:if1;
//	}
//	op += max;
//
//	printf("%d", op);
//	return 0;
//}
//
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (a = 1; a < 7; a++)
//	{
//		for (b = 0; b < 7; b++)
//		{
//			for (c = 1; c < 7; c++)
//			{
//				if (49 * a + 7 * b +  c == 81 * c + 9 * b + a)
//				{
//					printf("%d\n", 49 * a + 7 * b + c);
//					printf("%d%d%d\n", a, b, c);
//					printf("%d%d%d\n", c, b, a);
//				}
//			}
//		}
//	}
//	return 0;
//}
//
//int main(void)
//{
//	int n = 0;
//	int i = 0;
//	int ip = 0;
//	int op2 = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &ip);
//		int op = ip;
//		int n1 = ip % 10;
//		ip /= 10;
//		while (ip)
//		{
//			int tmp = ip % 10;
//			n1 -= tmp;
//			ip /= 10;
//		}
//		if (n1 > 0)
//		{
//			op2++;
//		}
//	}
//	printf("%d\n", op2);
//	return 0;
//}
//
//int main(void)
//{
//	int ip1 = 0;
//	int i = 1;
//	double sum = 1;
//	scanf("%d", &ip1);
//	while (sum <= ip1)
//	{
//		i++;
//		sum += 1.0 / i;
//	}
//	printf("%d\n", i);
//	return 0;
//}


//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		int tmp = n % 10;
//		printf("%d ", tmp);
//		n /= 10;
//	}
//	return 0;
//}
