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
//bool check;
//
//bool isIn(int r, int c) {
//	if (r >= 0 && r < N && c >= 0 && c < N) {
//		return true;
//	}
//	return false;
//}
//
//void update(int r, int c) {
//	int nr, nc;
//	for (int i = 0; i < 4; i++) {
//		nr = r + dr[i];
//		nc = c + dc[i];
//		if (isIn(nr, nc) && timeArr[nr][nc] != -1) {
//			int nt = map[r][c] + timeArr[nr][nc];
//			//ó�� ����� ��
//			if (timeArr[r][c] == -1) {
//				//������ ����
//				check = true;
//				timeArr[r][c] = nt;
//			}
//			else {
//				//ó�� ��� �ƴϸ� ���غ��� ���ο� ����� �ð��� ������ ����
//				if (timeArr[r][c] > nt) {
//					check = true;
//					timeArr[r][c] = nt;
//				}
//			}
//		}
//	}
//}
//
//void sol() {
//	check = true;
//	//time �ʱ�ȭ
//	memset(timeArr, -1, sizeof(timeArr));
//	timeArr[0][0] = 0;
//	timeArr[0][1] = map[0][1];
//	timeArr[1][0] = map[1][0];
//
//	
//	while (check) {
//		check = false;
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				update(i, j);
//			}
//		}
//	}
//	answer = timeArr[N - 1][N - 1];
//}
//
//int main() {
//	string s;
//
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		cin >> N;
//		memset(map, 0, sizeof(map));
//		for (int i = 0; i < N; i++) {
//			cin >> s;
//			for (int j = 0; j < N; j++) {
//				map[i][j] = s[j] - '0';
//			}
//		}
//		sol();
//
//		cout << "#" << t << " " << answer << endl;
//	}
//
//
//	return 0;
//}