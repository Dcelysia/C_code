#define _CRT_SECURE_NO_WARNINGS

//
//int main(void) {
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	char arr[103][103] = { 0 };
//	int i = 0, j = 0;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= m; j++) {
//			scanf(" %c", &arr[i][j]);
//		}	
//	}
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= m; j++) {
//			if (arr[i][j] == '?') {
//				int tmp = 0;
//				if (arr[i - 1][j - 1] == '*') {
//					tmp++;
//				}
//				if (arr[i - 1][j] == '*') {
//					tmp++;
//				}
//				if (arr[i - 1][j+1] == '*') {
//					tmp++;
//				}
//				if (arr[i][j + 1] == '*') {
//					tmp++;
//				}
//				if (arr[i][j -1] == '*') {
//					tmp++;
//				}
//				if (arr[i+1][j - 1] == '*') {
//					tmp++;
//				}
//				if (arr[i + 1][j] == '*') {
//					tmp++;
//				}
//				if (arr[i + 1][j+1] == '*') {
//					tmp++;
//				}
//				arr[i][j] = '0' + tmp;
//			}
//		}
//	}
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= m; j++) {
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//
//
//	return 0;
//
//}
//#include <stdio.h>
//
//int main(void) {
//	int a[9][9] = { 0 };
//	int b[9][9] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < 9; i++) {
//		for (j = 0; j < 9; j++) {
//			a[i][j] = 0;
//		}
//
//	}
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m,&n);
//	a[4][4] = m;
//
//	for (int k = 0; k < n; k++) {
//		for (i = 0; i < 9; i++) {
//			for (j = 0; j < 9; j++) {
//				b[i][j] = a[i][j];
//			}
//		}
//
//		for (i = 0; i < 9; i++) {
//			for (j = 0; j < 9; j++) {
//
//				if (b[i][j] != 0) {
//					int count = b[i][j];
//					for (int k = 0; k < count; k++) {
//						a[i][j] -= 1;
//						a[i][j] += 2;
//						//上面
//						a[i - 1][j-1] += 1;
//						a[i - 1][j] += 1;
//						a[i - 1][j + 1] += 1;
//						//中间
//						a[i][j + 1] += 1;
//						a[i][j - 1] += 1;
//						//下面
//						a[i + 1][j-1] += 1;
//						a[i + 1][j] += 1;
//						a[i + 1][j + 1] += 1;
//					}
//
//				}
//			}
//		}
//	}
//	for (i = 0; i < 9; i++) {
//		for (j = 0; j < 9; j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}