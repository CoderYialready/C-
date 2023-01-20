#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	string s1;
	getline(cin, s);
	getline(cin, s1);
	for (string::iterator it = s.begin(); it != s.end(); it++) {
		for (string::iterator i = s1.begin(); i != s1.end(); i++) {
			if (*it == *i) 
			{
				s.erase(it);
				it--;
				break;
			}
		}
	} 
	printf("%s",s.c_str());
	return 0;
}
