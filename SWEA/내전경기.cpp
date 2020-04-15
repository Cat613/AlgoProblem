///**
// *
// * @author yangyu
// * ���� �м�
// *  >> �θ� ������ �ó����� �������� ������ �ɰ��� �Ѵ�. �����Ѱ� ? Yes or No!
// *
// * Ư�̻��� 1: �ó��� ������ ������ K����°� �Է��� �־����µ�.. �׷��� ��ü �ѿ��� �������?
// *  >> A B, C D, E F �̷��� ������ �ִ� �ο� 2K��.
// * Ư�̻��� 2: ���� ��ġ���� �� ������ ������� �ó����� �ݴ������� �����⸸ �ϸ� ��. �׷� ���� ���� �ó��� �� ���� ������ BFS
// * Ư�̻��� 3: ������ ���� ������ �ó��� ȿ���� ������� �۾��� �ؾ��ϴµ� ������ ��ȣ���ƴ� ���ڿ� �̸����� ��;;;
// *  >> �̸��� ���� ���� ��ȣ�� �ٿ��� �츮�� �ͼ��� ���� ����� �ε��� ���·� Ȱ���Ҽ� �ְ� �۾��� �غ���! *
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
//int team[101];		//team[i] = i��° ������ ���� �� 1or2 ���� �ȼ��������� 0
//bool siner[101][101];		//siner[a][b] �� true�� a��b�� �ó��� ����
//bool answer;
//map<string, int> hmap;	//<������, ������ȣ>�� �����Ǿ�����
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
//				//���� f�� i�� �ó��� ���� �� ��
//				//i�� ���� ������ �ְ� f�� ���� ���̸� �Ұ���!
//				if (team[i] != 0 && team[i] == team[f]) {
//					answer = false;
//					while (!que.empty()) {
//						que.pop();
//					}
//					return;
//				}
//				//���� �������� ������! que�� �ְ� f�� �ٸ��� ����
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
//	//�� ������ �ó��� ������ �ٸ� ���� �ֱ�.
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
//		if (hmap.find(s1) == hmap.end()) {	//s1�� ���� hmap�� �ȼ��� ������
//			hmap.insert({ s1, pCnt++ });
//		}
//		if (hmap.find(s2) == hmap.end()) {	//s2�� ���� hmap�� �ȼ��� ������
//			hmap.insert({ s2, pCnt++ });
//		}
//		//�ó��� ���� ����
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