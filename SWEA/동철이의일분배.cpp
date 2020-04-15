//#include <iostream>
//#include <algorithm>
//#include <memory.h>
//
//using namespace std;
//
//int T, N;
//int probability[16][16];
//bool selected[16];
//double answer;
//
//void sol(int person, double val) {
//	if (person == N) {
//		answer = val > answer ? val : answer;
//		return;
//	}
//
//	double nextval;
//	for (int i = 0; i < N; i++) {
//		if (!selected[i]) {
//			selected[i] = true;
//			nextval = val * (double)probability[person][i]/100;
//			if (nextval > answer) {
//				sol(person + 1, nextval);
//			}
//			selected[i] = false;
//		}
//	}
//}
//
//void init() {
//	memset(selected, 0, sizeof(selected));
//	memset(probability, 0, sizeof(probability));
//}
//
//int main() {
//
//	cin >> T;
//
//	for (int t = 1; t <= T; t++) {
//		cin >> N;
//		init();
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				cin >> probability[i][j];
//			}
//		}
//		answer = 0;
//		
//		sol(0, 1);
//		
//		answer *= 100;
//		cout << "#" << t << " ";
//		printf("%.6f\n", answer);
//	}
//
//	return 0;
//}