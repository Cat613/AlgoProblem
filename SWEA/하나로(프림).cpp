//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <memory.h>
//#include <cmath>
//#include <vector>
//
//using namespace std;
//
////프림 알고리즘 사용 버전
//
//struct P {
//	long long x;
//	long long y;
//};
//
//struct Line {
//	int a;
//	int b;
//	double len;
//	Line() {
//
//	}
//	Line(int a, int b, int len) :a(a), b(b), len(len) {
//
//	}
//};
//
//struct cmp {
//	bool operator()(Line f, Line s) {
//		return f.len > s.len;
//	}
//};
//
//int T, N;
//P ps[1000];
//double len[1000][1000];
//double answer, e;
//bool check[1000];
//priority_queue<Line, vector<Line>, cmp> pq;
//
//void calLen() {
//	for (int i = 0; i < N; i++) {
//		for (int j = i + 1; j < N; j++) {
//			len[i][j] = sqrt(pow(abs(ps[i].x - ps[j].x), 2) + pow(abs(ps[i].y - ps[j].y), 2));
//			len[j][i] = len[i][j];
//		}
//	}
//}
//
//bool isCheckedAll() {
//	for (int i = 0; i < N; i++) {
//		if (!check[i]) {
//			return false;
//		}
//	}
//	return true;
//}
//bool isCycle(Line l) {
//	if (check[l.a] && check[l.b]) {
//		return true;
//	}
//	return false;
//}
//
//void sol() {
//	//거리 구하기
//	calLen();
//
//	//한 점에서 시작해서 트리 만들기
//	//0을 시작 점으로
//	check[0] = true;
//	int newp = 0;
//
//	while (!isCheckedAll()) {
//		Line t;
//		//새로운 점과 연결되는 모든 간선을 우선선위 큐에 넣음
//		for (int i = 0; i < N; i++) {
//			if (i == newp) continue;
//			pq.push(Line(newp, i, len[newp][i]));
//		}
//		//트리에 포함된 점들과 연결된 간선중 가장 짧은 간선 선택
//		t = pq.top();
//		pq.pop();
//		while (isCycle(t)) {
//			t = pq.top();
//			pq.pop();
//		}
//		answer += e * t.len * t.len;
//		if (check[t.a]) {
//			check[t.b] = true;
//			newp = t.b;
//		}
//		else {
//			check[t.a] = true;
//			newp = t.a;
//		}
//		
//	}
//}
//
//void init() {
//	memset(len, 0, sizeof(len));
//	memset(ps, 0, sizeof(ps));
//	memset(check, false, sizeof(check));
//}
//
//int main() {
//	
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		cin >> N;
//		answer = 0;
//		init();
//		for (int i = 0; i < N; i++) {
//			cin >> ps[i].x;
//		}
//		for (int i = 0; i < N; i++) {
//			cin >> ps[i].y;
//		}
//
//		cin >> e;
//
//		sol();
//
//		cout << "#" << t << " " << round(answer) << endl;
//	}
//
//
//	return 0;
//}