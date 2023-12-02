#define _CRT_SECURE_NO_WARNINGS
//
//
//int main(void) {
//
//	char a[105][105] = { 0 };
//	int r = 0, c = 0, n = 0;
//	scanf("%d %d %d", &r, &c, &n);
//	char b[105][105] = { 0 };
//	int i = 0, j = 0;
//	for (i = 1; i <= r; i++) {
//		for (j = 1; j <= c; j++) {
//			scanf(" %c", &a[i][j]);
//		}
//	}
//	for (int k = 0; k < n; k++) {
//		for (i = 1; i <= r; i++) {
//			for (j = 1; j <= c; j++) {
//				b[i][j] = a[i][j];
//			}
//		}
//		for (i = 1; i <= r; i++) {
//			for (j = 1; j <= c; j++) {
//				if (b[i][j] == 'R') {
//					if (b[i - 1][j] == 'P' || b[i + 1][j] == 'P' || b[i][j + 1] == 'P' || b[i][j - 1] == 'P') {
//						a[i][j] = 'P';
//					}
//					else {
//						if (b[i - 1][j] == 'S') {
//							a[i - 1][j] = 'R';
//						}
//						if (b[i + 1][j] == 'S') {
//							a[i + 1][j] = 'R';
//						}
//						if (b[i][j + 1] == 'S') {
//							a[i][j + 1] = 'R';
//						}
//						if (b[i][j - 1] == 'S') {
//							a[i][j - 1] = 'R';
//						}
//					}
//				}
//				if (b[i][j] == 'S') {
//					if (b[i - 1][j] == 'R' || b[i + 1][j] == 'R' || b[i][j + 1] == 'R' || b[i][j - 1] == 'R') {
//						a[i][j] = 'R';
//					}
//					else {
//						if (b[i - 1][j] == 'P') {
//							a[i - 1][j] = 'S';
//						}
//						if (b[i + 1][j] == 'P') {
//							a[i + 1][j] = 'S';
//						}
//						if (b[i][j + 1] == 'P') {
//							a[i][j + 1] = 'S';
//						}
//						if (b[i][j - 1] == 'P') {
//							a[i][j - 1] = 'S';
//						}
//					}
//				}
//				if (b[i][j] == 'P') {
//					if (b[i - 1][j] == 'S' || b[i + 1][j] == 'S' || b[i][j + 1] == 'S' || b[i][j - 1] == 'S') {
//						a[i][j] = 'S';
//					}
//					else {
//						if (b[i - 1][j] == 'R') {
//							a[i - 1][j] = 'P';
//						}
//						if (b[i + 1][j] == 'R') {
//							a[i + 1][j] = 'P';
//						}
//						if (b[i][j + 1] == 'R') {
//							a[i][j + 1] = 'P';
//						}
//						if (b[i][j - 1] == 'R') {
//							a[i][j - 1] = 'P';
//						}
//					}
//				}
//			}
//		}
//	}
//	for (i = 1; i <= r; i++) {
//		for (j = 1; j <= c; j++) {
//			printf("%c", a[i][j]);
//		}
//		printf("\n");
//	}
//    
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void) {
//	char a[105][105] = { 0 };
//	int n = 0, m = 0;
//	int count = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0, j = 0;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= m;j++) {
//			scanf(" %c", &a[i][j]);
//		}
//	}
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= m; j++) {
//			if (a[i][j] == '#') {
//				if (a[i][j - 1] == '#')
//				{
//					a[i][j - 1] = '.';
//				}
//				else if (a[i][j + 1] == '#')
//				{
//					a[i][j + 1] = '.';
//				}
//				else if (a[i+1][j] == '#')
//				{
//					a[i + 1][j] = '.';
//				}
//				else if (a[i-1][j] == '.')
//				{
//					a[i-1][j] = '.';
//				}
//				a[i][j] = '.';
//				count++;
//			}
//		}
//	}
//
//	printf("%d ", count);
//	
//
//
//	return 0;
//}