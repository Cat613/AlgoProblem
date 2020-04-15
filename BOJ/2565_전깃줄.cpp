//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int N, answer;
//pair<int, int> p[101];
//int memo[501];
//
//void LIS() {
//	int bi, bj, maxval = 1;
//	memo[p[0].second] = 1;
//	for (int i = 1; i < N; i++) {
//		for (int j = 0; j < i; j++) {
//			bi = p[i].second;
//			bj = p[j].second;
//			if (bi > bj && memo[bi] <= memo[bj]) {
//				memo[bi] = memo[bj] + 1;
//				maxval = (maxval < memo[bi]) ? memo[bi] : maxval;
//			}
//		}
//		if (memo[bi] == 0) memo[bi] = 1;
//	}
//	answer = N - maxval;
//}
//
//void sol() {
//	sort(p, p + N);
//	LIS();
//}
//
//void init() {
//	int a, b;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> a >> b;
//		p[i] = { a, b };
//	}
//}
//
//int main(void){
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	
//	init();
//	sol();
//	
//	cout << answer;
//	return 0;
//
//}