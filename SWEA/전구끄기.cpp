//#include <iostream>
//#include <memory.h>
//#include <string>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//
//
//struct state {
//	bool map[1001][1001];
//	bool operator==(state& a) {
//		for (int i = 0; i < 1001; i++) {
//			for (int j = 0; j < 1001; j++) {
//				if (map[i][j] != a.map[i][j])
//					return false;
//			}
//		}
//		return true;
//	}
//};
//
//
//int T, N, M;
//string answer;
//state curState;
//vector<state> stateVec;
//queue<state> Q;
//
//bool check_off(state s) {
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (!s.map[i][j]) {
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//state on_off(int n , state s) {
//	for (int i = 0; i < N; i++) {
//		s.map[n][i] = !s.map[n][i];
//		s.map[i][n] = !s.map[i][n];
//	}
//	s.map[n][n] = true;
//	return s;
//}
//
//void bfs() {
//	state f, temp;
//	stateVec.push_back(curState);
//	Q.push(curState);
//	
//	while (!Q.empty()) {
//		f = Q.front();
//		Q.pop();
//
//		for (int i = 0; i < N; i++) {
//			temp = on_off(i, f);
//			
//			if (check_off(temp)) {
//				answer = "DA";
//				return;
//			}
//
//			//front의 상태가 vector에 없으면 
//			if (find(stateVec.begin(), stateVec.end(), temp)==stateVec.end()) {
//				stateVec.push_back(temp);
//				Q.push(temp);
//			}
//		}
//	}
//	answer = "NE";
//	return;
//}
//
//void sol() {
//	
//	bfs();
//
//}
//
//
//int main() {
//	
//	int a, b;
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		cin >> N >> M;
//		memset(&curState, 0, sizeof(curState));
//		for (int i = 0; i < M; i++) {
//			cin >> a >> b;
//			curState.map[a][b] = true;
//			curState.map[b][a] = true;
//		}
//		for (int i = 0; i < N; i++) {
//			curState.map[i][i] = true;
//		}
//
//		sol();
//
//		cout << "#" << t << " " << answer << endl;
//	}
//	return 0;
//}