//#include <iostream>
//#include <memory.h>
//
//using namespace std;
//
//int T, N, X, M;
//int maxval;
//int record[10][3]; //[a][b] a번째 기록 b가 0이면 l 1이면 r 2이면 s 
//int cage[11]; //1번부터 최대 10번 우리 까지
//int answer[11]; //정답 배열
//
//bool check() {
//	int sum;
//	for (int i = 0; i < M; i++) {
//		sum = 0;
//		for (int j = record[i][0]; j <= record[i][1]; j++) {
//			sum += cage[j];
//		}
//		if (sum != record[i][2]) return false;
//	}
//	return true;
//}
//
//void dfs(int idx, int sum) {
//	if (idx == N+1) {		//N번 우리까지 다 채웠으면 조건 만족하는지 확인
//		if (check()) {
//			if (maxval < sum) {
//				maxval = sum;
//				for (int i = 1; i <= N; i++) {
//					answer[i] = cage[i];
//				}
//			}
//		}
//		return;
//	}
//	for (int i = 0; i <= X; i++) {
//		cage[idx] = i;
//		dfs(idx + 1, sum + i);
//	}
//}
//
//void sol() {
//
//	dfs(1, 0);
//}
//
//void init() {
//	maxval = -1;
//	memset(answer, 0, sizeof(answer));
//
//	cin >> N >> X >> M;
//	for (int i = 0; i < M; i++) {
//		cin >> record[i][0] >> record[i][1] >> record[i][2];
//	}
//}
//
//int main() {
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		init();
//		sol();
//
//		cout << "#" << t << " ";
//		if (maxval == -1) {
//			cout << "-1";
//		}
//		else {
//			for (int i = 1; i <= N; i++) {
//				cout << answer[i] << " ";
//			}
//		}
//		cout << endl;
//	}
//
//	return 0;
//}