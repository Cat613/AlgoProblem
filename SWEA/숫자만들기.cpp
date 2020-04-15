//#include <iostream>
//
//using namespace std;
//
//int T, N, answer, minval, maxval;
//int opnum[4], nums[12];
//
//순열만들어서 계산하여 최대 최소 찾음
//void perm(int n, int res) {
//	if (n == N-1) {
//		minval = minval > res ? res : minval;
//		maxval = maxval < res ? res : maxval;
//		return;
//	}
//
//	for (int i = 0; i < 4; i++) {
//		if (opnum[i] > 0) {
//			opnum[i]--;
//			switch (i)
//			{
//			case 0:
//				perm(n + 1, res + nums[n + 1]);
//				break;
//			case 1:
//				perm(n + 1, res - nums[n + 1]);
//				break;
//			case 2:
//				perm(n + 1, res * nums[n + 1]);
//				break;
//			case 3:
//				perm(n + 1, res / nums[n + 1]);
//				break;
//			}
//			opnum[i]++;
//		}
//	}
//}
//
//void sol() {
//	perm(0, nums[0]);
//	answer = maxval - minval;
//}
//
//void init() {
//	minval = 987654321;
//	maxval = -987654321;
//	cin >> N;
//
//	for (int i = 0; i < 4; i++) {
//		cin >> opnum[i];
//	}
//
//	for (int i = 0; i < N; i++) {
//		cin >> nums[i];
//	}
//}
//
//int main() {
//
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		
//		init();
//
//		sol();
//
//		cout << "#" << t << " " << answer << endl;
//	}
//	return 0;
//}