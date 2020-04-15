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
//	//����
//	//���� 
//	if (ll != lm) {	//�����Ͱ� 1���� �ƴϸ�
//		sum += divideMerge(ll, lr, lm);
//	}
//	//������
//	if (rl != rm) {	//�����Ͱ� 1���� �ƴϸ�
//		sum += divideMerge(rl, rr, rm);
//	}
//
//	int li = ll, ri = rl;
//	//�պ�
//	for (int i = l; i < r; i++) {
//		//�Ѵ� ����������
//		if (li < lr && ri < rr) {
//			//���� �հ� ������ �� ���ؼ�
//			//���� ���� ũ�� ���� ���� ��ŭ sum�� �����ص� temp�� ��ġ
//			//������ ���� ũ�� �׳� temp�� ��ġ
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
//		else {	//������ ��������
//			//�� ������ �����̸�
//			if (li == lr) {
//				//������ ������ �� ���� ���̱�
//				temp[i] = arr[ri++];
//			}
//			else {	//�� ������ �������̸�
//				//���� ������ �� ���� ���̱�
//				temp[i] = arr[li++];
//			}
//		}
//	}
//	//�պ� �������� arr ����
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