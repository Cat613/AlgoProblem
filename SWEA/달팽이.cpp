//#include <iostream>
//using namespace std;
//
//int arr[5][5] = {
//   {26, 17, 10, 29, 22},
//   {1, 16, 7, 8, 35},
//   {2, 25, 31, 19, 34},
//   {4, 5, 32, 20, 23},
//   {14, 13, 28, 11, 36}
//};
//
//int newArr[5][5], sortedArr[25];
//int minval, min_index_r, min_index_c;
//bool check[5][5];
//
//int dx[4] = { 0, 1, 0, -1 };
//int dy[4] = { 1, 0, -1, 0 };
//
//bool isIn(int r, int c) {
//	if (r >= 0 && r < 5 && c >= 0 && c < 5 && newArr[r][c] == 0) {
//		return true;
//	}
//	return false;
//}
//
//void input_val() {
//	int r, c, newr, newc, direct;
//	r = 0;
//	c = 0;
//	direct = 0;
//	for (int i = 0; i < 25; i++) {
//		newArr[r][c] = sortedArr[i];
//		newr = r + dx[direct];
//		newc = c + dy[direct];
//		if (!isIn(newr, newc)) {
//			direct++;
//			direct %= 4;
//			r += dx[direct];
//			c += dy[direct];
//		}
//		else {
//			r = newr;
//			c = newc;
//		}
//	}
//}
//
//int main() {
//
//	memset(check, false, sizeof(check));
//	minval = 100;
//
//	for (int k = 0; k < 25; k++) {
//		minval = 100;
//		for (int i = 0; i < 5; i++) {
//			for (int j = 0; j < 5; j++) {
//				if (!check[i][j] && minval > arr[i][j]) {
//					minval = arr[i][j];
//					min_index_r = i;
//					min_index_c = j;
//				}
//			}
//		}
//		sortedArr[k] = minval;
//		check[min_index_r][min_index_c] = true;
//	}
//	
//	input_val();
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			cout << newArr[i][j] << "\t";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}