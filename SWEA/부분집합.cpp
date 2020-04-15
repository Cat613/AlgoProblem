//#include <stdio.h>
//#include <iostream>
//
//using namespace std;
//
//void main() {
//	int i, j;
//	int arr[] = { 3, 6, 7, 1, 5, 4 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int sum;
//
//	/*for (i = 0; i < (1 << (n)); i++) {
//		sum = 0;
//		for (j = 0; j < n; j++) {
//			if (i&(1 << j)) {
//				sum += arr[j];
//			}
//		}
//		if (sum == 10) {
//			for (j = 0; j < n; j++) {
//				if (i&(1 << j)) {
//					printf("%d, ",arr[j]);
//				}
//			}
//			printf("\n");
//		}
//	}*/
//
//	for (i = 0; i < (1 << (n)); i++) {
//		sum = 0;
//		for (j = 0; j < n; j++) {
//			if (i&(1 << j)) {
//				printf("%d, ", arr[j]);
//			}
//		}
//		cout << endl;
//	}
//}