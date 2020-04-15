//#include <iostream>
//#include <stack>
//#include <memory.h>
//
//using namespace std;
//
//int num, start, dist;
//int way1[100], way2[100];
//
//bool check;
//int main(void) {
//	for (int test_case = 1; test_case <= 10; test_case++)
//	{
//		int n;
//		stack<int> st;
//		cin >> n;
//		cin >> num;
//		check = false;
//		memset(way1, 0, sizeof(way1));
//		memset(way2, 0, sizeof(way2));
//
//		for (int i = 0; i < num; i++) {
//			cin >> start >> dist;
//			if (way1[start] == 0) {
//				way1[start] = dist;
//			}
//			else {
//				way2[start] = dist;
//			}
//		}
//
//		st.push(way1[0]);
//		if (way2[0] != 0) st.push(way2[0]);
//
//		while (!st.empty()) {
//			if (st.top() == 99) {
//				check = true;
//				break;
//			}
//			if (way1[st.top()] != 0) {
//				int temp = st.top();
//				st.pop();
//				st.push(way1[temp]);
//				if (way2[temp] != 0)
//					st.push(way2[temp]);
//			}
//			else {
//				st.pop();
//			}
//		}
//		if (check) {
//			printf("#%d 1\n", test_case);
//		}
//		else {
//			printf("#%d 0\n", test_case);
//		}
//	}
//	return 0;
//}