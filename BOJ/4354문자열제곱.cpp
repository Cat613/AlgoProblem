////https://www.acmicpc.net/problem/4354
//
//#include <iostream>
//#include <string>
//#include <memory.h>
//
//using namespace std;
//
//string s;
//int len, maxindex, maxval, answer;
//int slen;
//int fail[1000000];
//
//void sol(string sub) {
//	int tempans;
//	int sublen = sub.length();
//	len = 0;
//	maxval = 0;
//	maxindex = 0;
//
//	//fail = new int[sublen];
//	//memset(fail, 0, sizeof(int)*sublen);
//	for (int i = 1, j = 0; i < sublen; i++) {
//		while (j > 0 && sub[i] != sub[j]) {
//			if (maxval <= j) {
//				len = maxindex - maxval + 1;
//				tempans = (maxindex + 1) / len;
//				answer = answer < tempans ? tempans : answer;
//			}
//			j = fail[j - 1];
//		}
//		if (sub[i] == sub[j]) {
//			fail[i] = ++j;
//			if (fail[i] > maxval) {
//				maxval = fail[i];
//				maxindex = i;
//			}
//		}
//	}
//	//free(fail);
//
//	len = maxindex - maxval + 1;
//	tempans = (maxindex + 1) / len;
//	answer = answer < tempans ? tempans : answer;
//}
//int main() {
//
//	while (true) {
//		cin >> s;
//
//		if (s.compare(".") == 0) {
//			break;
//		}
//		answer = 0;
//		slen = s.length();
//		for (int i = 0; i < slen; i++) {
//			sol(s.substr(i));
//		}
//		cout << answer << endl;
//	}
//
//	return 0;
//}