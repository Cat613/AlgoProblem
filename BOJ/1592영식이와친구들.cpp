////https://www.acmicpc.net/problem/1592
//
//#include <iostream>
//
//using namespace std;
//
//int N, M, L, answer;
//int arr[1001];
//
//int main() {
//	cin >> N >> M >> L;
//	answer = 0;
//	int index = 0;
//	arr[0] = 1;
//	while (true) {
//		if (arr[index] == M) {
//			break;
//		}
//		else if (arr[index] % 2 == 1) {	//Ȧ�� �ð����
//			answer++;
//			index = (index + L) % N;
//			arr[index]++;
//		}
//		else {	//¦�� �ݽð����
//			answer++;
//			index = (N + index - L) % N;
//			arr[index]++;
//		}
//
//	}
//
//	cout << answer;
//
//
//	return 0;
//}