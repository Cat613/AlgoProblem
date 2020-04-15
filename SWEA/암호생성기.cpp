////https://swexpertacademy.com/main/solvingProblem/solvingProblem.do
//
//#include <iostream>
//
//using namespace std;
//
//int pw[8];
//int arr[5] = { 1, 2, 3, 4, 5 };
//int index;
//
//int main() {
//	int T = 10;
//	int n;
//	for (int t = 1; t <= T; t++) {
//		cin >> n;
//		index = 0;
//		
//		for (int i = 0; i < 8; i++) {
//			cin >> pw[i];
//		}
//
//		while (true) {
//			pw[index % 8] -= arr[index % 5];
//			if (pw[index % 8] <= 0) break;
//			index++;
//		}
//
//		int start = index % 8;
//		pw[start] = 0;
//		start++;
//		cout << "#" << n << " ";
//		for (int i = start; i < start + 8; i++) {
//			cout << pw[i % 8] << " ";
//		}
//		cout << endl;
//	}
//
//
//	return 0;
//}