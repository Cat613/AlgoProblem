//#include <iostream>
//#include <string>
//#include <memory.h>
//
//using namespace std;
//
//int T, N, answer;
//int map[100][100];
//int timeArr[100][100];
//int dr[4] = { 0, 1, 0, -1 };
//int dc[4] = { 1, 0, -1, 0 };
//bool visit[100][100];
//
//bool isIn(int r, int c) {
//	if (r >= 0 && r < N && c >= 0 && c < N) {
//		return true;
//	}
//	return false;
//}
//
//void greedyAns(int r, int c, int sum) {
//	if (r == N - 1 && c == N - 1) {
//		answer = answer > sum ? sum : answer;
//		return;
//	}
//	int nr, nc, d = 0, minval = 987654321;
//	for (int i = 0; i < 2; i++) {
//		nr = r + dr[i];
//		nc = c + dc[i];
//		if (isIn(nr, nc)) {
//			if (map[nr][nc] < minval) {
//				minval = map[nr][nc];
//				d = i;
//			}
//		}
//	}
//
//	nr = r + dr[d];
//	nc = c + dc[d];
//	greedyAns(nr, nc, sum + map[r][c]);
//}
//
//void dfs(int r, int c, int sum) {
//	if (r == N - 1 && c == N - 1) {
//		answer = answer > sum ? sum : answer;
//		return;
//	}
//	if (sum > answer) return;
//	if (sum + map[r][c] > timeArr[r][c]) return;
//	timeArr[r][c] = sum + map[r][c];
//	int nr, nc;
//	for (int i = 0; i < 4; i++) {
//		nr = r + dr[i];
//		nc = c + dc[i];
//		if (isIn(nr, nc) && !visit[nr][nc]) {
//			if (timeArr[r][c] + map[nr][nc] >= timeArr[nr][nc]) continue;
//			visit[nr][nc] = true;
//			dfs(nr, nc, sum + map[r][c]);
//			visit[nr][nc] = false;
//		}
//	}
//}
//
//void sol() {
//	greedyAns(0, 0, 0);
//	dfs(0, 0, 0);
//}
//
//void init() {
//	string s;
//	cin >> N;
//	memset(map, 0, sizeof(map));
//	answer = 987654321;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			timeArr[i][j] = 987654321;
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		cin >> s;
//		for (int j = 0; j < N; j++) {
//			map[i][j] = s[j] - '0';
//		}
//	}
//}
//
//int main() {
//	
//
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		init();
//		sol();
//
//		cout << "#" << t << " " << answer << endl;
//	}
//
//
//	return 0;
//}