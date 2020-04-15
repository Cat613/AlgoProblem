//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <memory.h>
//
//using namespace std;
//
//struct Node {
//	int p;
//	int left;
//	int right;
//	int size;
//};
//
//int T, V, E, a, b;
//pair<int, int> answer; //answer.first = 공통조상, answer.second = 서브트리크기
//Node nodes[10001];
//vector<int> aPvec, bPvec;
//
//
//int calSize(int n) {
//	if (nodes[n].left == 0 && nodes[n].right == 0) {
//		nodes[n].size = 1;
//		return 1;
//	}
//	else {
//		int left = nodes[n].left;
//		int right = nodes[n].right;
//		int s = 0;
//		if (left > 0) s += calSize(left);
//		if (right > 0) s += calSize(right);
//		s += 1;
//
//		nodes[n].size = s;
//		return s;
//	}
//}
//
//int calParent() {
//	int ai, bi, p, len;
//	ai = a;
//	bi = b;
//	while (nodes[ai].p != 0) {
//		p = nodes[ai].p;
//		aPvec.push_back(p);
//		ai = p;
//	}
//	while (nodes[bi].p != 0) {
//		p = nodes[bi].p;
//		bPvec.push_back(p);
//		bi = p;
//	}
//
//	reverse(aPvec.begin(), aPvec.end());
//	reverse(bPvec.begin(), bPvec.end());
//
//	len = aPvec.size() > bPvec.size() ? bPvec.size() : aPvec.size();
//	for (int i = 0; i < len; i++) {
//		if (aPvec[i] != bPvec[i]) {
//			return aPvec[i - 1];
//		}
//	}
//	return -1;
//}
//
//void sol() {
//	answer.first = calParent();
//	answer.second = calSize(answer.first);
//}
//
//int main() {
//	int parent, child;
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		answer.first = 0;
//		answer.second = 0;
//		cin >> V >> E >> a >> b;
//		memset(nodes, 0, sizeof(Node)*V);
//		for (int i = 0; i < E; i++) {
//			cin >> parent >> child;
//			if (nodes[parent].left == 0) {
//				nodes[parent].left = child;
//			}
//			else {
//				nodes[parent].right = child;
//			}
//			nodes[child].p = parent;
//		}
//
//		sol();
//
//		cout << "#" << t << " " << answer.first << " " << answer.second << endl;
//	}
//	return 0;
//}