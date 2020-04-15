////https://swexpertacademy.com/main/solvingProblem/solvingProblem.do
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//long long T, N, answer;
//long long arr[1000000];
//long long buy, sell;
//void sol() {
//	answer = 0;
//	
//	int nexti;
//	for (int i = N - 1; i > 0; i--) {
//		nexti = i - 1;
//		if(arr[i] > arr[nexti]){
//			buy = sell = 0;
//			while (nexti >= 0 && arr[i] > arr[nexti]) {
//				buy += arr[nexti];
//				nexti--;
//			}
//			nexti++;
//			sell = (i - nexti)*arr[i];
//			answer += sell - buy;
//			i = nexti;
//		}
//	}
//}
//
//int main() {
//	cin >> T;
//	
//	for (int t = 1; t <= T; t++) {
//		cin >> N;
//
//		for (int i = 0; i < N; i++) {
//			cin >> arr[i];
//		}
//
//		sol();
//
//		cout << "#" << t << " " << answer << endl;
//	}
//	return 0;
//}