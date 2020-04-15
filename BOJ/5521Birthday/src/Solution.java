import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;

class Solution {
	
	static Man[] men;
	static Set<Integer> s;
	
	public static void main(String args[]) throws Exception {

		Scanner sc = new Scanner(System.in);
		s = new HashSet<>();
		
		int T, N, M, answer;
		T = sc.nextInt();

		for (int test_case = 1; test_case <= T; test_case++) {
			N = sc.nextInt();
			M = sc.nextInt();
			
			men = new Man[N+1];
			for(int i = 0; i < N+1; i++) {
				men[i] = new Man();
			}
			for(int i = 0; i < M; i++) {
				int a = sc.nextInt();
				int b = sc.nextInt();
				if(a==1) {
					men[a].addFriend(b);
				}else {
					men[a].addFriend(b);
					men[b].addFriend(a);
				}
			}
			
			find(1, 1);
			answer = s.size();
			
			System.out.println("#" + test_case + " " + answer);
			
			s.clear();
		}
	}
	
	public static void find(int n, int cnt) {
		for(int i = 0; i < men[n].friends.size(); i++) {
			int f = men[n].friends.get(i);
			s.add(f);
			if(cnt < 2) {
				find(f, cnt+1);
			}
		}
	}
}

class Man{
	List<Integer> friends;
	
	Man(){
		friends = new ArrayList<>();
	}
	
	void addFriend(int n) {
		friends.add(n);
	}
	
}