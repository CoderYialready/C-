#include <iostream>
#include <string>
using namespace std;
int main() {
	int arr[4];
	string s;
	getline(cin,s);
	arr[0] = s[0] -'0';
	arr[1] = s[1] -'0';
	arr[2] = s[3] -'0';
	arr[3] = s[4] -'0';
	int h = arr[0]*10 + arr[1];
	int m = arr[2]*10 + arr[3];
	if (h == 0) {
		if (arr[2] == 0) printf("Only 0%d:0%d.  Too early to Dang.",h,m);
		else printf("Only %d:%d.  Too early to Dang.",h,m);
	}
	else if (0 < h && h < 12) {
		if (arr[0] == 0) {
			if (arr[2] == 0) printf("Only 0%d:0%d.  Too early to Dang.",h,m);
			else printf("Only 0%d:%d.  Too early to Dang.",h,m);
		}
		else {
			if (arr[2] == 0) printf("Only %d:0%d.  Too early to Dang.",h,m);
			else printf("Only %d:%d.  Too early to Dang.",h,m);
		}
	}
	else if (h == 12) {
		if (m == 0) printf("Only %d:0%d.  Too early to Dang.",h,m);
		else printf("Dang");
	}
	else if (h == 13) {
		printf("Dang");
		if (m == 0);
		else printf("Dang");
	}
	else {
		while (h-12) {
			printf("Dang");
			h--;
		}
		if (m == 0);
		else printf("Dang");
	}
	return 0;
}
