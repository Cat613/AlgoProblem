import java.util.Scanner;

class Solution {
	
	static Worker[] w;
	static int count;
	
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T, N, b, in;
		T = sc.nextInt();

		for (int test_case = 1; test_case <= T; test_case++) {
			N = sc.nextInt();
			count = 0;
			w = new Worker[N+1];
			
			for(int i = 0; i <= N; i++) {
				if(i == 0) {
					b = -1;
					in = sc.nextInt();
				}else {
					in = sc.nextInt();
					b = sc.nextInt();
				}
				w[i] = new Worker(b, in);
				check(i);
			}
			System.out.println("#" + test_case + " " + count);
		}
	}
	static void check(int n) {
		int b = w[n].boss;
		if(n == 0) {
			return;
		}else {
			if(w[b].income < w[n].income) {
				w[b].income = w[n].income;
				count++;
				check(b);
			}
		}
	}
}
class Worker{
	int boss;
	int income;
	
	Worker(int b, int in){
		boss = b;
		income = in;
	}
}