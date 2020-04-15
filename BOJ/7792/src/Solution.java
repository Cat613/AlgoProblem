import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;

public class Solution {
	public static void main(String[] args) {
		List<Student> s = new ArrayList<>();
		Scanner sc = new Scanner(System.in);
		int T, N;
		String name;
		MyComparator my = new MyComparator();
		T = sc.nextInt();

		for (int test_case = 1; test_case <= T; test_case++) {
			N = sc.nextInt();
			for(int i = 0; i < N; i++) {
				name = sc.nextLine();
				if(name.length() < 1) {
					name = sc.nextLine();
				}
				s.add(new Student(name));
			}
			Collections.sort(s, my);
			System.out.println("#"+test_case+" "+s.get(0).sName);
			s.clear();
		}

	}
}

class Student {
	String sName;
	String removed;
	char[] name;
	int num;
	HashSet<Character> set;
	
	Student(String s){
		sName = s;
		removed = sName.replaceAll(" ", "");
		name = removed.toCharArray();
		set = new HashSet<>();
		this.num = countNum(name);
	}
	
	int countNum(char[] name) {
		int cnt = 0;
		for(int i = 0; i < name.length; i++) {
			if(set.add(name[i])) {
				cnt++;
			}
		}
		
		return cnt;
	}
	

}

class MyComparator implements Comparator<Student> {

	@Override
	public int compare(Student o1, Student o2) {
		if(o1.num < o2.num) {
			return 1;
		}else if (o1.num == o2.num){
			return o1.sName.compareTo(o2.sName);
		}
		return -1;
	}

}