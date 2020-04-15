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
//	if (c == 'D') {			//현재 방향에서 오른쪽으로 전환
//		if (d.rd == r.rd && d.cd == r.cd) {		//오른쪽에서 아래
//			current = down;
//		}
//		else if (d.rd == l.rd && d.cd == l.cd)		//왼쪽에서 위
//		{
//			current = up;
//		}
//		else if (d.rd == up.rd && d.cd == up.cd)	//위에서 오른쪽
//		{
//			current = r;
//		}
//		else		//아래에서 왼쪽
//		{
//			current = l;
//		}
//	}
//	else {				//현재 방향에서 왼쪽으로 전환
//		if (d.rd == r.rd && d.cd == r.cd) {		//오른쪽에서 위
//			current = up;
//		}
//		else if (d.rd == l.rd && d.cd == l.cd)		//왼쪽에서 아래
//		{
//			current = down;
//		}
//		else if (d.rd == up.rd && d.cd == up.cd)	//위에서 왼쪽
//		{
//			current = l;
//		}
//		else		//아래에서 오른쪽
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
//	map[0][0] = 1;	//뱀 시작 위치
//	current = r;		//시작 방향 오른쪽
//	while (true) {
//		answer++;	//처음에 0->1
//		
//		//머리 들이미려는 칸이 벽인지 뱀 몸인지 확인
//		next_r = head_r + current.rd;
//		next_c = head_c + current.cd;
//		if (isIn(next_r, next_c) && map[next_r][next_c] <= 0) {		//안부딛히면
//			//다음 칸 머리 들이밀기
//			if (map[next_r][next_c] == 0) {		//다음 칸에 사과 없는 경우
//				map[next_r][next_c] = map[head_r][head_c];	//머리 값 복사 후 머리 제외 나머지 -1
//				for (int i = 0; i < N; i++) {
//					for (int j = 0; j < N; j++) {
//						if (map[i][j] > 0 && !(i == next_r && j == next_c)) {
//							map[i][j] -= 1;
//						}
//					}
//				}
//			}
//			else if (map[next_r][next_c] == -1) {	//다음 칸에 사과 있는 경우
//				map[next_r][next_c] = map[head_r][head_c]+1;
//			}
//			head_r = next_r;
//			head_c = next_c;
//		}
//		else		//부딛히면
//		{
//			break;
//		}
//		if (answer == orders[order_index].t) {	//명령 있으면
//			change_d(current, orders[order_index].d);		//방향 전환
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
//		map[r-1][c-1] = -1;			//사과는 -1
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
//	// 뱀 게임 시작!
//	game_start();
//
//	cout << answer;
//	return 0;
//}