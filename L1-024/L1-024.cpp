#include <iostream>
using namespace std;
int main() {
	int n = 0;     
	int arr[10] = {0};
	for (int i = 0; i < 8; i++) {
		arr[i] = i;
	} 
	arr[8] = 1;
	arr[9] = 2;
	scanf("%d",&n);
	printf("%d",arr[n+2]);
	return 0;
}
