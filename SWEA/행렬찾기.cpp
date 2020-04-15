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
//};
//
//int N, num, answer[40];
//int map[100][100];
//Matrix matrix[20];
//
//bool cmp(const Matrix& m1, const Matrix& m2) {
//	if (m1.area != m2.area) {
//		return m1.area < m2.area;
//	}
//	else {
//		return m1.height < m2.height;
//	}
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
//void sol() {
//	//��� ������ ���� width, height�ľ�
//	for (int i = 0; i < num; i++) {
//		measure(i, matrix[i].r, matrix[i].c);
//	}
//	//ũ������� ����
//	sort(matrix, matrix + num, cmp);
//
//}
//
//void init() {
//	num = 0;
//	memset(answer, 0, sizeof(answer));
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
//		cout << "#" << t << " " << num << " ";
//		for (int i = 0; i < num; i++) {
//			cout << matrix[i].height << " " << matrix[i].width << " ";
//		}
//		cout << "\n";
//	}
//
//	return 0;
//}