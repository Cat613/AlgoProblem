//#include <iostream>
//#include <algorithm>
//#include <memory.h>
//
//using namespace std;
//
//struct SegTree
//{
//	int tree[2020000];
//	int base;
//
//	void init(int n) {
//		memset(tree, 0, sizeof(tree));
//		base = 1;
//		//n이 10이면 base는 16/ n이 8이면 base는 8
//		while (base < n) {
//			base <<= 1;
//		}
//	}
//
//	int query(int s, int e) {	//s번째 부터 e번째 까지 값의 합을 구하는 함수
//		s += base;
//		e += base;
//		int left = 0, right = 0;
//		while (s <= e) {
//			//왼쪽이 홀수면
//			if (s & 1) {
//				left += tree[s];	//현재 값을 left에 넣어주고
//				s++;				//위치 1 증가시킨 뒤
//			}
//			s >>= 1;					//위치/2(부모로이동)
//			//오른쪽이 짝수면
//			if (!(e & 1)) {			
//				right += tree[e];	//현재 값을 right에 넣어주고
//				e--;				//위치 1 감소시킨뒤
//			}
//			e >>= 1;					//위치/2(부모로이동)
//		}
//		return left + right;
//	}
//
//	void update(int n, int val) {	//n(0~N) 번째의 값을 val로 갱신
//		n += base;
//		tree[n] = val;
//		while (n >>= 1) {
//			tree[n] = tree[n << 1] + tree[(n << 1) + 1];
//		}
//	}
//};
//
//
//int N;
//pair<int, int> arr[500000];
//int ans[500000];
//SegTree st;
//
//void sol() {
//	st.init(N);
//	sort(arr, arr + N, [&](pair<int, int> p1, pair<int, int> p2) {
//		return p1.second < p2.second;
//	});
//
//	for (int i = 0; i < N; i++) {
//		//arr에는 달리기 실력이 낮은 사람부터 오름차순으로 정렬되어있다.
//		//실력이 가장 낮은사람은 재칠 수 있는 사람이 없다.
//		//위치가 0~자신의 위치까지 중에 자신보다 실력이 낮은 사람의 수 = 자신이 재칠 수 있는 사람의 수
//		//실력이 낮은 사람부터 update하여 실력이 높은 사람이 재칠 수있는지 판단할 수 있도록 한다. 
//		int canOver = st.query(0, arr[i].first);
//		ans[arr[i].first] = arr[i].first - canOver;
//		st.update(arr[i].first, 1);
//	}
//
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0); cout.tie(0);
//	cin >> N;
//	
//	for (int i = 0; i < N; i++) {
//		arr[i].first = i;
//		cin >> arr[i].second;		
//	}
//
//	sol();
//	for (int i = 0; i < N; i++) {
//		cout <<  ans[i]+1 << "\n";
//	}
//	cin >> N;
//	return 0;
//}