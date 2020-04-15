//#include <iostream>
//#include <stack>
//#include <string>
//#include <stdio.h>
//
//using namespace std;
//
//int answer;
//int N, K, L, order_index;
//int map[100][100];
//int head_r, head_c;
//
//struct Order {
//	int t;
//	char d;
//};
//struct Dir {
//	int rd;
//	int cd;
//};
//
//Order orders[100];
//Dir r, l, up, down, current;
//
//void change_d(Dir d, char c) {
//	if (c == 'D') {			//���� ���⿡�� ���������� ��ȯ
//		if (d.rd == r.rd && d.cd == r.cd) {		//�����ʿ��� �Ʒ�
//			current = down;
//		}
//		else if (d.rd == l.rd && d.cd == l.cd)		//���ʿ��� ��
//		{
//			current = up;
//		}
//		else if (d.rd == up.rd && d.cd == up.cd)	//������ ������
//		{
//			current = r;
//		}
//		else		//�Ʒ����� ����
//		{
//			current = l;
//		}
//	}
//	else {				//���� ���⿡�� �������� ��ȯ
//		if (d.rd == r.rd && d.cd == r.cd) {		//�����ʿ��� ��
//			current = up;
//		}
//		else if (d.rd == l.rd && d.cd == l.cd)		//���ʿ��� �Ʒ�
//		{
//			current = down;
//		}
//		else if (d.rd == up.rd && d.cd == up.cd)	//������ ����
//		{
//			current = l;
//		}
//		else		//�Ʒ����� ������
//		{
//			current = r;
//		}
//	}
//}
//
//bool isIn(int r, int c) {
//	if (0 <= r && r < N && 0 <= c && c < N) {
//		return true;
//	}
//	return false;
//}
//void game_start() {
//	int next_r, next_c;
//	map[0][0] = 1;	//�� ���� ��ġ
//	current = r;		//���� ���� ������
//	while (true) {
//		answer++;	//ó���� 0->1
//		
//		//�Ӹ� ���̷̹��� ĭ�� ������ �� ������ Ȯ��
//		next_r = head_r + current.rd;
//		next_c = head_c + current.cd;
//		if (isIn(next_r, next_c) && map[next_r][next_c] <= 0) {		//�Ⱥε�����
//			//���� ĭ �Ӹ� ���̹б�
//			if (map[next_r][next_c] == 0) {		//���� ĭ�� ��� ���� ���
//				map[next_r][next_c] = map[head_r][head_c];	//�Ӹ� �� ���� �� �Ӹ� ���� ������ -1
//				for (int i = 0; i < N; i++) {
//					for (int j = 0; j < N; j++) {
//						if (map[i][j] > 0 && !(i == next_r && j == next_c)) {
//							map[i][j] -= 1;
//						}
//					}
//				}
//			}
//			else if (map[next_r][next_c] == -1) {	//���� ĭ�� ��� �ִ� ���
//				map[next_r][next_c] = map[head_r][head_c]+1;
//			}
//			head_r = next_r;
//			head_c = next_c;
//		}
//		else		//�ε�����
//		{
//			break;
//		}
//		if (answer == orders[order_index].t) {	//��� ������
//			change_d(current, orders[order_index].d);		//���� ��ȯ
//			order_index++;
//		}
//	}
//}
//
//void init() {
//	answer = 0;
//	r.rd = 0;
//	r.cd = 1;
//	l.rd = 0;
//	l.cd = -1;
//	up.rd = -1;
//	up.cd = 0;
//	down.rd = 1;
//	down.cd = 0;
//	order_index = 0;
//	head_r = 0;
//	head_c = 0;
//	cin >> N >> K;
//	for (int i = 0; i < K; i++) {
//		int r, c;
//		cin >> r >> c;
//		map[r-1][c-1] = -1;			//����� -1
//	}
//	cin >> L;
//	for (int i = 0; i < L; i++) {
//		cin >> orders[i].t >> orders[i].d;
//	}
//}
//
//int main(void) {
//
//	init();
//
//	// �� ���� ����!
//	game_start();
//
//	cout << answer;
//	return 0;
//}