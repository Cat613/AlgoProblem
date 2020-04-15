//#include <iostream>
//#include <stack>
//#include <string>
//#include <stdio.h>
//
//using namespace std;
//
//int len;
//
//int main(void) {
//	for (int test_case = 1; test_case <= 10; test_case++)
//	{
//		stack<char> st;
//		string answer = "";
//		string num = "";
//
//		cin >> len;
//		cin >> num;
//
//		for (int i = len-1; i >= 0; i--) {
//			if (st.empty()) {
//				st.push(num[i]);
//			}
//			else {
//				if (st.top() == num[i]) {
//					st.pop();
//				}
//				else {
//					st.push(num[i]);
//				}
//			}
//		}
//		while (!st.empty()) {
//			answer += st.top();
//			st.pop();
//		}
//		
//		printf("#%d %s\n", test_case, answer.c_str());
//	}
//	return 0;
//}