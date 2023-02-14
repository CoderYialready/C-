#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n = 0;
	int m = 0;
	int flag = 1;
	scanf("%d",&n);
	while (n--) {
			scanf("%d",&m);
			if (m == 1) {
				printf("No\n");
				continue;
			}
			for (int i = 2; i <= sqrt(m); i++) {
				if (m%i == 0) flag = 0;
			}
			if (flag) printf("Yes\n");
			else {
				printf("No\n");
				flag = 1;
			}
	}
	return 0;
}
