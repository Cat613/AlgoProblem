import java.util.HashSet;
import java.util.Scanner;

class Solution {
	static int[] dx = {0, 1, 0, -1};
	static int[] dy = {1, 0, -1, 0};
	static int answer = 0, R, C;
	static char[][] map;
	static HashSet<Character> get;
	
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
 		int T;
 		String temp;
 		T = sc.nextInt();
 		get = new HashSet<Character>();
		for (int test_case = 1; test_case <= T; test_case++) {
			
			R = sc.nextInt();
			C = sc.nextInt();
			map = new char[R][C];
			for(int i = 0; i < R; i++) {
				temp = sc.next();
				for(int j = 0; j < C; j++) {
					map[i] = temp.toCharArray();
				}
			}
			travel(0, 0, 0);
			System.out.println("#"+test_case + " " + answer);
			answer = 0;
			get.clear();
		}
	}
	public static void travel(int x, int y, int ans){
		if(get.add(map[x][y])) {
			answer = ans+1 > answer ? ans+1 : answer;
			int nextX, nextY;
			// 사방으로 확인해보기
			for(int i = 0; i < 4; i++) {
				nextX = x+dx[i];
				nextY = y+dy[i];
				if(0 <= nextX && nextX < R && 0 <= nextY && nextY < C) {
					travel(nextX, nextY, ans+1);
				}
			}
			// 사방으로 둘러보고 다시 이전으로 돌아가기 전에 원래 있었던 자리 지우기
			get.remove(map[x][y]);
		}
		
	}
}