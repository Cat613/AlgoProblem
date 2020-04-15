///**
// *
// * @author yangyu
// * 문제 분석
// *  >> 두명 사이의 시너지를 두팀으로 무조건 쪼개야 한다. 가능한가 ? Yes or No!
// *
// * 특이사항 1: 시너지 정보의 갯수가 K개라는건 입력이 주어지는데.. 그래서 전체 총원이 몇명인지?
// *  >> A B, C D, E F 이렇게 들어오면 최대 인원 2K명.
// * 특이사항 2: 팀의 배치에서 팀 순서는 상관없이 시너지를 반대쪽으로 보내기만 하면 됨. 그럼 기준 정점 시너지 다 저쪽 보내는 BFS
// * 특이사항 3: 정점과 정점 사이의 시너지 효과를 찢어놓는 작업을 해야하는데 정점을 번호가아닌 문자열 이름으로 줌;;;
// *  >> 이름에 각각 정점 번호를 붙여서 우리가 익숙한 인접 행렬의 인덱스 형태로 활용할수 있게 작업을 해보자! *
// */
//#include <iostream>
//#include <map>
//#include <string>
//#include <queue>
//#include <memory.h>
//
//using namespace std;
//
//int T, K, pCnt;
//int team[101];		//team[i] = i번째 선수가 속한 팀 1or2 아직 안속해있으면 0
//bool siner[101][101];		//siner[a][b] 가 true면 a와b는 시너지 관계
//bool answer;
//map<string, int> hmap;	//<선수명, 선수번호>가 저정되어있음
//queue<int> que;
//
//void bfs(int n) {
//	que.push(n);
//	int f;
//	while (!que.empty()) {
//		f = que.front();
//		que.pop();
//		for (int i = 0; i < pCnt; i++) {
//			if (siner[f][i]) {
//				//선수 f와 i가 시너지 관계 일 때
//				//i의 팀이 정해져 있고 f랑 같은 팀이면 불가능!
//				if (team[i] != 0 && team[i] == team[f]) {
//					answer = false;
//					while (!que.empty()) {
//						que.pop();
//					}
//					return;
//				}
//				//팀이 안정해져 있으면! que에 넣고 f랑 다른팀 ㄱㄱ
//				if (team[i] == 0) {
//					que.push(i);
//					team[i] = team[f] == 1 ? 2 : 1;
//				}
//			}
//		}
//	}
//}
//
//void sol() {
//
//	//각 선수의 시너지 선수를 다른 팀에 넣기.
//	for (int i = 0; i < pCnt; i++) {
//		if (team[i] == 0) {
//			team[i] = 1;
//			bfs(i);
//		}
//		if (!answer) break;
//	}
//}
//
//void init() {
//	string s1, s2;
//	pCnt = 0;
//	answer = true;
//	memset(team, 0, sizeof(team));
//	memset(siner, false, sizeof(siner));
//	hmap.clear();
//
//	cin >> K;
//	for (int i = 0; i < K; i++) {
//		cin >> s1 >> s2;
//
//		if (hmap.find(s1) == hmap.end()) {	//s1이 아직 hmap에 안속해 있으면
//			hmap.insert({ s1, pCnt++ });
//		}
//		if (hmap.find(s2) == hmap.end()) {	//s2이 아직 hmap에 안속해 있으면
//			hmap.insert({ s2, pCnt++ });
//		}
//		//시너지 관계 저장
//		siner[hmap.find(s1)->second][hmap.find(s2)->second] = true;
//		siner[hmap.find(s2)->second][hmap.find(s1)->second] = true;
//	}
//}
//
//int main() {
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		init();
//		sol();
//
//		cout << "#" << t << " " << (answer ? "Yes" : "No") << endl;
//	}
//	return 0;
//}