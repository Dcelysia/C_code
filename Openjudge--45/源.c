#define _CRT_SECURE_NO_WARNINGS
//
//
//int main(void) {
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0, j = 0;
//	int a[105][105] = { 0 };
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//	int max = n + m - 2;
//	for (int k = 0; k <= max; k++) {
//		for (i = 0; i < n; i++) {
//			for (j = 0; j < m; j++) {
//				if (i + j == k) {
//					printf("%d\n", a[i][j]);
//				}
//			}
//		}
//	}
//
//
//	return 0;
//}
//#include <stdio.h>
//int main(void) {
//	int n = 0;
//	scanf("%d", &n);
//	int a[50][50] = { 0 };
//	int sum = 2 * n - 1;
//	int i = 0, j = 0;
//	int curi = 0;
//	int curj = n / 2;
//	a[curi][curj] = 1;
//	for (i = 2; i <= (sum * sum); i++) {
//		if (curi == 0&&curj!=n-1) {
//			curi = n - 1;
//			curj += 1;
//			a[curi][curj] = i;
//		}
//		else if (curj == n - 1 && curi != 0) {
//			curi += 1;
//			curj = 0;
//			a[curi][curj] = i;
//		}
//		else if ((a[curi -1][curj + 1] != 0)||(curi==n-1&&curj==n-1)) {
//			curi = curi +1;
//			a[curi][curj] = i;
//		}
//	}
//
//
//	return 0;
//}
//
//
//
//int main(void) {
//	int n = 0;
//	scanf("%d", &n);
//	int a[10001] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//	int find = 0;
//	scanf("%d", &find);
//	int tmp = 0;
	//for (i = 0; i < n; i++) {
	//	if (a[i] == find) {
	//		printf("%d", i+1);
	//		return 0;
	//	}
	//}
//
//	printf("-1");
//	return 0;
//}


//
//int main(void) {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	char max[30] = { 0 };
//	char a[30] = { 0 };
//	int max1 = 0; 
//	int tmp = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d %s", &tmp, &a);
//		if (tmp > max1) {
//			max1 = tmp;
//			int len = strlen(a);
//			for (int j = 0; j < len; j++) {
//				max[j] = a[j];
//			}
//
//		}
//	}
//	printf("%s", max);
//
//	return 0;
////}
//
//int main(void){
//	int n = 0;
//	scanf("%d", &n);
//	char a[101][30] = { 0 };
//	int b[101] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d %s", b[i],&a[i][0]);
//	}
//
//	int max = 0;
//	int index = 0;
//	for (i = 0; i < n; i++) {
//		if (b[i] > max) {
//			max = b[i];
//			index = i;
//		}
//	}
//	printf("%s", a[index]);
//
//}
//#include <stdio.h>
//int main(void) {
//	int n = 0;
//	scanf("%d", &n);
//	char tmp[50] = { 0 };
//	char arr[50] = { 0 };
//	int max = 0;
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &ret);
//		if (ret > max) {
//			max = ret;
//			scanf("%s", arr);
//		}
//		else {
//			scanf("%s", tmp);
//		}
//	}
//	printf("%s", arr);
//	return 0;
//}

#include <stdio.h>

int main(void) {
	int i = 0;
	int a = 0, b = 0;
	int index = 0;
	int sum = 0;
	int max = 0;
	int iss = 0;
	for (i = 1; i <= 7; i++) {
		scanf("%d %d", &a, &b);
		sum = a + b;
		if(sum>8&&sum>max){
			max = sum;
			index = i;
			iss = 1;
		}
	}
	if (iss == 0) {
		printf("0");
	}
	else {
		printf("%d", index);
	}


	return 0;
}