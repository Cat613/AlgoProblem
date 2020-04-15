//#include <iostream>
//#include <string>
//#include <queue>
//#include <memory.h>
//
//using namespace std;
//
//#define min(a, b)(a < b ? a : b)
//struct Point {
//	pair<int, int> pii;
//	int pathLen;
//	Point() {
//
//	}
//
//	Point(pair<int, int> p, int l) {
//		pii = p;
//		pathLen = l;
//	}
//	bool operator <(const Point& p) const {
//		return pathLen > p.pathLen;
//	}
//	
//};
//
//int T, N, answer;
//int map[100][100];
//int timeArr[100][100];
//int dr[4] = { 0, 1, 0, -1 };
//int dc[4] = { 1, 0, -1, 0 };
//bool visit[100][100];
//priority_queue<Point> pq;
//
//bool isIn(int r, int c) {
//	if (r >= 0 && r < N && c >= 0 && c < N) {
//		return true;
//	}
//	return false;
//}
//
//
//void dijkstra() {
//
//	timeArr[0][0] = 0;
//	
//	//처음에 모든 위치 우선순위 큐에 넣기
//	/*for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			Point temp;
//			temp.pii.first = i;
//			temp.pii.second = j;
//			temp.pathLen = timeArr[i][j];
//			pq.push(temp);
//		}
//	}*/
//	Point temp({ 0,0 }, 0);
//	pq.push(temp);
//
//	Point f;
//	int r, c, nr, nc;
//	while (!pq.empty()) {
//		f.pii = pq.top().pii;
//		f.pathLen = pq.top().pathLen;
//		pq.pop();
//		
//		r = f.pii.first;
//		c = f.pii.second;
//		visit[r][c] = true;
//		for (int i = 0; i < 4; i++) {
//			nr = r + dr[i];
//			nc = c + dc[i];
//			if (isIn(nr, nc) && !visit[nr][nc]) {
//				if(timeArr[nr][nc] > f.pathLen + map[nr][nc]){
//					timeArr[nr][nc] = f.pathLen + map[nr][nc];
//					Point p({ nr,nc }, timeArr[nr][nc]);
//					pq.push(p);
//				}
//				
//			}
//		}
//	}
//	answer = timeArr[N - 1][N - 1];
//}
//
//void sol() {
//	dijkstra();
//}
//
//void init() {
//	string s;
//	cin >> N;
//	memset(map, 0, sizeof(map));
//	memset(visit, false, sizeof(visit));
//	answer = 987654321;
//	
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			timeArr[i][j] = 987654321;
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		cin >> s;
//		for (int j = 0; j < N; j++) {
//			map[i][j] = s[j] - '0';
//		}
//	}
//}
//
//int main() {
//
//
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		init();
//		sol();
//
//		cout << "#" << t << " " << answer << endl;
//	}
//
//
//	return 0;
//}