////https://www.acmicpc.net/problem/2304
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//struct Col {
//	int postion;
//	int h;
//
//	bool operator <(Col &col) {
//		return this->postion < col.postion;
//	}
//};
//
//Col cols[1001];
//int N, L, H, answer;
//int maxindex, startindex, lastindex;
//int maxval, height;
//
//void sol() {
//	sort(cols, cols + N);
//
//	for (int i = 0; i < N; i++) {
//		if (cols[i].h == maxval) {
//			maxindex = i;
//			break;
//		}
//	}
//
//	int nexti;
//	//제일 높은 기둥 기준 왼쪽
//	for (int i = 0; i < maxindex; i++) {
//		nexti = i + 1;
//		while (cols[i].h > cols[nexti].h) nexti++;
//		answer += (cols[nexti].postion - cols[i].postion)*cols[i].h;
//		i = nexti-1;
//	}
//
//	//제일 높은 기둥 기준 오른쪽
//	for (int i = N-1; i > maxindex; i--) {
//		nexti = i - 1;
//		while (cols[i].h > cols[nexti].h) nexti--;
//		answer += (cols[i].postion - cols[nexti].postion)*cols[i].h;
//		i = nexti+1;
//	}
//	answer += maxval;
//}
//
//int main() {
//	cin >> N;
//	lastindex = 0;
//	startindex = 1000;
//	maxval = 0;
//	maxindex = 0;
//	for (int i = 0; i < N; i++) {
//		cin >> L >> H;
//		lastindex = lastindex < L ? L : lastindex;
//		startindex = startindex > L ? L : startindex;
//		cols[i].postion = L;
//		cols[i].h = H;
//		if (maxval < H) {
//			maxval = H;
//		}
//	}
//
//	sol();
//
//	cout << answer;
//
//
//	return 0;
//}