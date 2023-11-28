#define _CRT_SECURE_NO_WARNINGS

//int issame(int arr[5][5], int x, int y) {
//	int max = -1;
//	int min = 123132132;
//	int i = 0, j = 0;
//	for (i = 0; i < 5; i++) {
//		max = max > arr[x][i] ? max : arr[x][i];
//	}
//	for (i = 0; i < 5; i++) {
//		min= min< arr[i][y] ? min : arr[i][y];
//	}
//	if (max == arr[x][y] && min == arr[x][y]) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//int main(void) {
//	int arr[5][5] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 5; j++) {
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	int ishav = 0;
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 5; j++) {
//			int tmp=issame(arr, i, j);
//			if (tmp == 1) {
//				printf("%d %d %d", i + 1, j + 1, arr[i][j]);
//				return 0;
//			}
//		}
//	}
//	printf("not found");
//
//	return 0;
//}
//
//int main(void) {
//	int a1[100][100] = { 0 };
//	int a2[100][100] = { 0 };
//	int m = 0, n = 0;
//	scanf("%d %d", &m, &n);;
//	int i = 0, j = 0;
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++) {
//			scanf("%d", &a1[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++) {
//			scanf("%d", &a2[i][j]);
//		}
//	}
//	int count = 0;
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++) {
//			if (a1[i][j] == a2[i][j]) {
//				count++;
//			}
//		}
//	}
//	double op = 0.0;
//	op = count / 1.0 / m / n*100;
//	printf("%.2lf", op);
//	return 0;
//}
#include <stdio.h>
int main(void) {

	int n = 0;
	int arr[100][100] = {0};
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	while (n != 1)
	{

		printf("%d\n", arr[1][1]);
		for (i = 0; i < n; i++) {
			int min = 546465645455;
			for (j = 0; j < n; j++) {
				min = min < arr[i][j] ? min : arr[i][j];
			}
			for (j = 0; j < n; j++) {
				arr[i][j] -= min;
			}
		}
		for (j = 0; j < n; j++) {
			int min = 546465645455;
			for (i = 0; i < n; i++) {
				min = min < arr[i][j] ? min : arr[i][j];
			}
			for (i = 0; i < n; i++) {
				arr[i][j] -= min;
			}
		}

		for (i = 1; i < n - 1; i++) {
			for (j = 0; j < n; j++) {
				arr[i][j] = arr[i + 1][j];
			}
		}

		for (j = 1; j < n - 1; j++) {
			for (i = 0; i < n; i++) {
				arr[i][j] = arr[i][j + 1];
			}
		}
		n--;
	}
	printf("%d", arr[1][1]);
	return 0;
}