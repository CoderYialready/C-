#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	map<string,int> m;
	m["hello"] = 2;
	cout << m["hello"] << endl;
	m["hella"] = 6;
	m[","] = 5;
	for (map<string,int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << it->first << " " << it->second;
	}
	cout << endl << m.begin()->first << " " << m.begin()->second << endl;
	cout << m.rbegin()->first << " " << m.rbegin()->second << endl;
	cout << m.size() << endl;
	return 0;
}
