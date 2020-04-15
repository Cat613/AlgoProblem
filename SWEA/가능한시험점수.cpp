//#include <iostream>
//#include <memory.h>
//
//using namespace std;
//
//int N, answer;
//int score[100];
//bool total[10001];
//
//int main() {
//	int T, max;
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		cin >> N;
//		max = 0;
//		memset(score, 0, sizeof(score));
//		memset(total, false, sizeof(total));
//		total[0] = true;
//
//		//점수 하나씩 받아주면서 현재까지 가능한 점수에다가 받은 점수 더한 애들도 true해주기
//		for (int i = 0; i < N; i++) {
//			cin >> score[i];
//			max += score[i];
//			for (int j = max; j >= 0; j--) {
//				if (total[j]) {
//					total[j + score[i]] = true;
//				}
//			}
//		}
//		answer = 0;
//		for (int i = 0; i < 10001; i++) {
//			if (total[i] > 0) answer++;
//		}
//
//		cout << "#" << t << " " << answer << endl;
//
//	}
//
//	return 0;
//}