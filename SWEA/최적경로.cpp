////https://swexpertacademy.com/main/solvingProblem/solvingProblem.do
//
//#include <iostream>
//#include <math.h>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//struct Point {
//	int first;
//	int second;
//};
//
//int T, N, answer;
//Point v[10];
//Point home;
//Point company;
//int arr[10];
//
//void cal_len() {
//
//	int cx, cy, nx, ny;
//
//	do {
//		int len = 0;
//		cx = company.first;
//		cy = company.second;
//		for (int i = 0; i < N; i++) {
//			nx = v[arr[i]].first;
//			ny = v[arr[i]].second;
//
//			len += abs(cx - nx) + abs(cy - ny);
//			cx = nx;
//			cy = ny;
//			if (len > answer) break;
//
//		}
//		nx = home.first;
//		ny = home.second;
//
//		len += abs(cx - nx) + abs(cy - ny);
//		answer = answer > len ? len : answer;
//
//	} while (next_permutation(arr, arr + N));
//
//}
//
//int main() {
//
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		answer = 987654321;
//		cin >> N;
//		int x, y;
//		for (int i = 0; i < N + 2; i++) {
//			cin >> x >> y;
//			if (i == 0) {
//				company.first = x;
//				company.second = y;
//			}
//			else if (i == 1) {
//				home.first = x;
//				home.second = y;
//			}
//			else {
//				v[i - 2] = { x, y };
//				arr[i - 2] = i - 2;
//			}
//		}
//
//		cal_len();
//
//		cout << "#" << t << " " << answer << endl;
//	}
//	return 0;
//}