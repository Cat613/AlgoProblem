//#include <iostream>
//#include <string>
//#include <memory.h>
//#include <set>
//
//using namespace std;
//
//int answer, N, len;
//string s;
//char carr[6];
//bool check[11][6];
//set<pair<int, int>> numSet;
//
//void swapOnce(char* s, int cnt) {
//	int a = 0, b = 0;
//	char c;
//	for (int i = 0; i < len; i++) {
//		if (a != 0 && check[cnt][i]) {
//			b = i;
//		}
//		if (a == 0 && check[cnt][i]) {
//			a = i;
//		}
//	}
//	c = s[a];
//	s[a] = s[b];
//	s[b] = c;
//}
//
////
//void swapNum(int depth, int cnt, int index, char* s) {
//	char temp[6];
//	strcpy(temp, s);
//	if (depth == 2) {
//		depth = 0;
//		index = 0;
//		swapOnce(temp, cnt);
//		int num = atoi(temp);
//		cnt++;
//		if (!numSet.insert({ num, cnt }).second) {
//			return;
//		}
//		if (N == cnt) {
//			int num = atoi(temp);
//			answer = num > answer ? num : answer;
//			return;
//		}
//	}
//
//	for (int i = index; i < len; i++) {
//		if (check[cnt][i]) continue;
//		check[cnt][i] = true;
//		swapNum(depth+1, cnt, i, temp);
//		check[cnt][i] = false;
//	}
//	
//}
//
//int main() {
//	int T = 10;
//
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		answer = 0;
//		cin >> s;
//		cin >> N;
//		
//		memset(check, 0, sizeof(check));
//		len = s.length();
//		strcpy(carr, s.c_str());
//		swapNum(0, 0, 0, carr);
//
//
//		cout << "#" << t << " " << answer << endl;
//	}
//
//
//	return 0;
//}