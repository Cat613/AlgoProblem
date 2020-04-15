//#include <iostream>
//#include <string>
//#include <stack>
//
//using namespace std;
//
//int main(int argc, char** argv)
//{
//	string s, postfix;
//	stack<char> st;
//	int T;
//
//	cin >> s;
//	postfix = "";
//	for (int i = 0; i < s.length(); i++) {
//		if ('0' <= s[i] && s[i] <= '9') {
//			postfix += s[i];
//		}
//		else {
//			if (!st.empty()) {
//				switch (st.top())
//				{
//				case '+':
//				case '-':
//					if (s[i] == '+' || s[i] == '-') {
//						while (!st.empty()) {
//							postfix += st.top();
//							st.pop();
//						}
//						st.push(s[i]);
//					}
//					else {
//						st.push(s[i]);
//					}
//					
//					break;
//				case '*':
//				case '/':
//					while (!st.empty()) {
//						postfix += st.top();
//						st.pop();
//					}
//					st.push(s[i]);
//					break;
//				}
//			}
//			else {
//				st.push(s[i]);
//			}
//		}
//	}
//	while (!st.empty()) {
//		postfix += st.top();
//		st.pop();
//	}
//
//	cout << postfix;
//	
//	return 0;
//}