//#include <iostream>
//#include <string>
//#include <queue>
//#include <memory.h>
//
//using namespace std;
//
//int answer;
//int T, H, W;
//int map[1000][1000];
//int dr[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
//int dc[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
//queue<pair<int, int>> q;
//
//void demolish() {
//	int nr, nc;
//	//처음에는 .인부분만 모래 깎기
//	for (int r = 0; r < H; r++) {
//		for (int c = 0; c < W; c++) {
//			if (map[r][c] < 0) {
//				for (int i = 0; i < 8; i++) {
//					nr = r + dr[i];
//					nc = c + dc[i];
//					if (nr < 0 || nc < 0 || nr >= H || nc >= W || map[nr][nc] < 0) continue;
//					map[nr][nc]--;
//					if (map[nr][nc] == 0) {
//						q.push({ nr, nc });
//					}
//				}
//			}
//		}
//	}
//	//그 다음 부터는 새로 생긴 파도 영역(큐에 들어있는) 주위에있는 모래만 깎기
//	int r, c, size;
//	while (!q.empty()) {
//		size = q.size();
//		for (int i = 0; i < size; i++) {
//			r = q.front().first;
//			c = q.front().second;
//			q.pop();
//			for (int i = 0; i < 8; i++) {
//				nr = r + dr[i];
//				nc = c + dc[i];
//				if (map[nr][nc] < 0) continue;
//				map[nr][nc]--;
//				if (map[nr][nc] == 0) {
//					q.push({ nr, nc });
//				}
//			}
//		}
//		answer++;
//	}
//
//}
//
//void sol() {
//	demolish();
//}
//
//void init() {
//	string s;
//	answer = 0;
//	memset(map, 0, sizeof(map));
//
//	cin >> H >> W;
//	for (int i = 0; i < H; i++) {
//		cin >> s;
//		for (int j = 0; j < W; j++) {
//			map[i][j] = s[j]-'0';
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