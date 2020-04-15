//#include <iostream>
//#include <memory.h>
//
//using namespace std;
//
//struct Mag {
//	int pos;
//	int m;
//};
//
//double answer[9];
//double leftForce, rightForce;
//int N;
//Mag mag[10];
//
//int calForce(int n, double mid) {
//	double leftForce = 0, rightForce = 0;
//	for (int i = 0; i <= n; i++) {
//		leftForce += mag[i].m / ((mid - mag[i].pos)*(mid - mag[i].pos));
//	}
//	for (int i = n + 1; i < N; i++) {
//		rightForce += mag[i].m / ((mag[i].pos - mid)*(mag[i].pos - mid));
//	}
//
//	double dif = leftForce - rightForce;
//	if (dif < 0) dif = -dif;
//
//	if (dif < 0.0000000000001) {
//		return 0; // 같음!
//	}
//
//	if (leftForce < rightForce) {
//		return -1; //오른쪽이 크니까 왼쪽으로 가야함
//	}
//	else if (leftForce > rightForce) {
//		return 1; //왼쪽이 크니까 오른쪽으로 가야함
//	}
//
//}
//
//void findBalance(int n) {
//	double left, right, mid;
//	int res;
//	left = mag[n].pos;
//	right = mag[n + 1].pos;
//
//	while (left < right) {
//		mid = (left + right) / 2;
//		res = calForce(n, mid);
//		if (res == -1) {
//			right = mid - 0.0000000000015;
//		}
//		else if (res == 1) {
//			left = mid + 0.0000000000015;
//		}
//		else {
//			answer[n] = mid;
//			return;
//		}
//	}
//	answer[n] = mid;
//	return;
//}
//
//void sol() {
//
//	//N-1개의 균형점 찾기
//	for (int i = 0; i < N - 1; i++) {
//		findBalance(i);
//	}
//}
//
//int main() {
//	int T = 10;
//
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		memset(mag, 0, sizeof(mag));
//		memset(answer, 0, sizeof(answer));
//
//		cin >> N;
//		for (int i = 0; i < N; i++) {
//			cin >> mag[i].pos;
//		}
//		for (int i = 0; i < N; i++) {
//			cin >> mag[i].m;
//		}
//
//		sol();
//
//		cout << "#" << t << " ";
//		for (int i = 0; i < N - 1; i++) {
//			cout << fixed;
//			cout.precision(10);
//			cout << answer[i] << " ";
//		}
//		cout << endl;
//	}
//
//
//	return 0;
//}