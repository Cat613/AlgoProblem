//#include <iostream>
//#include <memory.h>
//
//using namespace std;
//
//int T, N, M, answer;
//int arr[11][11];
//bool visit[11];
//
//void dfs(int v, int cnt) {
//	answer = answer < cnt ? cnt : answer;
//
//	for (int i = 1; i <= N; i++) {
//		if (arr[v][i] == 1 && !visit[i]) {
//			visit[i] = true;
//			dfs(i, cnt + 1);
//			visit[i] = false;
//		}
//	}
//}
//
//void sol() {
//	for (int i = 1; i <= N; i++) {
//		visit[i] = true;
//		dfs(i, 1);
//		visit[i] = false;
//	}
//}
//
//void init() {
//	int a, b;
//	answer = 0;
//	cin >> N >> M;
//	memset(arr, 0, sizeof(arr));
//	for (int i = 0; i < M; i++) {
//		cin >> a;
//		cin >> b;
//		arr[a][b] = 1;
//		arr[b][a] = 1;
//	}
//}
//int main() {
//	
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		init();
//		sol();
//
//		cout << "#" << t << " " << answer << endl;
//	}
//
//	return 0;
//}