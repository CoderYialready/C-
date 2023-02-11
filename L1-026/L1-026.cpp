#include <iostream>
#include <string>
using namespace std;
int main() {
	string s = "I Love GPLT";
	for (int i = 0; i < s.length(); i++) {
		if (i == s.length() - 1) cout << s[i];
		else cout << s[i] << endl; 
	}
	return 0;
}
