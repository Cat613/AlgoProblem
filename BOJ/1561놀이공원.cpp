////https://www.acmicpc.net/problem/1561
//
//#include <iostream>
//
//using namespace std;
//
//int N, M, answer;
//int arr[10000];
//bool can[10000];
//
//long long check(long long m) {
//	long long sum = 0;
//
//	for (int i = 0; i < M; i++) {
//		sum += m / (long long)arr[i];
//		if (m % (long long)arr[i] > 0) {
//			sum++;
//		}
//	}
//	
//	return sum;
//}
//
//int cal(long long m) {
//	long long sum = 0, rest;
//	for (int i = 0; i < M; i++) {
//		sum += m / (long long)arr[i];
//		if (m % (long long)arr[i] > 0) {
//			sum++;
//		}
//		else {
//			can[i] = true;
//		}
//	}
//	rest = N - sum;
//	for (int i = 0; i < M; i++) {
//		if (can[i]) {
//			rest--;
//			if (rest == 0) {
//				return i;
//			}
//		}
//	}
//	return 0;
//}
//
//void bSearch() {
//	long long l, r, mid, time = 0;
//	long long res;
//	l = 0; 
//	r = (long long)N*30;
//
//	while (l <= r) {
//		mid = (l + r) / 2;
//		res = check(mid);
//
//		if (res < N) {
//			l = mid + 1;
//			time = mid;
//		}
//		else {
//			r = mid - 1;
//		}
//	}
//
//	answer = cal(time)+1;
//
//}
//
//void sol() {
//	if (M == 1) {
//		answer = 1;
//	}
//	else if (N <= M) {
//		answer = N;
//	}
//	else {
//		bSearch();
//	}
//}
//
//void init() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	
//	cin >> N >> M;
//
//	for (int i = 0; i < M; i++) {
//		cin >> arr[i];
//	}
//
//}
//
//int main(void)
//{
//
//	init();
//	sol();
//
//	cout << answer << "\n";
//	return 0;
//
//}