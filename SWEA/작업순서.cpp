////https://swexpertacademy.com/main/solvingProblem/solvingProblem.do
//
//#include <iostream>
//#include <memory.h>
//#include <string>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//int V, E;
//int from, to;
//vector<int> way[1001];
//queue<int> q;
//string answer;
//
//void sol() {
//	int arr[1001] = { 0, };
//
//	for (int i = 0; i < E; i++) {
//		cin >> from >> to;
//		arr[to]++;
//		way[from].push_back(to);
//	}
//
//	for (int i = 1; i <= V; i++) {
//		if (arr[i] == 0) {
//			q.push(i);
//		}
//	}
//	int f;
//	
//	while (!q.empty()) {
//		f = q.front();
//		answer += to_string(f) + " ";
//		q.pop();
//		for (int i = 0; i < way[f].size(); i++) {
//			int candi = way[f][i];
//			if (--arr[candi] == 0) {
//				q.push(candi);
//			}
//		}
//	}
//	for (int i = 0; i <= V; i++) {
//		way[i].clear();
//		arr[i] = 0;
//	}
//
//}
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//	
//	T = 10;
//	for (test_case = 1; test_case <= T; ++test_case){
//		cin >> V >> E;
//		
//		answer = "";
//		
//		sol();
//		
//		cout << "#" << test_case << " " << answer << endl;
//	}
//	return 0;
//}