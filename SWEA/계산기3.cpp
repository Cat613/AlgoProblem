//#include <iostream>
//#include <stack>
//#include <memory.h>
//#include <string>
//
//using namespace std;
//
//int num, answer;
//int len;
//
//string s, postfix;
//
//bool check;
//
//void make_postfix() {
//	stack<char> st;
//	postfix = "";
//	for (int i = 0; i < len; i++) {
//		switch (s[i])
//		{
//		case '+':
//			if (st.empty() || st.top() == '(') {	//비어있거나 (이면 그냥 넣기
//				st.push(s[i]);
//			}
//			else {		//안 비어있으면 pop한뒤 push
//				postfix += st.top();
//				st.pop();
//				st.push(s[i]);
//			}
//			break;
//		case '*':
//			if (st.empty()) {	//비어있으면 그냥 넣기
//				st.push(s[i]);
//			}
//			else {		//안 비어있으면 우선순위 비교
//				if (st.top() == '+' || st.top() == '(') {	//+나 (면 그냥 push
//					st.push(s[i]);
//				}
//				else if(st.top() == '*'){	//*면 pop한뒤 push
//					postfix += st.top();
//					st.pop();
//					st.push(s[i]);
//				}
//			}
//			break;
//		case '(':
//			st.push(s[i]);
//			break;
//		case ')':
//			while (st.top() != '(') {
//				postfix += st.top();
//				st.pop();
//			}
//			st.pop();	//'('제거
//			break;
//
//		default:	//숫자일 때
//			postfix += s[i];
//			break;
//		}
//	}
//	while (!st.empty()) {
//		postfix += st.top();
//		st.pop();
//	}
//}
//
//int cal_postfix() {
//	stack<int> st;
//	int front = 0, back = 0;
//	int result = 0;
//
//	for (int i = 0; i < postfix.length(); i++) {
//		if (postfix[i] == '+')
//		{
//			back = st.top();
//			st.pop();
//			front = st.top();
//			st.pop();
//			result = front + back;
//			st.push(result);
//		}
//		else if (postfix[i] == '*')
//		{
//			back = st.top();
//			st.pop();
//			front = st.top();
//			st.pop();
//			result = front * back;
//			st.push(result);
//		}
//		else {
//			st.push(postfix[i]-'0');
//		}	
//	}
//	return result;
//}
//
//int main(void) {
//	for (int test_case = 1; test_case <= 10; test_case++)
//	{
//		
//		answer = 0;
//		cin >> len;
//		cin >> s;
//
//		//후위표기식으로 바꾸기
//		make_postfix();
//		//cout << postfix << endl;
//		//후위표기식 계산하기
//		answer = cal_postfix();
//
//		printf("#%d %d\n", test_case, answer);
//	}
//	return 0;
//}