////https://www.acmicpc.net/problem/2589
//
//#include <iostream>
//#include <queue>
//#include <memory.h>
//
//using namespace std;
//
//int R, C, answer;
//char map[50][50];
//int dist[50][50];
//int dr[4] = { 0, 0, 1, -1 };
//int dc[4] = { 1, -1, 0, 0 };
//
//bool isIn(int r, int c) {
//	if (r >= 0 && r < R && c >= 0 && c < C && map[r][c] == 'L' && dist[r][c] == 0) {
//		return true;
//	}
//	return false;
//}
//
////ÀÌµ¿
//void bfs(int r, int c) {
//	int nr, nc;
//	bool loonger;
//	queue<pair<int, int>> q;
//	q.push(make_pair(r, c));
//	dist[r][c] = 1;
//	while (!q.empty()) {
//		int r = q.front().first;
//		int c = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			nr = r + dr[i];
//			nc = c + dc[i];
//			if (isIn(nr, nc)) {
//				dist[nr][nc] = dist[r][c]+1;
//				q.push(make_pair(nr, nc));
//			}
//		}
//	}
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			answer = answer < dist[i][j] ? dist[i][j] : answer;
//		}
//	}
//}
//
//int main() {
//	cin >> R >> C;
//	
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			cin >> map[i][j];
//		}
//	}
//	answer = 0;
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			memset(dist, 0, sizeof(dist));
//			if (map[i][j] == 'L') {
//				bfs(i, j);
//			}
//		}
//	}
//	answer--;
//	cout << answer;
//	return 0;
//}
