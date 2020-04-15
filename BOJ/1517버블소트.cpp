////https://www.acmicpc.net/problem/1517
//
//#include <iostream>
//
//using namespace std;
//
//int N;
//long long answer;
//int arr[500000];
//int temp[500000];
//
//long long divideMerge(int l, int r, int m) {
//	long long sum = 0;
//	int ll, lr, lm, rl, rr, rm;
//	ll = l, lr = m, lm = (ll + lr) / 2;
//	rl = m, rr = r, rm = (rl + rr) / 2;
//
//	//분할
//	//왼쪽 
//	if (ll != lm) {	//데이터가 1개가 아니면
//		sum += divideMerge(ll, lr, lm);
//	}
//	//오른쪽
//	if (rl != rm) {	//데이터가 1개가 아니면
//		sum += divideMerge(rl, rr, rm);
//	}
//
//	int li = ll, ri = rl;
//	//합병
//	for (int i = l; i < r; i++) {
//		//둘다 남아있으면
//		if (li < lr && ri < rr) {
//			//왼쪽 앞과 오른쪽 앞 비교해서
//			//왼쪽 앞이 크면 왼쪽 남은 만큼 sum에 더해준뒤 temp에 배치
//			//오른쪽 앞이 크면 그냥 temp에 배치
//			if (arr[li] > arr[ri]) {
//				sum += (lr * 1LL - li * 1LL);
//				temp[i] = arr[ri++];
//				//ri++;
//			}
//			else {
//				temp[i] = arr[li++];
//				//li++;
//			}
//		}
//		else {	//한쪽이 끝났으면
//			//그 한쪽이 왼쪽이면
//			if (li == lr) {
//				//오른쪽 나머지 다 같다 붙이기
//				temp[i] = arr[ri++];
//			}
//			else {	//그 한쪽이 오른쪽이면
//				//왼쪽 나머지 다 같다 붙이기
//				temp[i] = arr[li++];
//			}
//		}
//	}
//	//합병 끝났으면 arr 갱신
//	for (int i = l; i < r; i++) {
//		arr[i] = temp[i];
//	}
//	return sum;
//}
//
//void sol() {
//	answer = divideMerge(0, N, N / 2);
//}
//
//void init() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//}
//
//int main() {
//	init();
//	sol();
//	cout << answer;
//	return 0;
//}