#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int ifsushu(int x)
//{
//	int i = 0;
//	for (i = 2; i < x / 2; i++)
//	{
//		if (x % i == 0)
//		{
//			return -1;
//			break;
//		}
//	}
//	return 1;
//}
//int main(void)
//{
//	long long ip = 0;
//	scanf("%lld", &ip);
//	long long i = 0, j = 0;
//	long long maxi=0, maxj=0;
//	for (i = 0; i < ip; i++)
//	{
//		for (j = 0; j < ip; j++)
//		{
//			if ((i * j == ip) && (ifsushu(i) == 1) && (ifsushu(j) == 1))
//			{
//				maxi = maxi > i ? maxi:i;
//				maxj = maxj > j ? maxj:j;
//			}
//		}
//	}
//	
//	return 0;
//}

//
//int is_prime(int x)
//{
//    if (x <= 1)
//        return 0;
//    for (int i = 2; i * i <= x; i++)
//        if (x % i == 0)
//            return 0;
//    return 1;
//}

//int main()
//{
//    long long ip;
//    scanf("%lld", &ip);
//    long long max_product = 0, max_i = 0, max_j = 0;
//    for (long long i = 1; i * i <= ip; i++)
//    {
//        if (ip % i == 0)
//        {
//            long long j = ip / i;
//            if (is_prime(i) && is_prime(j))
//            {
//                max_i = max_i > i ? max_i : i;
//                max_j = max_j > j ? max_j : j;
//            }
//        }
//    }
//    max_i > max_j ? printf("%d", max_i) : printf("%d", max_j);
//    return 0;
//}
//#include <stdio.h>
//int is_prime(int x)
//{
//	if (x <= 1)
//	{
//		return 0;
//	}
//	else
//	{
//		for (int i = 2; i * i <= x; i++)
//		{
//			if (x % i == 0)
//			{
//				return 0;
//			}
//		}
//		return 1;
//	}
//
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 2;
//	int op = 0;
//	while (n)
//	{
//		if (is_prime(i))
//		{
//			op = i;
//			n--;
//		}
//		i++;
//	}
//	printf("%d", op);
//	return 0;
//}