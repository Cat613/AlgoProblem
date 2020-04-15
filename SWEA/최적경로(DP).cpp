//#include <iostream>
//#include <memory.h>
//
//using namespace std;
//
//#define min(a, b)((a<b)?a:b)
//#define abs(a)((a<0)?-a:a)
//
//struct Point {
//	int x;
//	int y;
//};
//
//const int MAX = 987654321;
//int T, N, answer;
//Point v[12];	//v[0] = 회사, v[1] = 집
//int map[12][12];	//map[i][j] = i에서 j까지 거리
//bool visit[12];
//
//void cal_len() {
//	for (int i = 0; i < N + 2; i++) {
//		for (int j = 0; j < N + 2; j++) {
//			if (i != j) {
//				map[i][j] = abs((v[i].x - v[j].x)) + abs((v[i].y - v[j].y));
//			}
//		}
//	}
//}
//
//void dfs(int start, int depth, int cost) {
//	if (depth == N) {
//		cost += map[start][1];
//		answer = min(answer, cost);
//		return;
//	}
//
//	if (cost > answer) return;
//
//	for (int i = 2; i < N + 2; i++) {
//		if (!visit[i]) {
//			visit[i] = true;
//			dfs(i, depth + 1, cost + map[start][i]);
//			visit[i] = false;
//		}
//	}
//
//}
//
//void sol() {
//	cal_len();
//	
//	dfs(0, 0, 0);
//
//}
//
//void init() {
//	answer = MAX;
//	memset(map, 0, sizeof(map));
//	memset(visit, false, sizeof(visit));
//	memset(v, 0, sizeof(v));
//	cin >> N;
//	int x, y;
//	for (int i = 0; i < N + 2; i++) {
//		cin >> x >> y;
//		v[i] = { x, y };
//	}
//}
//
//int main() {
//
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		init();
//		sol();
//
//		cout << "#" << t << " " << answer << endl;
//	}
//	return 0;
//}