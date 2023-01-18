#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
	string s1 = "AAA";
	map<int,string> m;
	m[1] = s1;
	int a = 0;
	cout << m[a+1];
	return 0;
}
