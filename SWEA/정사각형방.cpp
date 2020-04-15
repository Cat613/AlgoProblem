//#include <iostream>
//#include <memory.h>
//
//using namespace std;
//
//int answer;
//int T, N, count_room, Max;
//int map[1000][1000];
//bool totalvisit[1000][1000];
//int dr[4] = { 0, 0, 1, -1 };
//int dc[4] = { 1, -1, 0, 0 };
//bool visit[1000][1000];
//
//bool canGo(int r, int c, int val) {
//	if (r >= 0 && r < N && c >= 0 && c < N && !visit[r][c] && map[r][c] == val + 1) {
//		return true;
//	}
//	return false;
//}
//
//void sol(int r, int c) {
//	int nr, nc;
//	visit[r][c] = true;
//	totalvisit[r][c] = true;
//	for (int i = 0; i < 4; i++) {
//		nr = r + dr[i];
//		nc = c + dc[i];
//
//		if (canGo(nr, nc, map[r][c])) {
//			count_room++;
//			sol(nr, nc);
//		}
//
//	}
//
//}
//
//int main() {
//
//	cin >> T;
//
//	for (int t = 1; t <= T; t++) {
//		cin >> N;
//		Max = 0;
//		memset(map, 0, sizeof(map));
//		memset(totalvisit, 0, sizeof(totalvisit));
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				cin >> map[i][j];
//			}
//		}
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				if (!totalvisit[i][j]) {
//					memset(visit, false, sizeof(visit));
//					count_room = 1;
//					sol(i, j);
//					if (count_room > Max) {
//						Max = count_room;
//						answer = map[i][j];
//					}
//					else if (count_room == Max && answer > map[i][j]) {
//						answer = map[i][j];
//					}
//				}
//			}
//		}
//		
//		cout << "#" << t << " " << answer << " " << Max << endl;
//	}
//
//	return 0;
//}