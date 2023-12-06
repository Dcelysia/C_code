#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int tmp = 0;
//	int min = 200000;
//	int max = -200000;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &tmp);
//		if (tmp > max) {
//			max = tmp;
//		}
//		if (tmp < min) {
//			min = tmp;
//		}
//	}
//	printf("%d", max - min);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int n = 0;
//	scanf("%d", &n);
//	int a[50][50] = { 0 };
//	int tmp = 2 * n - 1;
//	int sum = (2 * n - 1) * (2 * n - 1);
//	int i = 0;
//	
//	int curj = n- 1;
//	int curi = 0;
//	int j = 0;
//	a[curi][curj] = 1;
//	for (i = 2; i <= sum; i++) {
//		if ((curi == 0) && (curj != tmp - 1)) {
//			curi = tmp - 1;
//			curj += 1;
//			a[curi][curj] = i;
//		}
//		else if ((curj == tmp - 1) && (curi != 0)) {
//			curj = 0;
//			curi -= 1;
//			a[curi][curj] = i;
//		}
//		else if ((curj == tmp - 1 && curi == 0)||(a[curi-1][curj+1])!=0) {
//			curi += 1;
//			a[curi][curj] = i;
//		}
//		else {
//			curi -= 1;
//			curj += 1;
//			a[curi][curj] = i;
//		}
//	}
//	for (i = 0; i <tmp; i++) {
//		for (j = 0; j < tmp; j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

#include <stdio.h>

int main(void) {
	int row = 0;
	int col = 0;
	scanf("%d %d", &row, &col);
	int i = 0;
	int j = 0;
	int above = col;
	int right = row;
	int buttom = col;
	int left = col - 1;
	int curi = 0;
	int curj = 0;
	int a[105][105] = { 0 };
	int count = 0;
	int sum = col * row;
	while (1) {
		int tmp = above;
		for (j = 0; tmp>=0; tmp--) {
			printf("%d\n", a[curi][j]);
			count++;
		}
		curj = above - 1;
		above--;
		if (count == sum) {
			break;
		}
		tmp = right;
		for (i = curi; tmp >= 0; tmp--) {
			printf("%d\n", a[i][curj]);
			count++;
		}
		curi = right - 1;
		right -= 2;
		if (count == sum) {
			break;
		}
		for (j = curj; j >= 0; j--) {
			printf("%d", a[curi][j]);
			count++;
		}
		
		if (count == sum) {
			break;
		}
	}
	return 0;
}