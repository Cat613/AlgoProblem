//#include <iostream>
//#include <memory.h>
//
//using namespace std;
//
//#define min(a, b)((a < b)?a:b)
//#define max(a, b)((a > b)?a:b)
//
//int T, N, K, answer;
//int stuff[101][2]; //[i][0] = 부피, [i][1] = 가치
//int dpTable[101][1001];	//[n][k] = n번째 물건까지 고려했을 때 k부피의 가방에 최대로 넣을 수 있는 물건의 가치
//
//void DP() {
//	int n = 0, k = 0;
//	
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= K; j++) {
//			if (stuff[i][0] > j) {
//				dpTable[i][j] = dpTable[i - 1][j];
//			}
//			else {
//				dpTable[i][j] = max(dpTable[i-1][j - stuff[i][0]] + stuff[i][1], dpTable[i - 1][j]);
//			}
//		}
//	}
//
//	answer = dpTable[N][K];
//}
//
//void sol() {
//	DP();
//}
//
//void init() {
//	answer = 0;
//	memset(stuff, 0, sizeof(stuff));
//	memset(dpTable, 0, sizeof(dpTable));
//
//	cin >> N >> K;
//
//	for (int i = 1; i <= N; i++) {
//		cin >> stuff[i][0] >> stuff[i][1];
//	}
//}
//
//int main()
//{
//	cin >> T;
//	
//	for (int t = 1; t <= T; t++){
//		init();
//		sol();
//		cout << "#" << t << " " << answer << "\n";
//	}
//	return 0;
//}