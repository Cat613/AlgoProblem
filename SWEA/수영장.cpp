//#include <iostream>
//#include <algorithm>
//#include <memory.h>
//
//using namespace std;
//
//int T;
//int answer;
//int fee[4];
//int plan[12];
//int money[4][12];
//
//void sol() {
//	//0, 1, 2요금일 때 가격 채우기
//	for (int i = 0; i < 12; i++) {
//		money[0][i] = plan[i] * fee[0];
//		money[1][i] = plan[i] > 0 ? fee[1] : 0;
//		if (plan[i] > 0) {
//			if (i < 10) {
//				money[2][i + 2] = fee[2];
//			}
//			else {
//				money[2][11] = fee[2];
//			}
//		}
//	}
//	for (int i = 0; i < 12; i++) {
//		if (i == 0) {
//			money[3][i] = min(money[0][i], money[1][i]);
//		}
//		else if (i == 1) {
//			money[3][i] = money[3][i-1] + min(money[0][i], money[1][i]);
//		}
//		else if(i == 2){
//			if (money[2][i] == 0) {
//				money[3][i] = money[3][i - 1] + min(money[0][i], money[1][i]);
//			}
//			else {
//				money[3][i] = min(money[3][i - 1] + min(money[0][i], money[1][i]), money[2][i]);
//			}
//		}
//		else {
//			if (money[2][i] == 0) {
//				money[3][i] = money[3][i - 1] + min(money[0][i], money[1][i]);
//			}
//			else {
//				money[3][i] = min(money[3][i - 1] + min(money[0][i], money[1][i]), money[3][i - 3] + money[2][i]);
//				if (money[3][i] == money[3][i - 3] + money[2][i]) {
//					money[3][i - 2] = money[3][i] < money[3][i - 2] ? money[3][i] : money[3][i - 2];
//					money[3][i - 1] = money[3][i] < money[3][i - 1] ? money[3][i] : money[3][i - 1];
//				}
//			}
//			
//		}
//	}
//	
//	answer = money[3][11] > fee[3] ? fee[3] : money[3][11];
//	
//}
//
//int main() {
//	cin >> T;
//
//	for (int t = 1; t <= T; t++) {
//		
//		answer = 0;
//		
//		for (int i = 0; i < 4; i++) {
//			cin >> fee[i];
//		}
//
//		for (int i = 0; i < 12; i++) {
//			cin >> plan[i];
//		}
//		memset(money, 0, sizeof(money));
//		sol();
//		cout << "#" << t << " " << answer << endl;
//	}
//
//	return 0;
//}