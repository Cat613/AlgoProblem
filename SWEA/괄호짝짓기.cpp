//#include <cstdio>
//#include <stack>
//
//using namespace std;
//int main(void) {
//	for (int test_case = 1; test_case <= 10; test_case++)
//	{
//		int n;
//		scanf("%d\n", &n);
//		stack<char> stack1;
//		int check = 1;
//		for (int i = 0; i < n; i++)
//		{
//			char c;
//			scanf("%c", &c);
//			if (check == 0)
//				continue;
//			if (c == '(' || c == '[' || c == '{' || c == '<')
//				stack1.push(c);
//			else
//			{
//				char pop = stack1.top();
//				stack1.pop();
//				if (c / 10 != pop / 10) {
//					check = 0;
//				}
//			}
//		}
//		if (check)
//			printf("#%d 1\n", test_case);
//		else
//			printf("#%d 0\n", test_case);
//	}
//	return 0;
//}