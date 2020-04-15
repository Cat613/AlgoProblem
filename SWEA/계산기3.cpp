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
//			if (st.empty() || st.top() == '(') {	//����ְų� (�̸� �׳� �ֱ�
//				st.push(s[i]);
//			}
//			else {		//�� ��������� pop�ѵ� push
//				postfix += st.top();
//				st.pop();
//				st.push(s[i]);
//			}
//			break;
//		case '*':
//			if (st.empty()) {	//��������� �׳� �ֱ�
//				st.push(s[i]);
//			}
//			else {		//�� ��������� �켱���� ��
//				if (st.top() == '+' || st.top() == '(') {	//+�� (�� �׳� push
//					st.push(s[i]);
//				}
//				else if(st.top() == '*'){	//*�� pop�ѵ� push
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
//			st.pop();	//'('����
//			break;
//
//		default:	//������ ��
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
//		//����ǥ������� �ٲٱ�
//		make_postfix();
//		//cout << postfix << endl;
//		//����ǥ��� ����ϱ�
//		answer = cal_postfix();
//
//		printf("#%d %d\n", test_case, answer);
//	}
//	return 0;
//}