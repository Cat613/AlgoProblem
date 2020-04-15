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
////dfs로 부분집합 생성후 계산 하여 최댓값 구하기
//void dfs(int r, int c, int index) {
//	if (index == M) {
//		int sum = 0, res = 0;
//		for (int i = c; i < c + M; i++) {
//			if (check[i - c]) {
//				sum += map[r][i];
//			}
//		}
//		//부분집합이 완성되고 부분집합의 합이 C보다 작으면 돈 계산
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
////(r, c)에서 M칸을 채집했을 때 가장 많이 돈을 많이 버는 겨우의 값 리턴
//void calMax(int r, int c) {
//	int sum = 0, res = 0;
//	for (int i = c; i < c + M; i++) {
//		sum += map[r][i];
//	}
//	//M칸의 모든 값의 합이 C를 넘지 않으면 모두 제곱해서 더하기
//	if (sum <= C) {
//		for (int i = c; i < c + M; i++) {
//			res += map[r][i]*map[r][i];
//		}
//		val[r][c] = res;
//	}
//	else {//C를 넘으면 부분집합을 구하여 최댓값 구하기
//		dfs(r, c, 0);
//	}
//}
//
////각 칸에서 가장 돈을 많이 벌 수 있는 값 val[][]에 채우기
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
//		//안겹치고 조합이 가능한 경우
//		if (maxr != nextr || maxc + M <= nextc || maxc - M >= nextc) {
//			break;
//		}
//		else {	//겹쳐서 조합이 불가능한 경우
//			val[nextr][nextc] = 0;
//			next = 0;
//		}
//	}
//	answer = maxval + next;
//}
//
//void sol() {
//	//val[][]채우기
//	calVal();
//
//	//두 일꾼 조합
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