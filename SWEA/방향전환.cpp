//#include <iostream>
//#include <string>
//#include <memory.h>
//
//using namespace std;
//
//int answer;
//int T, x1, x2, y1, y2;
//
//
//void sol() {
//	x2 -= x1;
//	y2 -= y1;
//	x1 = 0;
//	y1 = 0;
//	x2 = x2 < 0 ? -x2 : x2;
//	y2 = y2 < 0 ? -y2 : y2;
//	if (x2 < y2) {
//		int temp = x2;
//		x2 = y2;
//		y2 = temp;
//	}
//	if (x2 % 2 == y2 % 2) {
//		answer = x2 * 2;
//	}
//	else {
//		answer = x2 * 2 - 1;
//	}
//}
//void init() {
//	cin >> x1 >> y1 >> x2 >> y2;
//}
//
//int main() {
//
//	cin >> T;
//
//	for (int t = 1; t <= T; t++) {
//		init();
//		sol();
//
//		cout << "#" << t << " " << answer << endl;
//	}
//
//	return 0;
//}