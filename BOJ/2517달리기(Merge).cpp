//#include <iostream>
//
//using namespace std;
//
//const int MAX = 500001;
//int N;
//pair<int, int> arr[MAX];	//<a, b> a번째 선수의 실력 b
//pair<int, int> temp[MAX];
//int ans[MAX];
//
//void merge(int l, int r) {
//	if (l == r) return;
//
//	int m = (l + r) / 2;
//	merge(l, m);
//	merge(m + 1, r);
//
//	int li = l, ri = m + 1;
//	//합병
//	for (int i = l; i < r+1; i++) {
//		//둘다 남아있으면
//		if (li < m+1 && ri < r+1) {
//			//왼쪽 앞과 오른쪽 앞 비교해서
//			//왼쪽 앞이 크면 왼쪽 남은 만큼 sum에 더해준뒤 temp에 배치
//			//오른쪽 앞이 크면 그냥 temp에 배치
//			if (arr[li].second > arr[ri].second) {
//				ans[arr[ri].first] += (m + 1 - li);
//				temp[i] = arr[ri];
//				ri++;
//			}
//			else {
//				temp[i] = arr[li];
//				li++;
//			}
//		}
//		else {	//한쪽이 끝났으면
//			//그 한쪽이 왼쪽이면
//			if (li == m + 1) {
//				//오른쪽 나머지 다 같다 붙이기
//				temp[i] = arr[ri];
//				ri++;
//			}
//			else if(ri == r+1){	//그 한쪽이 오른쪽이면
//				//왼쪽 나머지 다 같다 붙이기
//				temp[i] = arr[li];
//				li++;
//			}
//		}
//	}
//	
//	//합병 끝났으면 arr 갱신
//	for (int i = l; i < r+1; i++) {
//		arr[i] = temp[i];
//	}
//}
//
//void sol() {
//	merge(0, N - 1);
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0); cout.tie(0);
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		arr[i].first = i;
//		cin >> arr[i].second;
//	}
//	sol();
//	for (int i = 0; i < N; i++) {
//		cout << ans[i] + 1 << "\n";
//	}
//	return 0;
//}