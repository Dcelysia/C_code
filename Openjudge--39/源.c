#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[100][100] = { 0 };
//	int j = 0;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int count = 0;
//	int k = 0;
//	int l = 0;
//	int opx = 0, opy = 0;
//	int num = 0;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			if (arr[i][j] == 1) {
//				count++;
//			}
//		}
//		if (count % 2 != 0) {
//			for (k = 0; k < n; k++) {
//				int OK = 1;
//				int tmpcount = 0;
//				if (arr[i][k] == 0) {
//					arr[i][k] = 1;
//					for (l = 0; l < n; l++) {
//						if (arr[l][k] == 1) {
//							tmpcount++;
//						}
//					}
//					if (tmpcount % 2 == 0) {
//						opx = i, opy = l;
//						num++;
//					}
//					else {
//						arr[i][k] = 0;
//					}
//				}
//				else {
//					arr[i][k] = 0;
//					for (l = 0; l < n; l++) {
//						if (arr[l][k] == 1) {
//							tmpcount++;
//						}
//					}
//					if (tmpcount % 2 == 0) {
//						opx = i, opy = l;
//						num++;
//					}
//					else {
//						arr[i][k] = 1;
//					}
//				}
//			}
//
//		}
//	}
//	for (j = 0; j < n; j++) {
//		for (i= 0; i < n; i++) {
//			if (arr[i][j] == 1) {
//				count++;
//			}
//		}
//		if (count % 2 != 0) {
//			for (k = 0; k < n; k++) {
//				int OK = 1;
//				int tmpcount = 0;
//				if (arr[k][j] == 0) {
//					arr[k][j] = 1;
//					for (l = 0; l < n; l++) {
//						if (arr[k][l] == 1) {
//							tmpcount++;
//						}
//					}
//					if (tmpcount % 2 == 0) {
//						opx = k, opy = j;
//						num++;
//					}
//					else {
//						arr[k][j] = 0;
//					}
//				}
//				else {
//					arr[k][j] = 0;
//					for (l = 0; l < n; l++) {
//						if (arr[k][l] == 1) {
//							tmpcount++;
//						}
//					}
//					if (tmpcount % 2 == 0) {
//						opx = k, opy = j;
//						num++;
//					}
//					else {
//						arr[k][j] = 1;
//					}
//				}
//			}
//
//		}
//	}
//	if (num == 0) {
//		printf("OK");
//	}
//	else if (num == 1) {
//		printf("%d %d", opx, opy);
//	}
//	else {
//		printf("Corrupt");
//	}
//	return 0;
//}