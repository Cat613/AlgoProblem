//#include <iostream>
//#include <memory.h>
//
//using namespace std;
//
//#define max(a, b)((a > b)? a: b)
//
//int answer;
//int N, arr[10002];
//int memo[10002][3]; 
//
//
//int dp(int n, int pick) {
//	if (memo[n][pick] != -1) return memo[n][pick];
//	int a, b, c;
//	
//	switch (pick)
//	{
//	case 0:
//		memo[n][pick] = max(dp(n - 1, 0), max(dp(n - 1, 1), dp(n - 1, 2)));
//		break;
//	case 1:
//		memo[n][pick] = dp(n - 1, 0) + arr[n];
//		break;
//	case 2:
//		memo[n][pick] = dp(n - 1, 1) + arr[n];
//		break;
//	}
//
//	return memo[n][pick];
//}
//
//void sol() {
//	memo[1][0] = 0;					//1¹øÀÜ ¼±ÅÃ ¾ÈÇÒ°æ¿ì ÃÖ´ñ°ª
//	memo[1][1] = arr[1];			//1¹øÀÜ ¼±ÅÃÇÒ °æ¿ì ÃÖ´ñ°ª
//	memo[1][2] = arr[1];			//1¹øÀÜ°ú ÀÌÀüÀÜ ¸ðµÎ ¼±ÅÃÇÒ °æ¿ì ÃÖ´ñ°ª
//	answer = max(max(dp(N, 0), dp(N, 1)), dp(N, 2));
//}
//
//void init() {
//	cin >> N;
//	memset(memo, -1, sizeof(memo));
//	answer = 0;
//	
//	for (int i = 1; i <= N; i++) {
//		cin >> arr[i];
//	}
//	
//}
//
//int main() {
//	init();
//	sol();
//	cout << answer;
//	return 0;
//}