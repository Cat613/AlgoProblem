//#include <iostream>
//#include <memory.h>
//#include <string>
//
//using namespace std;
//
//int T, N;
//char map[12][12];
//string s;
//
////�ʱ�ȭ
//void init() {
//	for (int i = 0; i < 12; i++) {
//		for (int j = 0; j < 12; j++) {
//			map[i][j] = ' ';
//		}
//	}
//	for (int i = 6; i < 9; i++) {
//		for (int j = 6; j < 9; j++) {
//			map[i][j] = 'w';
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 6; j < 9; j++) {
//			map[i][j] = 'y';
//		}
//	}
//	for (int i = 6; i < 9; i++) {
//		for (int j = 0; j < 3; j++) {
//			map[i][j] = 'y';
//		}
//	}
//	for (int i = 6; i < 9; i++) {
//		for (int j = 3; j < 6; j++) {
//			map[i][j] = 'g';
//		}
//	}
//	for (int i = 6; i < 9; i++) {
//		for (int j = 9; j < 12; j++) {
//			map[i][j] = 'b';
//		}
//	}
//	for (int i = 9; i < 12; i++) {
//		for (int j = 6; j < 9; j++) {
//			map[i][j] = 'r';
//		}
//	}
//	for (int i = 3; i < 6; i++) {
//		for (int j = 6; j < 9; j++) {
//			map[i][j] = 'o';
//		}
//	}
//
//}
////�� ���
//void printUp() {
//	for (int i = 6; i < 9; i++) {
//		for (int j = 6; j < 9; j++) {
//			cout << map[i][j];
//		}
//		cout << endl;
//	}
//}
////r, c �� �����ϴ� �� �ð���� ȸ��
//void clock(int r, int c) {
//	char temp[3][3];
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			temp[i][j] = map[i + r][j + c];
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			if (i == 0) {
//				map[i + r + j][c + 2] = temp[i][j];
//			}
//			else if (i == 1) {
//				map[i + r + j - 1][c + 1] = temp[i][j];
//			}
//			else if (i == 2) {
//				map[i + r - 2 + j][c] = temp[i][j];
//			}
//
//		}
//	}
//}
////r, c�� �����ϴ� �� �ð�ݴ���� ȸ��
//void reverseClock(int r, int c) {
//	char temp[3][3];
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			temp[i][j] = map[i + r][j + c];
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			if (i == 0) {
//				map[i + r + 2 - j][c] = temp[i][j];
//			}
//			else if (i == 1) {
//				map[i + r + 1 - j][c + 1] = temp[i][j];
//			}
//			else if (i == 2) {
//				map[i + r - j][c + 2] = temp[i][j];
//			}
//
//		}
//	}
//}
////�ؿ� �� ��ũ ���߱�
//void syncD(int r, int c) {
//	char temp[3][3];
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			temp[i][j] = map[i + r][j + c];
//		}
//	}
//
//	if (r == 6) {
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < 3; j++) {
//				if (i == 0) {
//					map[i + 2][j + 8 - (j * 2)] = temp[i][j];
//				}
//				else if (i == 1) {
//					map[i][j + 8 - (j * 2)] = temp[i][j];
//				}
//				else if (i == 2) {
//					map[i - 2][j + 8 - (j * 2)] = temp[i][j];
//				}
//			}
//		}
//	}
//	else {
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < 3; j++) {
//				if (i == 0) {
//					map[i + 8][j + 2 - (j * 2)] = temp[i][j];
//				}
//				else if (i == 1) {
//					map[i + 6][j + 2 - (j * 2)] = temp[i][j];
//				}
//				else if (i == 2) {
//					map[i + 4][j + 2 - (j * 2)] = temp[i][j];
//				}
//			}
//		}
//	}
//
//}
////���� ������
//void rUp() {	//r = 6 c = 6
//	char a, b, c;
//	a = map[5][6];
//	b = map[5][7];
//	c = map[5][8];
//	if (s[1] == '+') {	//�ð����
//		clock(6, 6);
//		//���ʿ��� ����
//		map[5][6] = map[8][5];
//		map[5][7] = map[7][5];
//		map[5][8] = map[6][5];
//		//�Ʒ����� ����
//		map[8][5] = map[9][8];
//		map[7][5] = map[9][7];
//		map[6][5] = map[9][6];
//		//�����ʿ��� �Ʒ�
//		map[9][8] = map[6][9];
//		map[9][7] = map[7][9];
//		map[9][6] = map[8][9];
//		//������ ������
//		map[6][9] = a;
//		map[7][9] = b;
//		map[8][9] = c;
//	}
//	else {	//�ݽð�
//		reverseClock(6, 6);
//		//�����ʿ��� ��
//		map[5][6] = map[6][9];
//		map[5][7] = map[7][9];
//		map[5][8] = map[8][9];
//		//�Ʒ����� ������
//		map[6][9] = map[9][8];
//		map[7][9] = map[9][7];
//		map[8][9] = map[9][6];
//		//���ʿ��� �Ʒ�
//		map[9][8] = map[8][5];
//		map[9][7] = map[7][5];
//		map[9][6] = map[6][5];
//		//������ ����
//		map[8][5] = a;
//		map[7][5] = b;
//		map[6][5] = c;
//	}
//}
////�Ʒ��� ������
//void rDown() {	//r = 6 c = 0
//	char a, b, c;
//	a = map[3][6];
//	b = map[3][7];
//	c = map[3][8];
//	if (s[1] == '+') {	//�ð����
//		clock(6, 0);
//		//from R to B
//		map[3][6] = map[6][11];
//		map[3][7] = map[7][11];
//		map[3][8] = map[8][11];
//		//from F to R
//		map[6][11] = map[11][8];
//		map[7][11] = map[11][7];
//		map[8][11] = map[11][6];
//		//from L to F
//		map[11][8] = map[8][3];
//		map[11][7] = map[7][3];
//		map[11][6] = map[6][3];
//		//from B to L
//		map[8][3] = a;
//		map[7][3] = b;
//		map[6][3] = c;
//	}
//	else {	//�ݽð�
//		reverseClock(6, 0);
//		//from L to B
//		map[3][6] = map[8][3];
//		map[3][7] = map[7][3];
//		map[3][8] = map[6][3];
//		//from F to L
//		map[8][3] = map[11][8];
//		map[7][3] = map[11][7];
//		map[6][3] = map[11][6];
//		//from R to F
//		map[11][8] = map[6][11];
//		map[11][7] = map[7][11];
//		map[11][6] = map[8][11];
//		//from B to R
//		map[6][9] = a;
//		map[7][9] = b;
//		map[8][9] = c;
//	}
//	//D��ũ ���߱�
//	syncD(6, 0);
//}
////������ ������
//void rRight() {	//r = 6 c = 9
//	char a, b, c;
//
//	if (s[1] == '+') {	//�ð����
//		clock(6, 9);
//		a = map[0][8];
//		b = map[1][8];
//		c = map[2][8];
//		for (int i = 0; i < 3; i++) {
//			map[3 * i][8] = map[3 * (i + 1)][8];
//			map[3 * i + 1][8] = map[3 * (i + 1) + 1][8];
//			map[3 * i + 2][8] = map[3 * (i + 1) + 2][8];
//		}
//		map[9][8] = a;
//		map[10][8] = b;
//		map[11][8] = c;
//	}
//	else {	//�ݽð�
//		reverseClock(6, 9);
//		a = map[9][8];
//		b = map[10][8];
//		c = map[11][8];
//		for (int i = 2; i >= 0; i--) {
//			map[3 * (i + 1)][8] = map[3 * i][8];
//			map[3 * (i + 1) + 1][8] = map[3 * i + 1][8];
//			map[3 * (i + 1) + 2][8] = map[3 * i + 2][8];
//		}
//		map[0][8] = a;
//		map[1][8] = b;
//		map[2][8] = c;
//	}
//	syncD(0, 6);
//}
////�޸� ������
//void rLeft() {	//r = 6 c = 3
//	char a, b, c;
//	if (s[1] == '+') {	//�ð����
//		clock(6, 3);
//		a = map[9][6];
//		b = map[10][6];
//		c = map[11][6];
//		for (int i = 2; i >= 0; i--) {
//			map[3 * (i + 1)][6] = map[3 * i][6];
//			map[3 * (i + 1) + 1][6] = map[3 * i + 1][6];
//			map[3 * (i + 1) + 2][6] = map[3 * i + 2][6];
//		}
//		map[0][6] = a;
//		map[1][6] = b;
//		map[2][6] = c;
//	}
//	else {	//�ݽð�
//		reverseClock(6, 3);
//		a = map[0][6];
//		b = map[1][6];
//		c = map[2][6];
//		for (int i = 0; i < 3; i++) {
//			map[3 * i][6] = map[3 * (i + 1)][6];
//			map[3 * i + 1][6] = map[3 * (i + 1) + 1][6];
//			map[3 * i + 2][6] = map[3 * (i + 1) + 2][6];
//		}
//		map[9][6] = a;
//		map[10][6] = b;
//		map[11][6] = c;
//	}
//	syncD(0, 6);
//}
////�ո� ������
//void rFront() {	//r = 9 c = 6
//	char a, b, c;
//	if (s[1] == '+') {	//�ð����
//		clock(9, 6);
//		a = map[8][9];
//		b = map[8][10];
//		c = map[8][11];
//		for (int i = 2; i >= 0; i--) {
//			map[8][3 * (i + 1)] = map[8][3 * i];
//			map[8][3 * (i + 1) + 1] = map[8][3 * i + 1];
//			map[8][3 * (i + 1) + 2] = map[8][3 * i + 2];
//		}
//		map[8][0] = a;
//		map[8][1] = b;
//		map[8][2] = c;
//	}
//	else {	//�ݽð�
//		reverseClock(9, 6);
//		a = map[8][0];
//		b = map[8][1];
//		c = map[8][2];
//		for (int i = 0; i < 3; i++) {
//			map[8][3 * i] = map[8][3 * (i + 1)];
//			map[8][3 * i + 1] = map[8][3 * (i + 1) + 1];
//			map[8][3 * i + 2] = map[8][3 * (i + 1) + 2];
//		}
//		map[8][9] = a;
//		map[8][10] = b;
//		map[8][11] = c;
//	}
//	syncD(6, 0);
//}
////�޸� ������
//void rBear() {	//r = 3 c = 6
//	char a, b, c;
//	if (s[1] == '+') {	//�ð����
//		clock(3, 6);
//		a = map[6][0];
//		b = map[6][1];
//		c = map[6][2];
//		for (int i = 0; i < 3; i++) {
//			map[6][3 * i] = map[6][3 * (i + 1)];
//			map[6][3 * i + 1] = map[6][3 * (i + 1) + 1];
//			map[6][3 * i + 2] = map[6][3 * (i + 1) + 2];
//		}
//		map[6][9] = a;
//		map[6][10] = b;
//		map[6][11] = c;
//	}
//	else {	//�ݽð�
//		reverseClock(3, 6);
//		a = map[6][9];
//		b = map[6][10];
//		c = map[6][11];
//		for (int i = 2; i >= 0; i--) {
//			map[6][3 * (i + 1)] = map[6][3 * i];
//			map[6][3 * (i + 1) + 1] = map[6][3 * i + 1];
//			map[6][3 * (i + 1) + 2] = map[6][3 * i + 2];
//		}
//		map[6][0] = a;
//		map[6][1] = b;
//		map[6][2] = c;
//	}
//	syncD(6, 0);
//}
////��ɿ� ���� �ٸ� �Լ� ȣ��
//void rotate() {
//	switch (s[0])
//	{
//	case 'U':
//		rUp();
//		break;
//	case 'D':
//		rDown();
//		break;
//	case 'R':
//		rRight();
//		break;
//	case 'L':
//		rLeft();
//		break;
//	case 'F':
//		rFront();
//		break;
//	case 'B':
//		rBear();
//		break;
//	}
//}
//
//void sol() {
//	rotate();
//}
//
//int main(void) {
//
//	cin >> T;
//	for (int t = 0; t < T; t++) {
//		init();
//		cin >> N;
//		for (int i = 0; i < N; i++) {
//			cin >> s;
//			sol();
//		}
//
//		printUp();
//	}
//
//	return 0;
//}