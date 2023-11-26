#define _CRT_SECURE_NO_WARNINGS

//
//int main(void)
//{
//	int arr[5][5] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 5; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < 5; i++) {
//		int tmp = arr[n-1][i];
//		arr[n-1][i] = arr[m-1][i];
//		arr[m-1][i] = tmp;
//	}
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 5; j++) {
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int main(void)
//{
//	int n = 0, i = 0, j = 0;
//	scanf("%d %d %d", &n, &i, &j);
//	int k = 0;
//	for (k = 1; k <= n; k++) {
//		printf("(%d,%d) ", i, k);
//	}
//	printf("\n");
//	for (k = 1; k <= n; k++) {
//		printf("(%d,%d) ", k, j);
//	}
//	printf("\n");
//	int sti = 0, stj = 0;
//	int endi = 0, endj = 0;
//	int tmpi = i, tmpj = j;
//
//	while (tmpi - 1 >= 1 &&tmpj - 1 >= 1) {
//		tmpi--;
//		tmpj--;
//	}
//
//	sti = tmpi;
//	stj = tmpj;
//	tmpi = i, tmpj = j;
//	while (tmpi +1<= n && tmpj + 1 <= n) {
//		tmpi++;
//		tmpj++;
//	}
//	endi = tmpi;
//	endj = tmpj;
//	for (k =0; k <= endi-sti; k++) {
//		printf("(%d,%d) ", sti + k, stj + k);
//	}
//	printf("\n");
//	tmpi = i, tmpj = j;
//	while (tmpi - 1 >= 1 && tmpj + 1 <= n) {
//		tmpi--;
//		tmpj++;
//	}
//	sti = tmpi;
//	stj = tmpj;
//	tmpi = i;
//	tmpj = j;
//	while (tmpi + 1 <= n&&tmpj-1>=1) {
//		tmpi++;
//		tmpj--;
//	}
//	endi = tmpi;
//	endj = tmpj;
//	for (k = 0; k <= endi - sti; k++) {
//		printf("(%d,%d) ", endi - k, endj+k);
//	}
//	printf("\n");
//	return 0;
//}
//
//int main(void) {
//	int arr[100][100] = { 0 };
//	int m = 0;
//	int n = 0;
//	int i = 0, j = 0;
//	scanf("%d %d", &m, &n);
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int sum = 0;
//	for (i = 0; i < n; i++) {
//		sum += arr[0][i];
//	}
//
//	for (i = 0; i < m; i++) {
//		sum += arr[i][0];
//	}
//
//	for (i = 0; i <m; i++) {
//		sum += arr[i][n-1];
//	}
//	for (i = 0; i < n; i++) {
//		sum += arr[m-1][i];
//	}
//	sum = sum - arr[0][0] - arr[0][m - 1] - arr[n - 1][0] - arr[n - 1][m - 1];
//
//	printf("%d", sum);
//
//	return 0;
//}
int main(void) {
    int arr[100][100] = { 0 };
    int m = 0, n = 0;
    int i = 0, j = 0;
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[0][i];
    }
    for (i = 0; i < m; i++) {
        sum += arr[i][0];
    }
    for (i = 0; i < m; i++) {
        sum += arr[i][n - 1];
    }
    for (i = 0; i < n; i++) {
        sum += arr[m - 1][i];
    }
    sum = sum - arr[0][0] - arr[0][m - 1] - arr[n - 1][0] - arr[n - 1][m - 1];
    printf("%d", sum);
}