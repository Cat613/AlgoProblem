//#include <iostream>
//
//using namespace std;
//
//const int MAX = 500001;
//int N;
//pair<int, int> arr[MAX];	//<a, b> a��° ������ �Ƿ� b
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
//	//�պ�
//	for (int i = l; i < r+1; i++) {
//		//�Ѵ� ����������
//		if (li < m+1 && ri < r+1) {
//			//���� �հ� ������ �� ���ؼ�
//			//���� ���� ũ�� ���� ���� ��ŭ sum�� �����ص� temp�� ��ġ
//			//������ ���� ũ�� �׳� temp�� ��ġ
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
//		else {	//������ ��������
//			//�� ������ �����̸�
//			if (li == m + 1) {
//				//������ ������ �� ���� ���̱�
//				temp[i] = arr[ri];
//				ri++;
//			}
//			else if(ri == r+1){	//�� ������ �������̸�
//				//���� ������ �� ���� ���̱�
//				temp[i] = arr[li];
//				li++;
//			}
//		}
//	}
//	
//	//�պ� �������� arr ����
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