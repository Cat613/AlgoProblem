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
//		//���� �ϳ��� �޾��ָ鼭 ������� ������ �������ٰ� ���� ���� ���� �ֵ鵵 true���ֱ�
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