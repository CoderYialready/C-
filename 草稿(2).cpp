#include <iostream>
#include <set>
using namespace std;
int main()
{
	set<double> a;
	a.insert(2.5);
	for (int i = 0; i < 6; i++) {
		a.insert(i);
	}
	for (std::set<double>::iterator it = a.begin(); it != a.end(); it++) {
		cout << *it << " ";
	}



	return 0;
}
