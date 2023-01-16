#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	map<string,string> m;
	string s;
	int flag = 0;
	m["0"] = "ling";
	m["1"] = "yi";
	m["2"] = "er";
	m["3"] = "san";
	m["4"] = "si";
	m["5"] = "wu";
	m["6"] = "liu";
	m["7"] = "qi";
	m["8"] = "ba";
	m["9"] = "jiu";
	m["-"] = "fu";
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		for (map<string,string>::iterator it = m.begin(); it != m.end(); it++) {
			string s1 = it->first;
			if (s1[0]== s[i] && flag == 1) {
				cout << " " << it->second;
				break;
			}
			if (s1[0]== s[i] && flag == 0) {
				cout << it->second;
				flag++;
				break;
			} 
		}
	}
	return 0;
}
