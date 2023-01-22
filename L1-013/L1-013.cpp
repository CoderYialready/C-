#include <iostream>
using namespace std;
int cur(int n, int all) {
	if (n == 0) return 0;
	int temp = n;
	while (temp) {
		all *= temp;
		temp--;
	}
	return all + cur(--n, 1);
}

int main() {
	int n  =0;
	scanf("%d",&n);
	int rec = cur(n,1);
	printf("%d",rec);
    return 0;
}
