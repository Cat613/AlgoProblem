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
//		//n�� 10�̸� base�� 16/ n�� 8�̸� base�� 8
//		while (base < n) {
//			base <<= 1;
//		}
//	}
//
//	int query(int s, int e) {	//s��° ���� e��° ���� ���� ���� ���ϴ� �Լ�
//		s += base;
//		e += base;
//		int left = 0, right = 0;
//		while (s <= e) {
//			//������ Ȧ����
//			if (s & 1) {
//				left += tree[s];	//���� ���� left�� �־��ְ�
//				s++;				//��ġ 1 ������Ų ��
//			}
//			s >>= 1;					//��ġ/2(�θ���̵�)
//			//�������� ¦����
//			if (!(e & 1)) {			
//				right += tree[e];	//���� ���� right�� �־��ְ�
//				e--;				//��ġ 1 ���ҽ�Ų��
//			}
//			e >>= 1;					//��ġ/2(�θ���̵�)
//		}
//		return left + right;
//	}
//
//	void update(int n, int val) {	//n(0~N) ��°�� ���� val�� ����
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
//		//arr���� �޸��� �Ƿ��� ���� ������� ������������ ���ĵǾ��ִ�.
//		//�Ƿ��� ���� ��������� ��ĥ �� �ִ� ����� ����.
//		//��ġ�� 0~�ڽ��� ��ġ���� �߿� �ڽź��� �Ƿ��� ���� ����� �� = �ڽ��� ��ĥ �� �ִ� ����� ��
//		//�Ƿ��� ���� ������� update�Ͽ� �Ƿ��� ���� ����� ��ĥ ���ִ��� �Ǵ��� �� �ֵ��� �Ѵ�. 
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