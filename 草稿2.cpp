#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a, int b) {
	return a> b;
}
int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	
	sort(v.begin(), v.end(),cmp); 
	for (vector<int>::iterator it  = v.begin(); it != v.end(); it++) {
		cout << *it;
	}
	 
	return 0;
} 
