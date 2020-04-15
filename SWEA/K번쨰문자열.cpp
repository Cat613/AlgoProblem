//#include <iostream>
//#include <memory.h>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//#define min(a, b)((a < b)?a:b)
//
//struct SA {	//suffix array를 위한 구조체
//	int start;
//	string suffix;
//	int len;
//	int lcp;
//};
//
//int T, K, Len;
//string s, answer;
//SA *sa;
//
//bool cmp(const SA& a, const SA& b) {
//	return a.suffix < b.suffix;
//}
//
//void fillSA() {
//	for (int i = 0; i < Len; i++) {
//		sa[i].start = i;
//		sa[i].suffix = s.substr(i, Len - i);
//		sa[i].len = Len - i;
//	}
//}
//
//void fillLCP() {
//	int minlen;
//	sa[0].lcp = 0;
//	for (int i = 1; i < Len; i++) {
//		minlen = min(sa[i].len, sa[i].len);
//		int j = 0;
//		for (; j < minlen; j++) {
//			if (sa[i].suffix[j] != sa[i - 1].suffix[j]) break;
//		}
//		sa[i].lcp = j;
//	}
//}
//
//void sol() {
//	fillSA();
//	sort(sa, sa + Len, cmp);
//	fillLCP();
//	for (int i = 0; i < Len; i++) {
//		if (sa[i].len - sa[i].lcp < K) {
//			K -= sa[i].len - sa[i].lcp;
//		}
//		else {
//			answer = sa[i].suffix.substr(0, sa[i].lcp + K);
//			break;
//		}
//	}
//	if (answer == "") {
//		answer = "none";
//	}
//}
//
//void init() {
//	sa = new SA[400];
//	answer = "";
//	cin >> K;
//	cin >> s;
//	Len = s.length();
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