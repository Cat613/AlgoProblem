////
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//int T, N, M, answer;
//int code[8];
//string s;
//string num[10] = { "0001101" , "0011001" , "0010011" , "0111101" , "0100011" , "0110001" , "0101111" , "0111011" , "0110111" , "0001011" };
//
//
//int checkCode(string sub) {
//	string temp;
//	for (int i = 0; i*7 < sub.size(); i++) {
//		temp = sub.substr(i*7, 7);
//		for (int j = 0; j < 10; j++) {
//			if (temp == num[j]) {
//				code[i] = j;
//				break;
//			}
//		}
//	}
//
//	int odd, even;
//
//	odd = even = 0;
//
//	for (int i = 0; i < 8; i++) {
//		if (i % 2 == 0) {
//			even += code[i];
//		}
//		else {
//			odd += code[i];
//		}
//	}
//
//	if ((even * 3 + odd) % 10 == 0) {
//		return even + odd;
//	}
//
//	return 0;
//}
//
//int main() {
//	bool codechecked;
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		answer = 0;
//		codechecked = false;
//		cin >> N >> M;
//		for (int i = 0; i < N; i++) {
//			cin >> s;
//			for (int j = M-1; j >= 0; j--) {
//				if (s[j] == '1' && !codechecked) {
//					codechecked = true;
//					answer = checkCode(s.substr(j-55, 56));
//				}
//			}
//		}
//
//		cout << "#" << t << " " << answer << endl;
//	}
//	return 0;
//}