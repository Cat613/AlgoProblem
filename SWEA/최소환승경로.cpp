////https://www.acmicpc.net/problem/2021
//
//#include <iostream>
//#include <memory.h>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//const int MAX = 100001;
//
//
//int N, L, startLine, endLine, answer;
//int startStation, endStation;
//bool checkStation[MAX];
//bool checkLine[MAX];
//vector<int> station[MAX];
//vector<int> line[MAX];
//queue<pair<int, int>> q;
//
////bfs로 연결된 가장 짧은 길 찾기(최소환승)
//int bfs() {
//	int fLine, fval, cStation, cLine, lineCnt;
//	for (int i = 0; i < station[startStation].size(); i++) {
//		q.push({ station[startStation][i], 0 });
//		checkStation[startStation] = true;
//	}
//
//	while (!q.empty()) {
//		pair<int, int> pr = q.front();
//		fLine = pr.first;
//		fval = pr.second;
//		q.pop();
//
//		for (int i = 0; i < line[fLine].size(); i++) {
//			cStation = line[fLine][i];
//			if (checkStation[cStation]) continue;
//			checkStation[cStation] = true;
//			if (cStation == endStation) {
//				return fval;
//			}
//			lineCnt = station[cStation].size();
//			if (lineCnt > 1) {
//				for (int j = 0; j < lineCnt; j++) {
//					cLine = station[cStation][j];
//					if (!checkLine[cLine]) {
//						checkLine[cLine] = true;
//						q.push({ cLine, fval + 1 });
//					}
//				}
//			}
//		}
//	}
//
//	return -1;
//
//}
//
//void sol() {
//	
//	if (startStation == endStation) {
//		answer = 0;
//	}
//	else {
//		answer = bfs();
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	cin >> N >> L;
//
//	for (int i = 0; i < L; i++) {
//		int temp;
//		while (true) {
//			cin >> temp;
//			if (temp == -1) {
//				break;
//			}
//			station[temp].push_back(i);
//			line[i].push_back(temp);
//		}
//	}
//
//	cin >> startStation >> endStation;
//	memset(checkLine, false , sizeof(checkLine));
//	memset(checkStation, false, sizeof(checkStation));
//	answer = 0;
//
//	sol();
//
//	cout << answer;
//
//	return 0;
//}
