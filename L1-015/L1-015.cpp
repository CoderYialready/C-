#include <iostream>
using namespace std;
int main() {
	int a = 0;
	char b;
	scanf("%d %c",&a,&b);
	int c = 0;
	if (a%2 != 0) c = a/2+1;
	else c = a/2;
	for (int i = 0; i < c; i++){
		for (int j = 0; j < a; j++) {
			putchar(b);
		}
		printf("\n");
	}
	return 0;
}
