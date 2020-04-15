//////https://www.acmicpc.net/problem/1517
////
//#include <iostream>
//
//using namespace std;
//
//struct T {
//	int val, index;
//};
//T arr[500000], tmp[500000];
//int N, ans[500000];
//
//void merge(int l, int r) {
//	if (l == r) return;
//
//	int m = (l + r) / 2;
//	merge(l, m);
//	merge(m + 1, r);
//
//	int tmp_size = 0, lidx = l, ridx = m + 1;
//	while (lidx <= m && ridx <= r) {
//		if (arr[lidx].val < arr[ridx].val) {
//			tmp[tmp_size] = arr[lidx];
//			lidx++;
//		}
//		else {
//			tmp[tmp_size] = arr[ridx];
//			ans[arr[ridx].index] += m - lidx + 1;
//			ridx++;
//		}
//		tmp_size++;
//	}
//
//	if (lidx > m) while (ridx <= r) tmp[tmp_size++] = arr[ridx++];
//	else while (lidx <= m) tmp[tmp_size++] = arr[lidx++];
//
//	for (int i = 0; i < tmp_size; i++) arr[l++] = tmp[i];
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0); cout.tie(0);
//
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i].val;
//		arr[i].index = i;
//	}
//
//	merge(0, N - 1);
//
//	for (int i = 0; i < N; i++) cout << ans[i] + 1 << '\n';
//	return 0;
//}
//
////
////#include <iostream>
////#include <vector>
////#include <algorithm>
////#include <memory.h>
////
////using namespace std;
////
////struct Seg {
////	int arr[2020202];
////	int bias;
////
////	void init(int n) {
////		memset(arr, 0, sizeof arr);
////		for (bias = 1; bias < n; bias <<= 1);
////	}
////
////	void update(int x, int v) {
////		x |= bias;
////		arr[x] = v;
////		while (x >>= 1) {
////			arr[x] = arr[x << 1] + arr[x << 1 | 1];
////		}
////	}
////
////	int query(int l, int r) {
////		l |= bias, r |= bias;
////		int lval = 0, rval = 0;
////		while (l <= r) {
////			if (l & 1) lval = lval + arr[l++];
////			if (!(r & 1)) rval = rval + arr[r--];
////			l >>= 1, r >>= 1;
////		}
////		return lval + rval;
////	}
////} tree;
////
////typedef pair<int, int> p;
////vector<p> v;
////
////int ans[505050];
////
////
////int main() {
////	ios_base::sync_with_stdio(0); cin.tie(0);
////	int n; cin >> n; v.resize(n); tree.init(n);
////	for (int i = 0; i < n; i++) {
////		int t; cin >> t;
////		v[i] = { i + 1, t };
////	}
////
////	//달리기 실력을 기준으로 오름차순으로 정렬
////	sort(v.begin(), v.end(), [&](p & a, p & b) {
////		return a.second < b.second;
////	});
////	
////	//달리기 실력이 낮은 사람부터 트리에 쿼리 보내서
////	//가장 앞부터 내 위치까지 재칠 수있는 사람 수 구해서
////	//현재위치의 사람이 가능한 가장 높은 등수 = 내 현재 위치 - 재칠 수 있는 사람
////	//답을 구한 뒤 현재 위치 1로 업데이트
////	for (auto& i : v) {
////		int idx = i.first;
////
////		ans[idx] = idx - tree.query(0, idx - 1);
////		tree.update(idx - 1, 1);
////	}
////
////	for (int i = 1; i <= n; i++) cout << ans[i] << "\n";
////}