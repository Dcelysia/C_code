#define _CRT_SECURE_NO_WARNINGS
//
//int a[1001][1001] = { 0 };
//int main(void){
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0, j = 0;
//	int sx = 0;
//	int sy = 0;
//	int issame = 0;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			scanf("%d", &a[i][j]);
//			if (issame == 0 && a[i][j] == 0) {
//				sx = j;
//				sy = i;
//				issame = 1;
//			}
//		}
//	}
//	if (n == 3) {
//		printf("1");
//		return 0;
//	}
//
//	int l = 0;
//	int w =0;
//	for (j = sx; j < n; j++) {
//		if (a[sy][j] == 0) {
//			l++;
//		}
//		else {
//			break;
//		}
//	}
//
//	for (i = sy; i < n; i++) {
//		if (a[i][sx] == 0) {
//			w++;
//		}
//		else {
//			break;
//		}
//	}
//
//	printf("%d", (l - 2) * (w - 2));
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//
//
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0, j = 0;
//	int a[105][105];
//	int count = 0;
//	for (i = 0; i < 105; i++) {
//		for (j = 0; j < 105; j++) {
//			a[i][j] = 99;
//		}
//	}
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= n; j++) {
//			scanf("%d", &a[i][j]);
//			if (a[i][j] <= 50) {
//				count++;
//			}
//		}
//	}
//	int line = 0;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= n; j++) {
//			if (a[i][j] <= 50) {
//				if (a[i - 1][j] > 50 || a[i + 1][j] > 50 || a[i][j - 1] > 50 || a[i][j + 1] > 50) {
//					line++;
//				}
//			}
//		}
//	}
//	printf("%d %d", count,line);
//
//
//	return 0;
//}
#include <stdio.h>

int main(void) {
	int n = 0;
	scanf("%d", &n);
	char b[100][100] = { 0 };
	char a[205] = { 0 };
	scanf("%s", a);
	int len=strlen(a);
	int hang = (int)(len / n);
	if (len % n != 0) {
		hang++;
	}
	int i = 0, j = 0;
	int head = 0;
	for (i = 0; i < hang; i++) {
		if (i % 2 == 0) {
			for (j = 0; j < n; j++) {
				b[i][j] = a[head++];

			}
		 }
		else {
			for (j = n - 1; j >= 0; j--) {
				b[i][j] = a[head++];
			}
		}
	}
	for (j = 0; j < n; j++) {
		for (i = 0; i < len; i++) {
			printf("%c", b[i][j]);
		}
	}
	return 0;
}