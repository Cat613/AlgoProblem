//#include <iostream>
////#include <string>
//
//using namespace std;
//
//int t, t_case, answer, len;
//char map[100][100];
//string check;
//bool flag;
//
//int main(int argc, char** argv) {
//	//freopen("input.txt", "r", stdin);
//
//	for (int t_case = 1; t_case < 11; t_case++) {
//
//		answer = 0;
//		cin >> t_case;
//
//		for (int i = 0; i < 100; i++) {
//			for (int j = 0; j < 100; j++) {
//				cin >> map[i][j];
//			}
//		}
//
//		//행 검사
//		for (int i = 0; i < 100; i++) {
//			for (int j = 0; j < 100; j++) {
//				for (int k = 100-j; k > answer; k--) { //100개부터 1개짜리까지 검사
//					flag = true;
//					for (int n = j; n < j + k/2; n++) {
//						if (map[i][n] != map[i][k+j +j- n - 1]) {
//							flag = false;
//							break;
//						}
//					}
//					if (flag) {
//						answer = answer < k ? k : answer;
//						break;
//					}
//				}
//			}
//		}
//
//		//열 검사
//		for (int i = 0; i < 100; i++) {
//			for (int j = 0; j < 100; j++) {
//				for (int k = 100 - j; k > answer; k--) { //100개부터 1개짜리까지 검사
//					flag = true;
//					for (int n = j; n < j + k / 2; n++) {
//						if (map[n][i] != map[k + j + j - n - 1][i]) {
//							flag = false;
//							break;
//						}
//					}
//					if (flag) {
//						answer = answer < k ? k : answer;
//						break;
//					}
//				}
//			}
//		}
//
//		cout << "#" << t_case << " " << answer << endl;
//	}
//
//	return 0;
//}