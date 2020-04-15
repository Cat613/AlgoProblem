//#include <iostream>
//#include <memory.h>
//
//using namespace std;
//const int MAX = 987654321;
//int T, N, M, answer;
//int map[50][50];
//int memo[51][51][51][51]; //[r][c][h][w] (r,c)���� h*wũ���� �������� ������ �����ؾ��ϴ� �������� ������
//int cnt[51][51][51][51]; //[r][c][h][w] (r,c)���� h*wũ���� ������ �����ϴ� ������ ��
//
//int dfs(int r, int c, int h, int w) {
//	//����
//	if (h == 1 && w == 1) {
//		cnt[r][c][h][w] = map[r][c];
//		return 0;
//	}
//	if (memo[r][c][h][w] != MAX) return memo[r][c][h][w];
//	//����
//	
//	int total;
//	//���η� �ڸ���
//	for (int i = 1; i < h; i++) {
//		//���κ�
//		if (memo[r][c][i][w] == MAX) {
//			memo[r][c][i][w] = dfs(r, c, i, w);
//		}
//		//�Ʒ��κ�
//		if (memo[r + i][c][h - i][w] == MAX) {
//			memo[r + i][c][h - i][w] = dfs(r + i, c, h - i, w);
//		}
//		//cnt �޸������̼� �ϱ�
//		if (cnt[r][c][h][w] == 0) {
//			cnt[r][c][h][w] = cnt[r][c][i][w] + cnt[r + i][c][h - i][w];
//		}
//		//�� �� ���ؼ� ���� memo�� ��ϵ� ������ ������ ����
//		total = cnt[r][c][h][w] + memo[r][c][i][w] + memo[r + i][c][h - i][w];
//		memo[r][c][h][w] = memo[r][c][h][w] > total ? total : memo[r][c][h][w];
//	}
//	//���η� �ڸ���
//	for (int i = 1; i < w; i++) {
//		//����
//		if (memo[r][c][h][i] == MAX) {
//			memo[r][c][h][i] = dfs(r, c, h, i);
//		}
//		//������
//		if (memo[r][c + i][h][w - i] == MAX) {
//			memo[r][c + i][h][w - i] = dfs(r, c + i, h, w - i);
//		}
//		//cnt �޸������̼� �ϱ�
//		if (cnt[r][c][h][w] == 0) {
//			cnt[r][c][h][w] = cnt[r][c][h][i] + cnt[r][c + i][h][w - i];
//		}
//		//�� �� ���ؼ� ���� memo�� ��ϵ� ������ ������ ����
//		total = cnt[r][c][h][w] + memo[r][c][h][i] + memo[r][c + i][h][w - i];
//		memo[r][c][h][w] = memo[r][c][h][w] > total ? total : memo[r][c][h][w];
//	}
//
//	return memo[r][c][h][w];
//}
//
//void sol() {
//	//�ڸ���
//	answer = dfs(0, 0, N, M);
//}
//
//void init() {
//	answer = 0;
//	memset(map, 0, sizeof(map));
//	
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			for (int i2 = 0; i2 < N+1; i2++) {
//				for (int j2 = 0; j2 < M+1; j2++) {
//					memo[i][j][i2][j2] = MAX;
//					cnt[i][j][i2][j2] = 0;
//				}
//			}
//		}
//	}
//}
//int main() {
//
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		init();
//		sol();
//
//		cout << "#" << t << " " << answer << endl;
//	}
//
//	return 0;
//}