//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <set>
//
//using namespace std;
//
//int dr[4] = { 0, 0, 1, -1 };
//int dc[4] = { 1, -1, 0, 0 };
//int map[4][4];
//int answer;
//string s;
//set<string> sset;
//
//bool isIn(int r, int c) {
//	if (r >= 0 && r < 4 && c >= 0 && c < 4) {
//		return true;
//	}
//	return false;
//}
//
//void sol(int r, int c, int len, string s) {
//	if (len == 7) {
//		sset.insert(s);
//		return;
//	}
//	int nr, nc;
//
//	for (int i = 0; i < 4; i++) {
//		nr = r + dr[i];
//		nc = c + dc[i];
//		if (isIn(nr, nc)) {
//			sol(nr, nc, len + 1, s + to_string(map[nr][nc]));
//		}
//	}
//
//
//}
//
//int main() {
//	int T;
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		answer = 0;
//		sset.clear();
//		for (int i = 0; i < 4; i++) {
//			for (int j = 0; j < 4; j++) {
//				cin >> map[i][j];
//			}
//		}
//
//		for (int i = 0; i < 4; i++) {
//			for (int j = 0; j < 4; j++) {
//				s = "";
//				sol(i, j, 1, s + to_string(map[i][j]));
//			}
//		}
//		answer = sset.size();
//		cout << "#" << t << " " << answer << endl;
//		
//	}
//
//	return 0;
//}