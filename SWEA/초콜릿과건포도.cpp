//#include <iostream>
//#include <memory.h>
//
//using namespace std;
//const int MAX = 987654321;
//int T, N, M, answer;
//int map[50][50];
//int memo[51][51][51][51]; //[r][c][h][w] (r,c)에서 h*w크기의 조각에서 보수로 지불해야하는 건포도의 최저값
//int cnt[51][51][51][51]; //[r][c][h][w] (r,c)에서 h*w크기의 조각에 존재하는 건포도 수
//
//int dfs(int r, int c, int h, int w) {
//	//종료
//	if (h == 1 && w == 1) {
//		cnt[r][c][h][w] = map[r][c];
//		return 0;
//	}
//	if (memo[r][c][h][w] != MAX) return memo[r][c][h][w];
//	//실행
//	
//	int total;
//	//가로로 자르기
//	for (int i = 1; i < h; i++) {
//		//윗부분
//		if (memo[r][c][i][w] == MAX) {
//			memo[r][c][i][w] = dfs(r, c, i, w);
//		}
//		//아래부분
//		if (memo[r + i][c][h - i][w] == MAX) {
//			memo[r + i][c][h - i][w] = dfs(r + i, c, h - i, w);
//		}
//		//cnt 메모이제이션 하기
//		if (cnt[r][c][h][w] == 0) {
//			cnt[r][c][h][w] = cnt[r][c][i][w] + cnt[r + i][c][h - i][w];
//		}
//		//총 합 구해서 기존 memo에 기록된 값보다 작으면 갱신
//		total = cnt[r][c][h][w] + memo[r][c][i][w] + memo[r + i][c][h - i][w];
//		memo[r][c][h][w] = memo[r][c][h][w] > total ? total : memo[r][c][h][w];
//	}
//	//세로로 자르기
//	for (int i = 1; i < w; i++) {
//		//왼쪽
//		if (memo[r][c][h][i] == MAX) {
//			memo[r][c][h][i] = dfs(r, c, h, i);
//		}
//		//오른쪽
//		if (memo[r][c + i][h][w - i] == MAX) {
//			memo[r][c + i][h][w - i] = dfs(r, c + i, h, w - i);
//		}
//		//cnt 메모이제이션 하기
//		if (cnt[r][c][h][w] == 0) {
//			cnt[r][c][h][w] = cnt[r][c][h][i] + cnt[r][c + i][h][w - i];
//		}
//		//총 합 구해서 기존 memo에 기록된 값보다 작으면 갱신
//		total = cnt[r][c][h][w] + memo[r][c][h][i] + memo[r][c + i][h][w - i];
//		memo[r][c][h][w] = memo[r][c][h][w] > total ? total : memo[r][c][h][w];
//	}
//
//	return memo[r][c][h][w];
//}
//
//void sol() {
//	//자르기
//	answer = dfs(0, 0, N, M);
//}
//
//void init() {
//	answer = 0;
//	memset(map, 0, sizeof(map));
//	
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			for (int i2 = 0; i2 < N+1; i2++) {
//				for (int j2 = 0; j2 < M+1; j2++) {
//					memo[i][j][i2][j2] = MAX;
//					cnt[i][j][i2][j2] = 0;
//				}
//			}
//		}
//	}
//}
//int main() {
//
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		init();
//		sol();
//
//		cout << "#" << t << " " << answer << endl;
//	}
//
//	return 0;
//}