//#include <iostream>
//#include <vector>
//#include <memory.h>
//
//using namespace std;
//
//const int MAX = 987654321;
//int T, N;
//int answer;
//int arr[50000];
//int s, m, e; //start mid end
//
//void sol() {
//	for (int i = 0; i < N - 1; i++) {
//		s = i;
//		m = i;
//		e = i;
//		//증가를 멈출 때까지 m증가 시키기
//		while (m + 1 < N && arr[m] < arr[m + 1]) {
//			m = m + 1;
//		}
//		//증가가 끝나면 감소가 끝날 때까지 e증가시키기
//		e = m;
//		while (e + 1 < N && arr[e] > arr[e + 1]) {
//			e = e + 1;
//		}
//		answer += (m - s) * (e - m);
//		i = e - 1;
//	}
//}
//
//void init() {
//	memset(arr, 0, sizeof(arr));
//	answer = 0;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		init();
//		sol();
//		cout << "#" << t << " " << answer << endl;
//	}
//	return 0;
//}