//#include <iostream>
//
//using namespace std;
//
//#define min(a, b)((a < b)?a:b)
//
//const int MAX = 987654321;
//int N, M, answer;
//int map[11][11];
//bool check[11];
//
//void dfs(int start, int dest, int cost) {
//	if (start == dest) {
//		answer = min(answer, cost);
//		return;
//	}
//	if (cost > answer) return;
//
//
//	for (int i = 1; i <= N; i++) {
//		if (!check[i] && map[start][i] != 0) {
//			check[i] = true;
//			dfs(i, dest, cost + map[start][i]);
//			check[i] = false;
//		}
//	}
//}
//
//void sol() {
//	check[1] = true;
//	dfs(1, N, 0);
//}
//
//void init() {
//	int a, b, cost;
//	answer = MAX;
//	cin >> N >> M;
//	for (int i = 0; i < M; i++) {
//		cin >> a >> b >> cost;
//		map[a][b] = cost;
//		map[b][a] = cost;
//	}
//}
//
//int main()
//{
//	init();
//	sol();
//	cout << answer;
//	return 0;
//}