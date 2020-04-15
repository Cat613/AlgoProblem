//#include <iostream>
//#include <algorithm>
//#include <memory.h>
//
//using namespace std;
//
//int T, N, M, answer;
//int arr[11][11];
//int memo[1 << 11][11];
//bool visit[11];
//
//
//int dfs(int v, int visited) {
//	if (memo[visited][v] != 0) {
//		return memo[visited][v];
//	}
//
//	int ret = 1;
//
//	for (int i = 1; i <= N; i++) {
//		if (arr[v][i] == 1 && (visited & (1 << i)) == 0) {
//			ret = max(dfs(i, visited | (1 << i))+1, ret);
//		}
//	}
//
//	memo[visited][v] = ret;
//
//	return ret;
//}
//
//void sol() {
//	for (int i = 1; i <= N; i++) {
//		answer = max(answer, dfs(i, 1 << i));
//	}
//}
//
//void init() {
//	int a, b;
//	answer = 0;
//	cin >> N >> M;
//	memset(arr, 0, sizeof(arr));
//	memset(memo, 0, sizeof(memo));
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