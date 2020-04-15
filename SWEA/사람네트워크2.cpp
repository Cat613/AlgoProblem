//#include <iostream>
//#include <memory.h>
//
//using namespace std;
//
//#define min(a, b)((a < b)?a:b)
//#define max(a, b)((a > b)?a:b)
//
//const int MAX = 987654321;
//int T, N, answer;
//int map[1000][1000];
//
//void floyd_warshall() {
//	for (int k = 0; k < N; k++) {
//		for (int i = 0; i < N; i++) {
//			if (k == i) continue;
//			for (int j = 0; j < N; j++) {
//				if (j == i || j == k) continue;
//				map[i][j] = min((map[i][k] + map[k][j]), map[i][j]);
//			}
//		}
//	}
//}
//
//void sol() {
//	floyd_warshall();
//	for (int i = 0; i < N; i++) {
//		int sum = 0;
//		for (int j = 0; j < N; j++) {
//			if (i == j) continue;
//			sum += map[i][j];
//		}
//		answer = min(answer, sum);
//	}
//}
//
//void init() {
//	answer = MAX;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == 0) {
//				map[i][j] = MAX;
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> T;
//	
//	for (int t = 1; t <= T; t++){
//		init();
//		sol();
//		cout << "#" << t << " " << answer << "\n";
//	}
//	return 0;
//}