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
//// N*N�� N���� ���� �����Ϸ��� �� row�� �ϳ��� ���� �����ؾ� �Ѵ�. 
//// row�迭�� ���� �� row�� ������ �� �ִ� ���� col���� ��츦 �־� �������� Ȯ���ϰ�
//// �����ϴٰ� �Ǹ�Ǹ� �� ���� row�� �����ϸ� N���� ��� �����ϴٸ� answer���� 1 ���� ��Ų��.
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