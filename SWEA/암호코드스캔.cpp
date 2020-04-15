////
//#include <iostream>
//#include <memory.h>
//#include <string>
//#include <vector>
//#include <set>
//
//using namespace std;
//
//char bicode_char[251];
//int T, N, M, hexlen, bilen, multiple, answer;
//int code[8], bicode_int[2000];
//int codetable[10][4] = { {3, 2, 1, 1}, {2, 2, 2, 1}, {2, 1, 2, 2},
//{1, 4, 1, 1}, {1, 1, 3, 2}, {1, 2, 3, 1}, {1, 1, 1, 4}, {1, 3, 1, 2,}, 
//{1, 2, 1, 3}, {3, 1, 1, 2} };
//set<string> sset;
//pair<set<string>::iterator, bool> pr;
//string s, bicode;
////string num[10] = { "0001101" , "0011001" , "0010011" , "0111101" , "0100011" , "0110001" , "0101111" , "0111011" , "0110111" , "0001011" };
//
//void creatbicode(string code) {
//	bicode = "";
//	//bicode string에 이진 코드 생성
//	for (int i = 0; i < code.length(); i++) {
//		switch (code[i])
//		{
//		case '0': bicode.append("0000"); break;
//		case '1': bicode.append("0001"); break;
//		case '2': bicode.append("0010"); break;
//		case '3': bicode.append("0011"); break;
//		case '4': bicode.append("0100"); break;
//		case '5': bicode.append("0101"); break;
//		case '6': bicode.append("0110"); break;
//		case '7': bicode.append("0111"); break;
//		case '8': bicode.append("1000"); break;
//		case '9': bicode.append("1001"); break;
//		case 'A': bicode.append("1010"); break;
//		case 'B': bicode.append("1011"); break;
//		case 'C': bicode.append("1100"); break;
//		case 'D': bicode.append("1101"); break;
//		case 'E': bicode.append("1110"); break;
//		case 'F': bicode.append("1111"); break;
//		}
//	}
//}
//
////2진코드의 비율을 받아서 숫자를 확인하고 리턴
//int checktable(int num[4]) {
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (num[j] != codetable[i][j]) break;
//			if (j == 3) {
//				return i;
//			}
//		}
//	}
//}
//
//int checkCode() {
//
//	int odd, even;
//
//	odd = even = 0;
//
//	for (int i = 0; i < 8; i++) {
//		if (i % 2 == 0) {
//			even += code[i];
//		}
//		else {
//			odd += code[i];
//		}
//	}
//
//	if ((even * 3 + odd) % 10 == 0) {
//		return even + odd;
//	}
//
//	return 0;
//}
//
//void make_code(string sub) {
//	int index;
//	string codeString = "";
//	for (int i = 0; i * 7 * multiple < sub.size(); i++) {
//		int num[4] = { 0, };
//		index = 0;
//		for (int j = i * 7 * multiple; j < (i + 1) * 7 * multiple; j += multiple) {
//			if (j > i * 7 * multiple && sub[j] != sub[j - 1]) {
//				index++;
//			}
//			num[index]++;
//		}
//		code[i] = checktable(num);
//		codeString.append(to_string(code[i]));
//	}
//
//	if (sset.insert(codeString).second) {
//		answer += checkCode();
//	}
//}
//
////2진코드를 생성하고 2진 코드를 일정한 길이로 나눠 0과 1의 비율을 확인하고 
//// 그 비율에 맞는 수자를 code배열에 넣어줌
//void checkNum(string scode) {
//	creatbicode(scode);
//	int startIndex, endIndex = 0, check = 0, cnt = 0;
//	bilen = bicode.size();
//	for (int i = bilen - 1; i >= 0; i--) {
//		
//		if (endIndex != 0) { 
//			cnt++;
//			if(bicode[i] != bicode[i + 1])check++; 
//		}
//		if (endIndex == 0 && bicode[i] != '0') {
//			endIndex = i;
//			check++;
//		}
//		if (check == 5) {
//			multiple = cnt / 7;
//			startIndex = endIndex - 56 * multiple + 1;
//			string temp = bicode.substr(startIndex, 56 * multiple);
//			make_code(temp);
//			
//			i = startIndex;
//			endIndex = 0;
//			check = 0;
//			cnt = 0;
//		}
//	}
//
//}
//
//int main() {
//	int end;
//	string temp;
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		answer = 0;
//		sset.clear();
//		cin >> N >> M;
//		for (int i = 0; i < N; i++) {
//			cin >> s;
//			end = 0;
//			for (int j = M - 1; j >= 0; j--) {
//				if (s[j] != '0') {
//					end = j;
//					break;
//				}
//			}
//			
//			if (end > 0) {
//				temp = s.substr(0, end+1);
//				checkNum(temp);
//			}
//		}
//
//		cout << "#" << t << " " << answer << endl;
//	}
//	return 0;
//}