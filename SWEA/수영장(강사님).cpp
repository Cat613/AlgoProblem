//#include <iostream>
//using namespace std;
//
//int TC;
//int D_f, M_f, M3_f, Y_f;
//int arr[12];
//int ans;
//
//void solve(int c, int s)
//{
//	if (c >= 12)
//		ans = s;
//	else
//	{
//		if (s + D_f * arr[c] < ans)
//			solve(c + 1, s + D_f * arr[c]);
//
//		if (s + M_f < ans)
//			solve(c + 1, s + M_f);
//
//		if (s + M3_f < ans)
//			solve(c + 3, s + M3_f);
//	}
//}
//
//
//int main()
//{
//	cin >> TC;
//	for (int tc = 1; tc <= TC; tc++)
//	{
//		cin >> D_f >> M_f >> M3_f >> Y_f;
//		for (int i = 0; i < 12; i++)
//			cin >> arr[i];
//
//		ans = Y_f;
//		solve(0, 0);
//		printf("#%d %d\n", tc, ans);
//	}
//}