#include <iostream>
using namespace std;
int main() {
	int order[100000] = {0};
	int n = 0, k = 0, m = 0, s = 0, d = 0;	
	int check = 0, sum = 0;
	scanf("%d",&n);
	while (n--) {
		scanf("%d",&k);
		if (k == 1) {
			scanf("%d",&s);
			continue;
		}
		while (k--) {
			scanf("%d",&s);
			order[s]++;
		}
	}
	scanf("%d",&m);
	while (m--) {
		scanf("%d",&check);
		if (order[check] == 0) { 
			if (d ==  0) 
				d++;
			else
				printf(" "); 
			printf("%05d",check);
			order[check] = 1;
			sum = 1;
		}
	} 
	if (sum == 0) printf("No one is handsome");
	return 0;
}
