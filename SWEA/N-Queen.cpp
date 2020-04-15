//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int *row;
//int T, N, answer;
//
//bool isPossible(int r) {
//	for (int i = 0; i < r; i++) {
//		if (row[i] == row[r]) {
//			return false;
//		}
//		else if (abs(i - r) == abs(row[i] - row[r])) {
//			return false;
//		}
//	}
//	return true;
//}
//
//void backtrack(int r) {
//	if (r == N) {
//		answer++;
//		return;
//	}
//
//	for (int j = 0; j < N; j++) {
//		row[r] = j;
//		if (isPossible(r)) {
//			backtrack(r + 1);
//		}
//		else {
//			row[r] = -1;
//		}
//	}
//
//}
//
//// N*N에 N개의 퀸이 존재하려면 한 row에 하나의 퀸이 존재해야 한다. 
//// row배열에 값에 각 row에 존재할 수 있는 퀸의 col값의 경우를 넣어 가능한지 확인하고
//// 가능하다고 판명되면 그 다음 row로 진행하며 N까지 모두 가능하다면 answer값을 1 증가 시킨다.
//
//int main() {
//	
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		answer = 0;
//		cin >> N;
//		row = new int[N];		//row[r] = col; -> (r,col)
//
//		for (int i = 0; i < N; i++) {
//			for (int i = 0; i < N; i++) {
//				row[i] = -1;
//			}
//			row[0] = i;
//			backtrack(1);
//		}
//
//		cout << "#" << t << " " << answer << endl;
//	}
//	return 0;
//}