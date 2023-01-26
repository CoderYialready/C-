#include <iostream>
#include <string>
using namespace std;
int main() {
	float a = 1, b = 1, all = 0;
	int flag = 1,rec = 0;
	int count  = 0;
	string s;
	getline(cin,s);
	rec = s.size();
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '2') count++;
	}
	if (s[0] == '-') {
		a = 1.5;
		flag = 0;
	}
	if (s[s.size()-1]%2 == 0) b = 2;
	if (flag == 0) rec--;
	all = count/(rec*1.0)*a*b;
	all *= 100;
	printf("%.2f%%",all);
	
	return 0;
}
