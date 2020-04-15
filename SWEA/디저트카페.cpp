//#include <iostream>
//#include <memory.h>
//
//using namespace std;
//
//int T, N;
//int answer;
//int map[20][20];
//int dr[4] = { 1, 1, -1, -1 };
//int dc[4] = { 1, -1, -1, 1 };
//bool visit[101];
//
//bool isIn(int r, int c) {
//	if (r >= 0 && r < N && c >= 0 && c < N) {
//		return true;
//	}
//	return false;
//}
//
//void dfs(int sr, int sc, int er, int ec, int d, int cnt) {
//	if (d == 3) {
//		//�� �κ��� �߰��� �κ��Դϴ�.
//		int nr, nc;
//		nr = sr + dr[d];
//		nc = sc + dc[d];
//		while (isIn(nr, nc)) {
//			if (nr == er && nc == ec) {
//				cnt++;
//				answer = answer < cnt ? cnt : answer;
//				break;
//			}
//			if (visit[map[nr][nc]]) break;
//			visit[map[nr][nc]] = true;
//			cnt++;
//			nr = nr + dr[d];
//			nc = nc + dc[d];
//		}
//		d = (d + 2) % 4;
//		nr = nr + dr[d];
//		nc = nc + dc[d];
//		while (nr != sr) {
//			visit[map[nr][nc]] = false;
//			cnt--;
//			nr = nr + dr[d];
//			nc = nc + dc[d];
//		}
//		return;
//	}
//
//	int nr, nc;
//	nr = sr + dr[d];
//	nc = sc + dc[d];
//
//	visit[map[sr][sc]] = true;
//	//�� �������� �� �� �ִ� �� ���� ����
//	while (isIn(nr, nc)) {
//
//		if (d == 3 && nr == er && nc == ec) {
//			cnt++;
//			answer = answer < cnt ? cnt : answer;
//			return;
//		}
//		//���� �濡 �̹� �湮�� ī�䰡 ������ ���̻� �������� ����.
//		if (visit[map[nr][nc]]) break;
//		visit[map[nr][nc]] = true;
//		cnt++;
//		nr = nr + dr[d];
//		nc = nc + dc[d];
//	}
//
//	//�ִ�� �̵������� �ű⼭���� �ϳ��� �ٿ������鼭 Ž��
//	d = (d + 2) % 4;
//	nr = nr + dr[d];
//	nc = nc + dc[d];
//	while (nr != sr) {
//		dfs(nr, nc, er, ec, (d + 3) % 4, cnt);
//		visit[map[nr][nc]] = false;
//		cnt--;
//		nr = nr + dr[d];
//		nc = nc + dc[d];
//	}
//}
//
//void sol() {
//	for (int i = 0; i < N - 2; i++) {
//		for (int j = 1; j < N - 1; j++) {
//			if (map[i][j] != map[i + 1][j + 1]) {
//				memset(visit, 0, sizeof(visit));
//				dfs(i, j, i, j, 0, 0);
//			}
//		}
//	}
//}
//
//void init() {
//	memset(map, 0, sizeof(map));
//	answer = -1;
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> map[i][j];
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		init();
//		sol();
//		cout << "#" << t << " " << answer << endl;
//	}
//	return 0;
//}