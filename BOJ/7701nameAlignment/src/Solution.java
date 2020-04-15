/*이승 명부는 이름의 길이가 짧을수록 이 앞에 있었고, 같은 길이면 사전 순으로 앞에 있었다.

이왕 이렇게 된 김에 모든 이름을 다시 정리하고 같은 이름은 하나만 남겨놓기로 한 염라대왕을 도와주자.


[입력]

첫 번째 줄에 테스트 케이스의 수 T(1 ≤ T ≤ 50)가 주어진다.

각 테스트 케이스의 첫 번째 줄에는 이승 명부의 이름 개수 N(1 ≤ N ≤ 20,000)이 주어진다.

각 테스트 케이스의 두 번째 줄부터 N개의 줄에 걸쳐서 알파벳 소문자로 이루어진 이름들이 주어진다.

이름에는 공백이 포함되지 않으며 최소 1개, 최대 50개의 알파벳으로 이루어져 있다.*/


import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;


class Solution {
	public static void main(String args[]) throws Exception {
		
		Scanner sc = new Scanner(System.in);
		int T, N;
		List<String> names = new ArrayList<String>();
		List<String> resultList = new ArrayList<String>();
		String temp;
		
		T = sc.nextInt();

		for (int test_case = 1; test_case <= T; test_case++) {
			N = sc.nextInt();
			
			System.out.println("#"+test_case);
			for(int n = 0; n < N; n++) {
				temp = sc.next();
				if(!names.contains(temp))
				names.add(temp);
			}
			//중복제거
			//resultList = names.parallelStream().distinct().collect(Collectors.toList());
			HashSet<String> distinctData = new HashSet<String>(names);
			resultList = new ArrayList<String>(distinctData);
			Comparator<String> stringComparator = new stringComparator();
			Collections.sort(resultList, stringComparator);
			for(int n = 0; n < resultList.size(); n++) {
				System.out.println(resultList.get(n));
			}
			names.clear();
		}
	}
}
class stringComparator implements Comparator<String>{

	@Override
	public int compare(String o1, String o2) {
		if(o1.length() == o2.length()) {
			return o1.compareTo(o2);
		}else if(o1.length() > o2.length()) {
			return 1;
		}else {
			return -1;
		}
	}
	
}