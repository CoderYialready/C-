#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	long long arr[3];
	for (int i = 0;i < 3; i++) {
		scanf("%lld",&arr[i]);
	}
	sort(arr,arr+3);
	for (int i = 0;i < 3; i++) {
		if (i == 0) printf("%d",arr[0]);
		else printf("->%d",arr[i]);
	}
 return 0; 
} 
