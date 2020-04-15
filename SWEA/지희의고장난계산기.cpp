//#include <iostream>
//#include <vector>
//#include <memory.h>
//
//using namespace std;
//
//int T, X, answer;
//int num[10];
//int ns[1000001];
//vector<int> canuse;
//
////dfs로 만들어진 숫자끼리 곱해서 만들 수 있는 수 저장
//void multi() {
//	for (int i = 1; i <= X; i++) {
//		if (ns[i] == 0) continue;
//		if (X % i != 0) continue;
//
//		for (int j = 1; j <= X; j++) {
//			if (ns[j] == 0) continue;
//			if (X % i != 0) continue;
//			if (i * j > X || i*j < 0) continue;
//			int newcnt = ns[i] + ns[j] + 1;
//			//i*j가 아직 안만들어졌을 때
//			if (ns[i * j] == 0) {
//				ns[i * j] = newcnt;
//			}
//			else {		//i*j가 이미 만들어져있을 때
//				ns[i * j] = ns[i * j] > newcnt ? newcnt : ns[i * j];
//			}
//		}
//	}
//}
//
////계산기로 숫자만 눌러서 만들 수 있는 수 저장
//void dfs(int count, int res) {
//	if (res > X) return;
//	ns[res] = count;
//	int temp = 0;
//	for (int i = 0; i < canuse.size(); i++) {
//		temp = res * 10 + canuse[i];
//		if (temp > X) continue;
//		if (ns[temp] > 0) continue;
//		if (temp == 0) {
//			ns[temp] = 1;
//			continue;
//		}
//		dfs(count + 1, temp);
//	}
//}
//
//void sol() {
//	dfs(0, 0);
//	if (ns[X] > 0) {
//		answer = ns[X] + 1;
//		return;
//	}
//	multi();
//	answer = ns[X] > 0 ? ns[X] + 1 : -1;
//}
//
//void init() {
//	memset(num, 0, sizeof(num));
//	memset(ns, 0, sizeof(ns));
//	canuse.clear();
//
//	for (int i = 0; i < 10; i++) {
//		cin >> num[i];
//		if (num[i] == 1) {
//			canuse.push_back(i);
//		}
//	}
//	cin >> X;
//}
//
//int main() {
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		init();
//		sol();
//
//		cout << "#" << t << " " << answer << endl;
//	}
//	return 0;
//}