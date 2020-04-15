////https://www.acmicpc.net/problem/8320
//
//#include <iostream>
//
//using namespace std;
//
//int N, answer;
//
//int main() {
//	cin >> N;
//	answer = 0;
//
//	for (int i = 1; ; i++) {
//		if (i*i <= N) {
//			answer += N / i - (i - 1);
//		}
//		else {
//			break;
//		}
//	}
//
//	cout << answer;
//
//
//	return 0;
//}