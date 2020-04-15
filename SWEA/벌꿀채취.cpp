//#include <iostream>
//#include <memory.h>
//
//using namespace std;
//
//int T, N, M, C;
//int answer;
//int map[10][10];
//int val[10][10];
//bool check[5];
//
////dfs�� �κ����� ������ ��� �Ͽ� �ִ� ���ϱ�
//void dfs(int r, int c, int index) {
//	if (index == M) {
//		int sum = 0, res = 0;
//		for (int i = c; i < c + M; i++) {
//			if (check[i - c]) {
//				sum += map[r][i];
//			}
//		}
//		//�κ������� �ϼ��ǰ� �κ������� ���� C���� ������ �� ���
//		if (sum <= C) {
//			for (int i = c; i < c + M; i++) {
//				if (check[i - c]) {
//					res += map[r][i] * map[r][i];
//				}
//			}
//		}
//		val[r][c] = val[r][c] < res ? res : val[r][c];
//		return;
//	}
//
//	check[index] = true;
//	dfs(r, c, index + 1);
//	check[index] = false;
//	dfs(r, c, index + 1);
//}
//
////(r, c)���� Mĭ�� ä������ �� ���� ���� ���� ���� ���� �ܿ��� �� ����
//void calMax(int r, int c) {
//	int sum = 0, res = 0;
//	for (int i = c; i < c + M; i++) {
//		sum += map[r][i];
//	}
//	//Mĭ�� ��� ���� ���� C�� ���� ������ ��� �����ؼ� ���ϱ�
//	if (sum <= C) {
//		for (int i = c; i < c + M; i++) {
//			res += map[r][i]*map[r][i];
//		}
//		val[r][c] = res;
//	}
//	else {//C�� ������ �κ������� ���Ͽ� �ִ� ���ϱ�
//		dfs(r, c, 0);
//	}
//}
//
////�� ĭ���� ���� ���� ���� �� �� �ִ� �� val[][]�� ä���
//void calVal() {
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N - M + 1; j++) {
//			calMax(i, j);
//		}
//	}
//}
//
//void maxComb() {
//	int maxval = 0, next = 0;
//	int maxr = 0, maxc = 0, nextr = 0, nextc = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N - M + 1; j++) {
//			if (maxval < val[i][j]) {
//				maxval = val[i][j];
//				maxr = i;
//				maxc = j;
//			}
//		}
//	}
//
//	while (true){
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N - M + 1; j++) {
//				if (!(i == maxr && j == maxc) && next < val[i][j]) {
//					next = val[i][j];
//					nextr = i;
//					nextc = j;
//				}
//			}
//		}
//		//�Ȱ�ġ�� ������ ������ ���
//		if (maxr != nextr || maxc + M <= nextc || maxc - M >= nextc) {
//			break;
//		}
//		else {	//���ļ� ������ �Ұ����� ���
//			val[nextr][nextc] = 0;
//			next = 0;
//		}
//	}
//	answer = maxval + next;
//}
//
//void sol() {
//	//val[][]ä���
//	calVal();
//
//	//�� �ϲ� ����
//	maxComb();
//}
//
//int main() {
//	cin >> T;
//
//	for (int t = 1; t <= T; t++) {
//		cin >> N >> M >> C;
//		answer = 0;
//		memset(map, 0, sizeof(map));
//		memset(val, 0, sizeof(val));
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				cin >> map[i][j];
//			}
//		}
//
//		sol();
//		cout << "#" << t << " " << answer << endl;
//	}
//
//	return 0;
//}