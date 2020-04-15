//#include <iostream>
//#include <string>
//#include <memory.h>
//
//using namespace std;
//
//int answer;
//int T, N, Max;
//int R, C;
//char map[20][20];
//int dr[4] = { 0, 0, 1, -1 };
//int dc[4] = { 1, -1, 0, 0 };
//bool visit[26];
//
//bool canGo(int r, int c, char val) {
//	if (r >= 0 && r < R && c >= 0 && c < C && !visit[val-'A']) {
//		return true;
//	}
//	return false;
//}
//
//void dfs(int r, int c, int cnt) {
//	answer = answer < cnt ? cnt : answer;
//
//	int nr, nc;
//	
//
//	for (int i = 0; i < 4; i++) {
//		nr = r + dr[i];
//		nc = c + dc[i];
//
//		if (canGo(nr, nc, map[nr][nc])) {
//			visit[map[nr][nc] - 'A'] = true;
//			dfs(nr, nc, cnt+1);
//			visit[map[nr][nc] - 'A'] = false;
//		}
//
//	}
//}
//
//void sol() {
//	visit[map[0][0] - 'A'] = true;
//	dfs(0, 0, 1);
//}
//void init() {
//	string s;
//	Max = 0;
//	answer = 0;
//	memset(map, 0, sizeof(map));
//	memset(visit, 0, sizeof(visit));
//
//	cin >> R >> C;
//	for (int i = 0; i < R; i++) {
//		cin >> s;
//		for (int j = 0; j < C; j++) {
//			map[i][j] = s[j];
//		}
//	}
//}
//
//int main() {
//	
//	cin >> T;
//
//	for (int t = 1; t <= T; t++) {
//		init();
//		sol();
//		
//		cout << "#" << t << " " << answer << endl;
//	}
//
//	return 0;
//}