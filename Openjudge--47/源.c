#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int n = 0;
//	long long tmp = 0;
//	scanf("%d", &n);
//	long long sum = 0;
//	int count = 0;
//	long long max = -2000000;
//	for (int i = 0; i < n; i++) {
//		scanf("%lld", &tmp);
//		if (tmp == max) {
//			count++;
//		}
//		max = max > tmp ? max : tmp;
//		sum += tmp;
//	}
//	printf("%lld", sum - (max*(count+1)));
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int n = 0;
//	scanf("%d", &n);
//	double sum = 0;
//	double max = 0;
//	double min = 121312;
//	double a[350] = { 0 };
//	double wucha = 0;
//	int i = 0;
//	int indexmax = 0;
//	int indexmin = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%lf", &a[i]);
//		if (a[i] > max) {
//			max = a[i];
//			indexmax = i;
//		}
//		if (a[i] < min) {
//			min = a[i];
//			indexmin = i;
//		}
//		sum += a[i];
//	}
//	double avg = (sum - max - min) / (n-2);
//	a[indexmin] = avg;
//	a[indexmax] = avg;
//	for (i = 0; i < n; i++) {
//		double tmp = 0;
//		tmp = avg - a[i];
//		if (tmp < 0) {
//			tmp *= -1;
//		}
//		wucha = wucha > tmp ? wucha : tmp;
//	}
//	printf("%.2lf %.2lf", avg, wucha);
//
//
//
//	return 0;
//}

//
//int a[20000] = { 0 };
//int main(void) {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int tmp = 0;
//	int max = -1;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &tmp);
//		a[tmp]++;
//		max = max > tmp ? max : tmp;
//	}
//	for (i = 0; i <= max; i++) {
//		printf("%d\n", a[i]);
//	}
//
//
//
//
//
//	return 0;
//}

//
//int main(void) {
//
//	unsigned int a[31][101] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++) {
//		
//	}
//
//
//
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void) {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	char String[2000] = { 0 };
//	scanf("%s", String);
//	int len = strlen(String);
//	int a[123] = { 0 };
//
//	for (i = 0; i < len; i++) {
//		a[String[i]]++;
//	}
//	for (i = 97; i <= 122; i++) {
//		if (a[i] == n) {
//			printf("%c", a[i]);
//			return 0;
//		}
//	}
//	printf("No");
//
//
//	return 0;
//}
//#include <stdio.h>
//int isrunnian(int year) {
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400) == 0) {
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
//int main(void) {
//	int i = 0;
//	int iyear = 0;
//	int imonth = 0;
//	int iday = 0;
//	scanf("%d-%d-%d", &iyear, &imonth, &iday);
//	if (iyear > 2005) {
//		printf("-1");
//		return 0;
//
//	}
//
//	int month[13] = { 0,31,28,31,30,31,31,30,31,30,31 };
//	int day = 0;
//	for (i = 0; i <= 18; i++) {
//		if (isrunnian(iyear + i) == 1) {
//			day += 366;
//		}
//		else {
//			day += 365;
//		}
//	}
//	if (isrunnian(iyear + 18) == 1) {
//		month[2] = 29;
//	}
//	for (i = 0; i < month; i++) {
//		day += month[i];
//	}
//	day += iday - 1;
//	printf("%d", day);
//
//	return 0;
//}
#include <stdio.h>
struct Student {
	char name[100];
	int age;

};
int main(void) {

	int ch_length = 0;
	int num_lenth = 0;
	





	return 0;
}