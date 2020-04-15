////https://swexpertacademy.com/main/solvingProblem/solvingProblem.do
//
//#include <iostream>
//#include <string>
//#include <memory.h>
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
//bool isOper(int d) {
//	if (d == '+' || d == '-' || d == '*' || d == '/') {
//		return true;
//	}
//	return false;
//}
//
//int cal(int n) {
//	if (isOper(nodes[n].op)) {
//		int res = 0;
//		switch (nodes[n].op)
//		{
//		case '+':
//			res = cal(nodes[n].left) + cal(nodes[n].right);
//			break;
//		case '-':
//			res = cal(nodes[n].left) - cal(nodes[n].right);
//			break;
//		case '*':
//			res = cal(nodes[n].left) * cal(nodes[n].right);
//			break;
//		case '/':
//			res = cal(nodes[n].left) / cal(nodes[n].right);
//			break;
//		}
//		return res;
//	}
//	else {
//		return nodes[n].data;
//	}
//
//}
//
//int main() {
//	int T = 10;
//	int n;
//	string s;
//	for (int t = 1; t <= 10; t++) {
//
//		memset(nodes, 0, sizeof(nodes));
//		cin >> N;
//		for (int i = 0; i < N; i++) {
//			cin >> n;
//			cin >> s;
//
//			if (isOper(s[0])) {
//				nodes[n].op = s[0];
//				cin >> nodes[n].left;
//				cin >> nodes[n].right;
//			}
//			else {
//				nodes[n].data = atoi(s.c_str());
//			}
//		}
//		answer = 0;
//		answer = cal(1);
//
//		cout << "#" << t << " " << answer << endl;
//	}
//
//
//	return 0;
//}