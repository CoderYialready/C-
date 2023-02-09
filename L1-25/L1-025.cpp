#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	string s1, s2;
	vector<int> s3, s4;
	int all = 0;
	int flag1 = 1, flag2 = 1;
	int rec1 = 0, rec2 = 0;
	cin >> s1;
	getchar();
	getline(cin, s2);
	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] < '0' || s1[i] > '9') {
			flag1 = 0;
			break;
		}
	}
	for (int i = 0; i < s2.length(); i++) {
		if (s2[i] < '0' || s2[i] > '9') {
			flag2 = 0;
			break;
		}
	}
	if (flag1) {
		for (int i = 0; i < s1.length(); i++) {
			int j = s1[i] - '0';
			s3.push_back(j);
		}
		if (s3[0] == 0) flag1 = 0;
		if (s3.size() > 4) flag1 = 0;
		else if (s3.size() == 4 && s3[0] == 1 && s3[1] == 0 && s3[2] == 0 && s3[3] == 0) 
			rec1 = 1000;
		else if (s3.size() == 3) rec1 = s3[0]*100 + s3[1]*10 + s3[2]; 
		else if (s3.size() == 2) rec1 = s3[0]*10 + s3[1];
		else if (s3.size() == 1) rec1 = s3[0];
		else flag1 = 0;
	}
	if (flag2) {
		for (int i = 0; i < s2.length(); i++) {
			int j = s2[i] - '0';
			s4.push_back(j);
		}
		if (s4[0] == 0) flag2 = 0;
		if (s4.size() > 4) flag2 = 0;
		else if (s4.size() == 4 && s4[0] == 1 && s4[1] == 0 && s4[2] == 0 && s4[3] == 0) 
			rec2 = 1000;
		else if (s4.size() == 3) rec2 = s4[0]*100 + s4[1]*10 + s4[2]; 
		else if (s4.size() == 2) rec2 = s4[0]*10 + s4[1];
		else if (s4.size() == 1) rec2 = s4[0];
		else flag2 = 0;
	}
	if (flag1 && flag2) printf("%d + %d = %d",rec1, rec2, rec1 + rec2);
	else if (flag1 == 0 && flag2 == 1) printf("? + %d = ?",rec2);
	else if (flag1 == 1 && flag2 == 0) printf("%d + ? = ?",rec1);
	else printf("? + ? = ?");
	return 0;
}
