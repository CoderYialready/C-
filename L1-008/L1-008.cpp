#include <iostream>
using namespace std;
int main() {
	int a = 0, b = 0;
	int all = 0;
	int count = 0;
	scanf("%d%d",&a, &b);
	while (a < b+ 1) {
		all += a;
		printf("%5d",a);
		count++;
		if (count == 5) {
			printf("\n");
			count = 0;.
		}
		a++;
	}
	if (count != 0) printf("\n");
	printf("Sum = %d",all);
	return 0;
}
