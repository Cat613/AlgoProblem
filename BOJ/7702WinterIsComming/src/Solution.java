import java.util.Scanner;

class Solution {
	static boolean[][] check;
	static Ice[] ices;
	
	public static void main(String args[]) throws Exception {

		Scanner sc = new Scanner(System.in);
		int T, N, x, y, A, B, C1, C2, M, tempX, tempY;
		int cnt, answer;
		
		T = sc.nextInt();
		
		for (int test_case = 1; test_case <= T; test_case++) {
			N = sc.nextInt();
			x = sc.nextInt();
			y = sc.nextInt();
			A = sc.nextInt();
			B = sc.nextInt();
			C1 = sc.nextInt();
			C2 = sc.nextInt();
			M = sc.nextInt();
			check = new boolean[2][Math.max(y+1, M)];
			ices = new Ice[N];
			//ice 만들기
			for(int i = 0; i < N; i++) {
				if(i == 0) {
					ices[i] = new Ice(x, y);
				}else {
					tempX = x;
					tempY = y;
					x = (A*tempX + B*tempY + C1)%M;
					y = (A*tempY + B*tempX + C2)%M;
					ices[i] = new Ice(Math.min(x, y), Math.max(x, y));
				}
			}
			
			answer = 1000000000;
			for(int i = 0; i < N; i++) {
				for(int j = ices[i].L; j <= ices[i].R; j++) {
					if(check[0][j]) {
						check[1][j] = true;
					}else {
						check[0][j] = true;
					}
				}
			}
			
			for(int i = 0; i < N; i++) {
				cnt = 0;
				for(int j = 0; j < check[0].length; j++) {
					if(check[1][j] || (check[0][j] && (j < ices[i].L || ices[i].R <j))) {
						cnt++;
					}
				}
				answer = cnt < answer ? cnt : answer;
			}
			System.out.println("#" + test_case + " " + answer);
		}
	}
	static class Ice{
		int L, R, num;
		
		Ice(int l, int r){
			this.L = l;
			this.R = r;
			this.num = r-l+1;
		}
	}
}