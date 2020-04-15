////https://swexpertacademy.com/main/solvingProblem/solvingProblem.do
//
//#include <iostream>
//#include <string>
//#include <memory.h>
//
//using namespace std;
//
//int map[16][16];
//int visit[16][16];
//int startr, startc, answer;
//int dr[4] = { 0, 0, 1, -1 };
//int dc[4] = { 1, -1, 0, 0 };
//
//bool isIn(int r, int c) {
//	if (r >= 0 && r < 16 && c >= 0 && c < 16 && !visit[r][c] && map[r][c] != 1) {
//		return true;
//	}
//	return false;
//}
//
//void dfs(int r, int c) {
//	if (map[r][c] == 3) {
//		answer = 1;
//	}
//	visit[r][c] = true;
//	int nr, nc;
//
//	for (int i = 0; i < 4; i++) {
//		nr = r + dr[i];
//		nc = c + dc[i];
//		if (isIn(nr, nc)) {
//			dfs(nr, nc);
//		}
//	}
//
//}
//
//int main() {
//	int T = 10;
//	int n;
//	string input;
//	for (int t = 1; t <= T; t++) {
//		cin >> n;
//
//		for (int i = 0; i < 16; i++) {
//			cin >> input;
//			for (int j = 0; j < 16; j++) {
//				map[i][j] = input[j] - '0';
//				if (map[i][j] == 2) {
//					startr = i;
//					startc = j;
//				}
//			}
//		}
//		answer = 0;
//		memset(visit, false, sizeof(visit));
//		dfs(startr, startc);
//
//		
//		cout << "#" << n << " " << answer << endl;
//	}
//
//
//	return 0;
//}