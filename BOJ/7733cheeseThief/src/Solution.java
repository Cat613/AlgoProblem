import java.util.Scanner;

class Solution {
	static int[] xd = {0, 1, 0, -1};
	static int[] yd = {1, 0, -1, 0};
	static int N, answer;
	static int[][] cheese;
	static boolean[][] check;
	
	public static void main(String args[]) throws Exception {

		Scanner sc = new Scanner(System.in);
		int T;
		
		T = sc.nextInt();

		for (int test_case = 1; test_case <= T; test_case++) {
			N = sc.nextInt();
			cheese = new int[N][N];
			check = new boolean[N][N];
			answer = 0;
			
			for(int i = 0; i < N; i++) {
				for(int j = 0; j < N; j++) {
					cheese[i][j] = sc.nextInt();
				}
			}
			
			for(int n = 1; n < 100; n++) {
				int cnt = 0;
				eat(n);
				
				for(int i = 0; i < N; i++) {
					for(int j = 0; j < N; j++) {
						if(check[i][j]) {
							cnt++;
							fillArea(i, j);
						}
					}
				}
				answer = answer < cnt ? cnt : answer;
			}
			
			System.out.println("#"+test_case+" "+answer);
			
		}
	}
	
	public static void eat(int n) {
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < N; j++) {
				if(cheese[i][j] < n) {
					check[i][j] = false; //먹힘
				}else {
					check[i][j] = true; //안먹힘
				}
			}
		}
	}
	public static void fillArea(int x, int y) {
		int newX, newY;
		check[x][y] = false;
		for(int i = 0; i < 4; i++) {
			newX = x + xd[i];
			newY = y + yd[i];
			if( 0 <= newX && newX < N && 0 <= newY && newY < N && check[newX][newY]) {
				fillArea(newX, newY);
			}
		}
	}
}