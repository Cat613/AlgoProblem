//#include <iostream>
//#include <memory.h>
//#include <string>
//
//using namespace std;
//
//int N;
//int before[20][20];
////int middel[20][20];
//int after[20][20];
//string d;
//string ds[4] = { "left", "right", "up", "down" };
//
//void move_left() {
//	int index;
//	//붙이기
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (before[i][j] == 0) {
//				index = j;
//				while (index < N && before[i][index] == 0) {
//					index++;
//				}
//				if (index >= N) break;
//				swap(before[i][j], before[i][index]);
//			}
//		}
//	}
//	
//	for (int i = 0; i < N; i++) {
//		index = 0;
//		for (int j = 0; j < N; j++) {
//			if (before[i][j] == 0) {
//				break;
//			}
//			if (j < N-1 && before[i][j] == before[i][j + 1]) {
//				before[i][j] *= 2;
//				before[i][j + 1] = 0;
//				after[i][index] = before[i][j];
//				index++;
//				j++;
//			}
//			else {
//				after[i][index] = before[i][j];
//				index++;
//			}
//		}
//	}
//}
//void move_right() {
//	int index;
//	//붙이기
//	for (int i = 0; i < N; i++) {
//		for (int j = N - 1; j >= 0; j--) {
//			if (before[i][j] == 0) {
//				index = j;
//				while (index >= 0 && before[i][index] == 0) {
//					index--;
//				}
//				if (index < 0) break;
//				swap(before[i][j], before[i][index]);
//			}
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		index = N-1;
//		for (int j = N-1; j >= 0; j--) {
//			if (before[i][j] == 0) {
//				break;
//			}
//			if (j > 0 && before[i][j] == before[i][j - 1]) {
//				before[i][j] *= 2;
//				before[i][j - 1] = 0;
//				after[i][index] = before[i][j];
//				index--;
//				j--;
//			}else {
//					after[i][index] = before[i][j];
//					index--;
//			}
//		}
//	}
//}
//void move_up() {
//	int index;
//	//붙이기
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (before[j][i] == 0) {
//				index = j;
//				while (index < N && before[index][i] == 0) {
//					index++;
//				}
//				if (index >= N) break;
//				swap(before[j][i], before[index][i]);
//			}
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		index = 0;
//		for (int j = 0; j < N; j++) {
//			if (before[j][i] == 0) {
//				break;
//			}
//			if (j < N - 1 && before[j][i] == before[j + 1][i]) {
//				before[j][i] *= 2;
//				before[j+1][i] = 0;
//				after[index][i] = before[j][i];
//				index++;
//				j++;
//			}else {
//					after[index][i] = before[j][i];
//					index++;
//			}
//		}
//	}
//}
//void move_down() {
//	int index;
//	//붙이기
//	for (int i = 0; i < N; i++) {
//		for (int j = N - 1; j >= 0; j--) {
//			if (before[j][i] == 0) {
//				index = j;
//				while (index >= 0 && before[index][i] == 0) {
//					index--;
//				}
//				if (index < 0) break;
//				swap(before[j][i], before[index][i]);
//			}
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		index = N - 1;
//		for (int j = N - 1; j >= 0; j--) {
//			if (before[j][i] == 0) {
//				break;
//			}
//			if (j > 0 && before[j][i] == before[j - 1][i]) {
//				before[j][i] *= 2;
//				before[j - 1][i] = 0;
//				after[index][i] = before[j][i];
//				index--;
//				j--;
//			}
//			else {
//				after[index][i] = before[j][i];
//				index--;
//			}
//		}
//	}
//}
//void sol() {
//	if (d == ds[0]) {
//		move_left();
//	}
//	else if (d == ds[1])
//	{
//		move_right();
//	}
//	else if (d == ds[2])
//	{
//		move_up();
//	}
//	else if (d == ds[3])
//	{
//		move_down();
//	}
//}
//int main() {
//	int T, max;
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		cin >> N >> d;
//		memset(before, 0, sizeof(before));
//		memset(after, 0, sizeof(after));
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				cin >> before[i][j];
//			}
//		}
//		
//		sol();
//
//		cout << "#" << t << endl;
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				cout << after[i][j] << " ";
//			}
//			cout << endl;
//		}
//
//	}
//
//	return 0;
//}