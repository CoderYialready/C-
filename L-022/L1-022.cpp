#include <iostream>
using namespace std;
int main() {
	int n = 0, m = 0;
	int count1 = 0, count2 = 0;
	scanf("%d",&n);
	while (n--) {
		scanf("%d",&m);
		if (m%2 == 0)
			count2++;
		else
			count1++;
	}
	cout << count1 << " " << count2;
	
	return 0;
}
