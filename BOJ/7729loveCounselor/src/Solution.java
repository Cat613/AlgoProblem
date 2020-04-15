import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;

class Solution {

	static Set<Integer> primes;
	static int N;
	static List<Integer> Num, answers;
	static int[] Nums;

	public static void main(String args[]) throws Exception {
		boolean[] check;
		primes = new HashSet<>();
		Num = new ArrayList<Integer>();
		answers = new ArrayList<Integer>();
		Scanner sc = new Scanner(System.in);
		Solution s = new Solution();
		int T;
		T = sc.nextInt();

		getPrime(2000);

		for (int test_case = 1; test_case <= T; test_case++) {
			N = sc.nextInt();
			check = new boolean[N];
			Nums = new int[N];

			for (int i = 0; i < N; i++) {
				// Num.add(sc.nextInt());
				Nums[i] = sc.nextInt();
				check[i] = true;
			}

			s.makeComb(Nums, 1, 0);

			System.out.print("#" + test_case);
			if (answers.size() > 0) {
				for (int i = 0; i < answers.size(); i++) {
					System.out.print(" " + answers.get(i));
				}
			} else {
				System.out.print(" -1");
			}

			System.out.println();
			answers.clear();
			Num.clear();
		}
	}

	public static void getPrime(int num) {
		int[] arr = new int[num];

		for (int i = 2; i < num; i++) {
			arr[i] = i;
		}

		for (int i = 2; i < num; i++) {
			if (arr[i] == 0) // 이미 체크된 수의 배수는 확인하지 않는다
				continue;
			for (int j = i + i; j < num; j += i) { // i를 제외한 i의 배수들은 0으로 체크
				arr[j] = 0;
			}
		}

		for (int i = 2; i < num; i++) {
			if (arr[i] != 0) {
				primes.add(arr[i]);
			}
		}

	}

	public void makeComb(int[] arr, int cnt, int candidate) {
		int[] temp = new int[arr.length - 2];
		int sum = 0;
		int newCandi = candidate;

		for (int i = 1; i < arr.length; i++) {
			int index = 0;
			sum = arr[0] + arr[i];
			if (primes.contains(sum)) {
				if (cnt == 1) {
					newCandi = arr[i];
				}
				if (cnt == N / 2) {
					answers.add(newCandi);
					return;
				}
				for (int j = 1; j < arr.length; j++) {

					if (j == i)
						continue;
					temp[index] = arr[j];
					index++;
				}
				makeComb(temp, cnt + 1, newCandi);

			}
		}
	}

}