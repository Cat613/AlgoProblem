import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class Solution {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int T, N, C, x, p, cSum;
		double rat, answer;
		List<Coupon> coupons = new ArrayList<>();
		MyComparator my = new MyComparator();
		
		T = sc.nextInt();

		for (int test_case = 1; test_case <= T; test_case++) {
			N = sc.nextInt();
			C = sc.nextInt();
			for(int i = 0; i < N; i++) {
				x = sc.nextInt();
				p = sc.nextInt();
				rat = (double)p/x; 
				coupons.add(new Coupon(x, p, rat));
			}
			
			Collections.sort(coupons, my);
			answer = C;
			cSum = 0;
			for(int i = 0; i < N; i++) {
				x = coupons.get(i).price;
				p = coupons.get(i).percent;
				
				if(answer*p/100 > x) {
					answer *= (double)(100-p)/100;
					cSum += x;
				}else {
					break;
				}
			}
			answer += cSum;
			coupons.clear();
			System.out.println("#"+test_case+" "+answer);
		}
	}
}

class Coupon{
	int price;
	int percent;
	double ratio;
	
	Coupon(int pri, int per, double rat){
		price = pri;
		percent = per;
		ratio = rat;
	}
}
class MyComparator implements Comparator<Coupon>{
	@Override
	public int compare(Coupon o1, Coupon o2) {
		if(o1.ratio < o2.ratio) {
			return 1;
		}else {
			return -1;
		}
	}
	
}