//#include <iostream>
//#include <vector>
//#include <memory.h>
//
//using namespace std;
//
//const int MAX = 987654321;
//int T, N, M;
//int s, e, c;
//int answer;
//bool visit[401];
////인접 행렬
//int map[401][401];
////인접 리스트
//vector<pair<int, int>> list[401];
//
//void dfs(int start, int end, int dist) {
//	if (start == end && visit[start]) {
//		if (dist < answer) {
//			answer = dist;
//		}
//		return;
//	}
//	//이미 찾은 답보다 긴 길은 필요 없음
//	if (dist >= answer) return;
//	//중간에 생긴 싸이클은 필요 없음(어차피 나중에 찾을거임)
//	if (visit[start]) return;
//
//	visit[start] = true;
//	for (int i = 1; i <= N; i++) {
//		if (map[start][i] > 0) {
//			dfs(i, end, dist + map[start][i]);
//		}
//	}
//
//}
//void listDfs(int start, int end, int dist) {
//	if (start == end && visit[start]) {
//		if (dist < answer) {
//			answer = dist;
//		}
//		return;
//	}
//	//이미 찾은 답보다 긴 길은 필요 없음
//	if (dist >= answer) return;
//	//중간에 생긴 싸이클은 필요 없음(어차피 나중에 찾을거임)
//	if (visit[start]) return;
//
//	visit[start] = true;
//	for (int i = 0; i < list[start].size(); i++) {
//		
//		listDfs(list[start][i].first, end, dist + list[start][i].second);
//		
//	}
//
//}
//
//void sol() {
//	for (int i = 1; i <= N; i++) {
//		memset(visit, false, sizeof(visit));
//		listDfs(i, i, 0);
//	}
//}
//
//void init() {
//	answer = MAX;
//	memset(map, 0, sizeof(map));
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++)
//		list[i].clear();
//
//	for (int i = 0; i < M; i++) {
//		cin >> s >> e >> c;
//		map[s][e] = c;
//		list[s].push_back({ e, c });
//	}
//}
//
//int main() {
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		init();
//		sol();
//		cout << "#" << t << " " << (answer == MAX ? -1:answer) << endl;
//	}
//	return 0;
//}