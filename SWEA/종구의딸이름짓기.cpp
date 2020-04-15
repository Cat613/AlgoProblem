//#include <iostream>
//#include <vector>
//#include <string>
//#include <memory.h>
//
//using namespace std;
//
//struct Name {
//	char c;
//	vector<pair<int, int>> pos;
//};
//
//int T, N, M;
//string answer;
//char map[2000][2000];
//bool visit[2000][2000];
//Name name[4000];
//
//void fill() {
//	int r, c;
//	for (int n = 0; n < N + M - 3; n++) {
//		int size = name[n].pos.size();
//		for (int i = 0; i < size; i++) {
//			r = name[n].pos[i].first;
//			c = name[n].pos[i].second;
//			//������ Ȯ��
//			if (c + 1 < M && !visit[r][c + 1]) {
//				visit[r][c + 1] = true;
//				//���� n+1��° ���ĺ� �ȳ־����� ���ĺ��� ��ġ �־���
//				if (name[n + 1].c == '\0') {
//					name[n + 1].c = map[r][c + 1];
//					name[n + 1].pos.push_back({ r, c + 1 });
//				}
//				else {	//�̹� �̸� �־�����
//					//���� ���Ϸ��� ���ĺ� �� ������ �̸��� ��ġ ����
//					if (name[n + 1].c > map[r][c + 1]) {
//						name[n + 1].c = map[r][c + 1];
//						name[n + 1].pos.clear();
//						name[n + 1].pos.push_back({ r, c + 1 });
//					}
//					else if (name[n + 1].c == map[r][c + 1]) {	//���ϴ� ���ĺ��� ������ ��ġ �߰�
//						name[n + 1].pos.push_back({ r, c + 1 });
//					}
//				}
//			}
//			//�Ʒ� Ȯ��
//			if (r + 1 < N && !visit[r + 1][c]) {
//				visit[r + 1][c] = true;
//				//���� n+1��° ���ĺ� �ȳ־����� ���ĺ��� ��ġ �־���
//				if (name[n + 1].c == '\0') {
//					name[n + 1].c = map[r + 1][c];
//					name[n + 1].pos.push_back({ r + 1, c });
//				}
//				else {	//�̹� �̸� �־�����
//					//���� ���Ϸ��� ���ĺ� �� ������ �̸��� ��ġ ����
//					if (name[n + 1].c > map[r + 1][c]) {
//						name[n + 1].c = map[r + 1][c];
//						name[n + 1].pos.clear();
//						name[n + 1].pos.push_back({ r + 1, c });
//					}
//					else if (name[n + 1].c == map[r + 1][c]) {	//���ϴ� ���ĺ��� ������ ��ġ �߰�
//						name[n + 1].pos.push_back({ r + 1, c });
//					}
//				}
//			}
//
//		}
//	}
//
//}
//
//void sol() {
//	name[0].c = map[0][0];
//	name[0].pos.push_back({ 0, 0 });
//	fill();
//	name[N + M - 2].c = map[N - 1][M - 1];
//	for (int i = 0; i < N + M - 1; i++) {
//		answer += name[i].c;
//	}
//}
//
//void init() {
//	string s;
//	//memset(map, 0, sizeof(map));
//	memset(visit, false, sizeof(visit));
//	answer = "";
//	cin >> N >> M;
//	//memset(name, 0x00, sizeof(Name) * 4000);
//	for (int i = 0; i < N + M; i++) {
//		name[i].c = '\0';
//		name[i].pos.clear();
//	}
//	//if (name[0].c == '\0') cout << "true" << endl;
//	for (int i = 0; i < N; i++) {
//		cin >> s;
//		for (int j = 0; j < M; j++) {
//			map[i][j] = s[j];
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		init();
//		sol();
//		cout << "#" << t << " " << answer << endl;
//	}
//	return 0;
//}