#include <iostream>
#include <string>
using namespace std;
int main() {
	string s, s1, s2;
	s.resize(1);
	int n =0, rec = 0;
	scanf("%d",&n);
	getchar();
	scanf("%s",&s[0]);
	getchar();
	getline(cin, s1);
	if (n > s1.length()) {
		rec = n - s1.length();
		while(rec--) printf("%s",s.c_str());
		printf("%s",s1.c_str());
	}
	else if(n == s1.length()) printf("%s",s1.c_str());
	else {
		s2 = s1.substr(s1.length()-n);
		printf("%s",s2.c_str());
	}
	return 0;
}
