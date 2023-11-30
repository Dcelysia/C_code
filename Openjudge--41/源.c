#define _CRT_SECURE_NO_WARNINGS


//int main(void) {
//	int a1[100][100] = { 0 };
//	int a2[100][100] = { 0 };
//	int a3[100][100] = { 0 };
//	int i = 0, j = 0;
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++) {
//			scanf("%d", &a1[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++) {
//			scanf("%d", &a2[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++) {
//			a3[i][j] = a1[i][j] + a2[i][j];
//		}
//	}
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++) {
//			printf("%d ", a3[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}
//
//int main(void) {
//
//	int n = 0, m = 0, k = 0;
//	scanf("%d %d %d", &n, &m, &k);
//	int A[100][100] = { 0 };
//	int B[100][100] = { 0 };
//	int C[100][100] = { 0 };
//	int i = 0, j = 0,h=0;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++) {
//			scanf("%d", &A[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < k; j++) {
//			scanf("%d", &B[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < k; j++) {
//			for (h = 0; h < m; h++) {
//				C[i][j] += A[i][h] * B[h][j];
//			}
//		}
//	}
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < k; j++) {
//			printf("%d ", C[i][j]);
//			
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}
//#include <stdio.h>
//int main(void) {
//
//	int arr[100][100] = { 0 };
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (j = 0; j < m; j++) {
//		for (i = n-1; i >=0; i--) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>
int round(double a) {
	return (int)(a + 0.5);
}
int main(void) {
	int n = 0, m = 0;
	scanf("%d %d", &n,&m);
	int arr[105][105] = { 0 };
	int i = 0;
	int j = 0;
	int arr1[105][105] = { 0 };
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {

			if ((i == 0) || (i == n - 1) || (j == 0) || (j == m - 1)) {
				arr1[i][j] = arr[i][j];
			}
			else {

				arr1[i][j] = round((arr[i][j] + arr[i - 1][j] + arr[i + 1][j] + arr[i][j + 1] + arr[i][j - 1]) / 5.0);
				
			}
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}

	return 0;
}