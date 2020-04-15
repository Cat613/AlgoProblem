//#include <iostream>
//#include <algorithm>
//#include <memory.h>
//
//using namespace std;
//
//struct Matrix {
//	int r, c;
//	int width, height;
//	int area;
//	int order;
//};
//
//const int MAX = 987654321;
//int N, num, answer;
//int map[100][100];
//int memo[21][21];
//Matrix matrix[20];
//int d[21];
//bool visit[20];
//
//bool cmp(const Matrix& m1, const Matrix& m2) {
//	return m1.order < m2.order;
//}
//
//void measure(int n, int r, int c) {
//	int w = 0, h = 0;
//	int nr = r, nc = c;
//	while (r < N && map[r][nc] != 0) {
//		r++;
//		h++;
//	}
//	while (c < N && map[nr][c] != 0) {
//		c++;
//		w++;
//	}
//	matrix[n].width = w;
//	matrix[n].height = h;
//	matrix[n].area = w * h;
//}
//
//int divideNsolve(int start, int end) {
//	if (memo[start][end] >= 0)return memo[start][end];
//
//	int minval = MAX, temp;
//	for (int i = start; i < end; i++) {
//		temp = divideNsolve(start, i) + divideNsolve(i + 1, end) + (d[start] * d[i + 1] * d[end + 1]);
//		minval = temp < minval ? temp : minval;
//	}
//
//	return memo[start][end] = minval;
//
//}
//
//void makeOrder(int depth, int pre) {
//	if (depth == num) {
//		sort(matrix, matrix + num, cmp);
//		d[0] = matrix[0].height;
//		for (int i = 0; i < num; i++) {
//			d[i + 1] = matrix[i].width;
//		}
//		return;
//	}
//	if (d[0] != -1) return;
//
//	for (int i = 0; i < num; i++) {
//		if (!visit[i]) {
//			if (depth == 0 || matrix[i].height == pre) {
//				visit[i] = true;
//				matrix[i].order = depth;
//				makeOrder(depth + 1, matrix[i].width);
//				visit[i] = false;
//				matrix[i].order = 0;
//			}
//		}
//	}
//}
//
//void sol() {
//	//��� ������ ���� width, height�ľ�
//	for (int i = 0; i < num; i++) {
//		measure(i, matrix[i].r, matrix[i].c);
//	}
//	//ũ������� ����
//	//sort(matrix, matrix + num, cmp);
//
//	//matrix ������ ������ ������� �迭
//	d[0] = -1;
//	makeOrder(0, 0);
//
//	//����� Ž���ϱ� (�޸������̼ǻ��)
//	//�޸� �迭 �ʱ�ȭ
//	memset(memo, 0, sizeof(memo));
//	for (int i = 0; i < num; i++) {
//		for (int j = i + 1; j < num; j++) {
//			memo[i][j] = -1;
//		}
//	}
//	answer = divideNsolve(0, num - 1);
//}
//
//void init() {
//	num = 0;
//	answer = 0;
//	memset(d, 0, sizeof(d));
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> map[i][j];
//			if (map[i][j] != 0) {	//(i, j) �� ���� 0�� �ƴϰ�
//				if (i==0 && j==0) {		//�������̸�
//					matrix[num].r = i;
//					matrix[num].c = j;
//					num++;
//					continue;
//				}
//				if (i > 0 && j == 0 && map[i-1][j] == 0) {	//�� �����̰� �ٷ� ���� ���� 0�̸�
//					matrix[num].r = i;
//					matrix[num].c = j;
//					num++;
//					continue;
//				}
//				if (i == 0 && j > 0 && map[i][j-1] == 0) {	//�� �����̰� �ٷ� ������ ���� 0�̸�
//					matrix[num].r = i;
//					matrix[num].c = j;
//					num++;
//					continue;
//				}
//				if (i > 0 && j > 0 && map[i - 1][j] == 0 && map[i][j - 1] == 0) {	//���� ���� �� ���� ��� 0�̸�
//					matrix[num].r = i;
//					matrix[num].c = j;
//					num++;
//					continue;
//				}
//			}
//		}
//	}
//
//}
//
//int main() {
//	int T;
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		
//		init();
//		sol();
//
//		cout << "#" << t << " " << answer << "\n";
//	}
//
//	return 0;
//}