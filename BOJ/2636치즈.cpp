//#include <iostream>
//#include <memory.h>
//
//using namespace std;
//
//int R, C;
//int map[100][100];
//int remain, time;
//bool check[100][100];
//bool visit[100][100];
//
//int dr[4] = { 0, 0, 1, -1 };
//int dc[4] = { 1, -1, 0, 0 };
//
//bool isIn(int r, int c) {
//	if (r >= 0 && r < R && c >= 0 && c < C && !visit[r][c]) {
//		return true;
//	}
//	return false;
//}
//
//bool checkRemain() {
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			if (map[i][j] > 0) {
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//void sol(int r, int c) {
//	int nr, nc;
//	visit[r][c] = true;
//	for (int d = 0; d < 4; d++) {
//		nr = r + dr[d];
//		nc = c + dc[d];
//		if (isIn(nr, nc)) {
//			if (map[nr][nc] > 0) {
//				check[nr][nc] = true;
//			}
//			else {
//				map[r][c] = -1;
//				sol(nr, nc);
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> R >> C;
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			cin >> map[i][j];
//		}
//	}
//	time = 0;
//	remain = 0;
//
//	while (checkRemain()) {
//		time++;
//		memset(check, false, sizeof(check));
//		memset(visit, false, sizeof(check));
//
//		sol(0,0);
//		int cnt = 0;
//		for (int i = 0; i < R; i++) {
//			for (int j = 0; j < C; j++) {
//				if (map[i][j] == 1) {
//					cnt++;
//				}
//				if (check[i][j]) {
//					map[i][j] = 0;
//				}
//			}
//		}
//		remain = cnt;
//	}
//
//	cout << time << endl;
//	cout << remain << endl;
//}