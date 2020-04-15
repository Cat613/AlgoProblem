////https://swexpertacademy.com/main/talk/solvingClub/problemView.do?solveclubId=AW_m3SLKKtMDFARY&contestProbId=AV141176AIwCFAYD&probBoxId=AW_qfuIa3KEDFAX4&type=PROBLEM&problemBoxTitle=2%EC%9B%9412%EC%9D%BC&problemBoxCnt=3
//
//#include <iostream>
//#include <string>
//#include <memory.h>
//#include <sstream>
//
//using namespace std;
//
//struct Node {
//	char op;
//	int data;
//	int left;
//	int right;
//};
//
//int N;
//int answer;
//Node nodes[1001];
//
//bool isOper(char d) {
//	if (d == '+' || d == '-' || d == '*' || d == '/') {
//		return true;
//	}
//	return false;
//}
//
//int main() {
//	int T = 10;
//	int n;
//	int cnt;
//	string s;
//	string node[4];
//	
//	for (int t = 1; t <= 10; t++) {
//
//		answer = 1;
//		cin >> N;
//		for (int i = 0; i <= N; i++) {
//			getline(cin, s);
//			cnt = 0;
//			stringstream sst(s);
//			string temp;
//			while (sst >> temp) {
//				node[cnt] = temp;
//				cnt++;
//			}
//			if (cnt > 2 && !isOper(node[1][0])) {
//				answer = 0;
//			}
//			else if (cnt == 2 && isOper(node[1][0])) {
//				answer = 0;
//			}
//
//		}
//
//		cout << "#" << t << " " << answer << endl;
//	}
//
//
//	return 0;
//}