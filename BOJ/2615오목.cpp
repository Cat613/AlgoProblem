////https://www.acmicpc.net/problem/2615
//
//#include <iostream>
//#include <memory.h>
//
//using namespace std;
//
//int answer, ar, ac;
//int map[19][19];
//int val[8];
//int dr[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
//int dc[8] = {1, 1, 1, 0, -1, -1, -1, 0};
//
//bool isIn(int r, int c, int val) {
//	if (r >= 0 && r < 19 && c >= 0 && c < 19 && map[r][c] == val) {
//		return true;
//	}
//	return false;
//}
//
//int count(int r, int c, int d) {
//	int cnt = 0;
//	int nr, nc;
//	nr = r;
//	nc = c;
//	while (isIn(nr, nc, map[r][c])) {
//		cnt++;
//		nr += dr[d];
//		nc += dc[d];
//	}
//
//	return cnt;
//}
//
//void sol(int r, int c) {
//	int nr, nc;
//	int temp;
//	memset(val, 0, sizeof(val));
//	for (int i = 0; i < 8; i++) {
//		nr = r + dr[i];
//		nc = c + dc[i];
//		if (isIn(nr, nc, map[r][c])) {
//			val[i] = count(r, c, i);
//		}
//	}
//	for (int i = 0; i < 4; i++) {
//		if (val[i] == 5 && val[i + 4] == 0) {
//			answer = map[r][c];
//			ar = r+1;
//			ac = c+1;
//		}
//	}
//
//}
//
//int main() {
//
//	for (int i = 0; i < 19; i++) {
//		for (int j = 0; j < 19; j++) {
//			cin >> map[i][j];	//1=∞À 2=»Ú 
//		}
//	}
//
//	answer = 0;
//
//	for (int i = 0; i < 19; i++) {
//		for (int j = 0; j < 19; j++) {
//			if (map[i][j] != 0) {
//				sol(i, j);
//			}
//		}
//	}
//	if (answer == 0) {
//		cout << answer;
//	}
//	else {
//		cout << answer << endl;
//		cout << ar << " " << ac;
//	}
//
//	return 0;
//}