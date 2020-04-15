////https://swexpertacademy.com/main/solvingProblem/solvingProblem.do
//
//#include <iostream>
//#include <string>
//#include <memory.h>
//
//using namespace std;
//
//struct Node {
//	char c;
//	int left;
//	int right;
//};
//
//int N;
//string answer;
//Node nodes[101];
//
//void inorder(int n) {
//	if (nodes[n].left > 0) {
//		inorder(nodes[n].left);
//	}
//	answer += nodes[n].c;
//	if (nodes[n].right > 0) {
//		inorder(nodes[n].right);
//	}
//
//}
//
//int main() {
//	int T = 10;
//	int n;
//	for (int t = 1; t <= 10; t++) {
//		
//		memset(nodes, 0, sizeof(nodes));
//		cin >> N;
//		for (int i = 0; i < N; i++) {
//			cin >> n;
//			cin >> nodes[n].c;
//			if (n * 2 < N) {
//				cin >> nodes[n].left;
//				cin >> nodes[n].right;
//			}
//			else if(n*2 == N) {
//				cin >> nodes[n].left;
//			}
//		}
//		answer = "";
//		inorder(1);
//
//		cout << "#" << t << " " << answer << endl;
//	}
//	
//
//	return 0;
//}