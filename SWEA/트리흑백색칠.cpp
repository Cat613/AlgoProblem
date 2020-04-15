//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <memory.h>
//
//using namespace std;
//
//const int MOD = 1000000007;
//int T, N, M;
//long long answer;
//vector<int> list[100001];
//long long memo[2][100001];
//
//long long dfs(int v, int color, int parent) {
//	if (memo[color][v] != 0) {
//		return memo[color][v];
//	}
//	long long ret = 1;
//	//color�� ��(0)�ΰ��
//	if (color == 0) {
//		//�ڽ� ������ ��(1)���� ĥ�� ����� ����Ǽ����� ��
//		for (int i = 0; i < list[v].size(); i++) {
//			if (list[v][i] != parent) {
//				ret *= dfs(list[v][i], 1, v);
//				ret %= MOD;
//			}
//		}
//	}
//	else {	//color�� ��(1)�� ���
//		//�ڽ� ������ ��(0)���� ĥ�� ����� ����Ǽ� ���� ��
//		//+
//		//�ڽ� ������ ��(1)���� ĥ�� ����� ����Ǽ� ���� ��
//		for (int i = 0; i < list[v].size(); i++) {
//			if (list[v][i] != parent) {
//				ret *= dfs(list[v][i], 0, v) + dfs(list[v][i], 1, v);
//				ret %= MOD;
//			}
//		}
//	}
//
//	memo[color][v] = ret;
//	return ret;
//}
//
//void sol() {
//	answer += dfs(1, 0, -1);
//	answer += dfs(1, 1, -1);
//	answer %= MOD;
//}
//
//void init() {
//	int a, b;
//	cin >> N;
//	answer = 0;
//	memset(memo, 0, sizeof(memo));
//	for (int i = 0; i < 100001; i++) {
//		list[i].clear();
//	}
//	//list.clear();
//
//	for (int i = 1; i < N; i++) {
//		cin >> a >> b;
//		list[a].push_back(b);
//		list[b].push_back(a);
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