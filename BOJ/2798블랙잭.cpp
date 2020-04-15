////https://www.acmicpc.net/problem/2798
//
//#include <iostream>
//
//using namespace std;
//
//int N, M, answer;
//int arr[100];
//bool check[100];
//
//void sol(int r, int s, int depth) {
//	if (r == s) {
//		int sum = 0;
//		for (int i = 0; i < N; i++) {
//			if (check[i]) {
//				sum += arr[i];
//			}
//		}
//		if (answer < sum && sum <= M) {
//			answer = sum;
//		}
//		return;
//	}
//
//	if (depth == N) return;
//
//	check[depth] = true;
//	sol(r, s + 1, depth + 1);
//	check[depth] = false;
//	sol(r, s, depth + 1);
//}
//
//int main() {
//	cin >> N >> M;
//	answer = 0;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//	
//	sol(3, 0, 0);
//
//	cout << answer;
//
//
//	return 0;
//}