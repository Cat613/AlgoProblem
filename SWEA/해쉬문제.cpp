
//
////2
////8
////Attract Charm
////Gather Collect
////Fundemental Essential
////Abundant Plentiful
////Assign Allocate
////Surprise Amaze
////Assess Estimate
////3
////Attract
////Surprise
////euducation
////10
////Bear Stand
////Famous Noted
////Characteristic Attribute
////Decrease Diminish
////Defect Flaw
////Depict Describe
////Eager Avid
////Flourish Thrive
////Huge Tremendous
////Important Crucial
////5
////treasure
////Bear
////Defect
////Huge
////hydrogen
////
////���� ������(Ű, ������)�� �Է��ϰ� Ű�� �־ �����Ͱ� ������ ������ ��ȯ ������ not find��ȯ
////
//#pragma warning(disable:C4996)
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//#include <memory.h>
//
//
//using namespace std;
//
//const int MAX_TABLE = 4096;
//const int MAX_KEY = 64;
//const int MAX_DATA = 128;
//
//struct Hash {
//	char key[MAX_KEY+1];
//	char data[MAX_DATA+1];
//};
//
//Hash Table[MAX_TABLE];
//int T, N, M;
//unsigned long _hash(const char* str);
//
//int _add(char* key, char* data) {
//	int h = _hash(key);
//	//�ؽ� ���� �̹� Ű���� ������
//	while (Table[h].key[0] != '\0') {
//		//���� Ű���� �̹� ���������
//		if (strcmp(Table[h].key, key)==0) {
//			return 0;	//������ �߰� ����
//		}
//		//�ƴϸ� �ؽ��� 1����
//		h++;
//	}
//	strcpy(Table[h].key, key);
//	strcpy(Table[h].data, data);
//	return 1;
//}
//
//int _find(char* key, char* data) {
//	int h = _hash(key);
//	int cnt = MAX_TABLE;
//	
//	while (Table[h].key[0] != '\0' && cnt--) {
//		//�ؽ��� ��ġ�� Ű���� ã������ Ű ���� ������!
//		if (strcmp(Table[h].key, key)==0) {
//			//������ ����!
//			strcpy(data, Table[h].data);
//			return 1;
//		}
//		//�ٸ��� �ؽ��� ����
//		h++;
//	}
//
//	//��ã������ not find
//	strcpy(data, "not find");
//	return 0;
//}
//
//unsigned long _hash(const char* str) {
//	unsigned long h = 5381;
//	int c;
//	while (c = *str++) {
//		h = (((h << 5) + h) + c) % MAX_TABLE;
//	}
//
//	return h % MAX_TABLE;
//}
//
//void init() {
//	for (int i = 0; i < MAX_TABLE; i++) {
//		strcpy(Table[0].key,"");
//		strcpy(Table[0].data, "");
//	}
//}
//
//int main() {
//	cin >> T;
//	for (int t = 1; t <= T; t++) {
//		string ans[100];
//		char key[MAX_KEY + 1];
//		char data[MAX_DATA + 1];
//		int h;
//		cin >> N;
//		for (int i = 0; i < N; i++) {
//			scanf("%s %s", key, data);
//			_add(key, data);
//		}
//		cin >> M;
//		for (int i = 0; i < M; i++) {
//			scanf("%s", key);
//			_find(key, data);
//			ans[i] = data;
//		}
//		cout << "#" << t << "\n";
//		for (int i = 0; i < M; i++) {
//			cout << ans[i] << "\n";
//		}
//		
//	}
//	return 0;
//}