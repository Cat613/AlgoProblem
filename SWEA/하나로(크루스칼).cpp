//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <memory.h>
//#include <cmath>
//#include <vector>
//
//using namespace std;
//
//struct Point {
//	int x, y;
//};
//
//struct E {
//	int u, v;
//	double w;
//};
//
//오름차순 정렬 위한 함수
//bool cmp(const E& a, const E& b) {
//	return a.w < b.w;
//}
//
//int T, N;
//int depth[1000], parents[1000];
//double e, answer;
//vector<E> Es;
//Point points[1000];
//
//void makeSet(int i);
//int findSet(int i);
//void unionSet(int a, int b);
//void link(int ra, int rb);
//
//void calWeight() {
//	double len = 0;
//	
//	for (int i = 0; i < N; i++) {
//		for (int j = i+1; j < N; j++) {
//			E temp;
//			len = pow(abs(points[i].x - points[j].x), 2) + pow(abs(points[i].y - points[j].y), 2);
//			temp.u = i;
//			temp.v = j;
//			temp.w = e * len;
//			Es.push_back(temp);
//			/*Es[i * N + j].u = i;
//			Es[i * N + j].v = j;
//			Es[i * N + j].w = e * len * len;*/
//		}
//	}
//}
//
//void Kruskal() {
//	int cnt = 0;
//	disjoint set 만들기
//	for (int i = 0; i < N; i++) {
//		makeSet(i);
//	}
//
//	간선 가중치 정렬
//	sort(Es.begin(), Es.end(), cmp);
//	간선 N-1개 뽑기
//	int i = 0;
//	int v1, v2;
//	while (cnt < N - 1) {
//		v1 = Es[i].u;
//		v2 = Es[i].v;
//		if (findSet(v1) != findSet(v2)) {	//사이클을 만들지 않으면
//			unionSet(v1, v2);
//			answer += Es[i].w;
//			cnt++;
//		}
//		i++;
//	}
//}
//
//void sol() {
//	calWeight();
//	Kruskal();
//	Es.clear();
//}
//
//void init() {
//	cin >> N;
//	Es.resize(N * N / 2);
//	answer = 0;
//	for (int i = 0; i < N; i++) {
//		cin >> points[i].x;
//	}
//	for (int i = 0; i < N; i++) {
//		cin >> points[i].y;
//	}
//	cin >> e;
//}
//
//int main() {
//	long long ans;
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		
//		init();
//		sol();
//		ans = round(answer);
//		cout << "#" << t << " " << ans << "\n";
//	}
//
//	return 0;
//}
//
//
//void makeSet(int i) {
//	parents[i] = i;
//	depth[i] = 0;
//}
//
//int findSet(int i) {
//	if (i != parents[i]) {
//		parents[i] = findSet(parents[i]);
//	}
//	return parents[i];
//}
//
//void unionSet(int a, int b) {
//	link(findSet(a), findSet(b));
//}
//
//void link(int ra, int rb) {
//	if (depth[ra] > depth[rb]) {
//		parents[rb] = ra;
//	}
//	else {
//		parents[ra] = rb;
//		if (depth[ra] == depth[rb]) {
//			depth[rb]++;
//		}
//	}
//}