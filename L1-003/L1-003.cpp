#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int arr[10] = {0};
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		int a =s[i] - '0';
		arr[a]++;
	}
	for (int i = 0; i < 10; i++) {
		if (arr[i] > 0) {
			printf("%d:%d", i, arr[i]);
			printf("\n"); 
		}
	}
	return 0;
} 
	
	
	
	
	
	
	
	
	
	
//	while (1) {
	 
//	ull N = 0;
//	int arr[10] = {0};
//	int arr1[50] = {0};
//	int count = 0;
//	scanf("%llu",&N);
//	int b = pow(10,8);
//	printf("%d",b);
//	while (N > b) {
//		arr1[count] = N % b;
//		N /= b;
//		printf("%llu",N);
//		count++;
//	} 
//	for (int i = 0; i < 50; i++) printf("%d ",arr1[i]);
//	while (N) {
//		int n = N % 10;
//		arr[n]++;
//		N /= 10;
//	}
//	for (int i = 0; i < 10; i++) {
//		if (arr[i] > 0) {
//			printf("%d:%d", i, arr[i]);
//			printf("\n"); 
//		}
//	}
//	 printf("\n"); 
//	} 

