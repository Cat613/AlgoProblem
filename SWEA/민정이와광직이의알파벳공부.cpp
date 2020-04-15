////https://swexpertacademy.com/main/solvingProblem/solvingProblem.do
//
//#include <iostream>
//#include <string>
//#include <memory.h>
//
//using namespace std;
//
//int answer, N;
//string words[15];
//bool check[15];
//bool atoz[26];
//
//void checkAtoZ() {
//	memset(atoz, false, sizeof(atoz));
//	for (int i = 0; i < N; i++) {
//		//cout << check[i] ? "1 " : "0 ";
//		if (check[i]) {
//			for (int j = 0; j < words[i].length(); j++) {
//				atoz[words[i][j]-'a'] = true;
//			}
//		}
//	}
//	//cout << endl;
//	for (int i = 0; i < 26; i++) {
//		if (!atoz[i]) {
//			return;
//		}
//	}
//	answer++;
//}
//
////n개짜리 조합 만들기
//void make_comb(int n, int depth, int pick) {
//	
//	if (n == pick) {
//		checkAtoZ();
//		return;
//	}
//	if (depth == N) {
//		return;
//	}
//	check[depth] = true;
//	make_comb(n, depth + 1, pick+1);
//	check[depth] = false;
//	make_comb(n, depth + 1, pick);
//	
//	
//}
//
//int main() {
//	int T = 10;
//	
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		answer = 0;
//		cin >> N;
//		
//		for (int i = 0; i < N; i++) {
//			cin >> words[i];
//		}
//
//		for (int i = 1; i <= N; i++) {
//			memset(check, false, sizeof(check));
//			
//			make_comb(i, 0, 0);
//		}
//		
//
//		cout << "#" << t << " " << answer << endl;
//	}
//
//
//	return 0;
//}