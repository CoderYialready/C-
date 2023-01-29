#include <iostream>
using namespace std;
int cur(int rec, int&count1, int&count2,int a,int b) {;
	int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
	while (rec--) {
		scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
		int all1 = a1 + b1;
		if (all1 == a2 && a2 != b2) count1++;
		if (all1 == b2 && a2 != b2) count2++;
		if (a2 == b2) continue;
		if (count1 > a && count2 <= b) {
			return 1;
		}
		if (count2 > b && count1 <= a) {
			return -1;
		}
	}
}
int main() {
	int a = 0, b = 0, flag;
	int rec = 0, count1 = 0, count2 = 0, count = 0;
	int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
	scanf("%d%d",&a,&b);
	scanf("%d",&rec);
	flag = cur(rec, count1, count2,a,b); 
	if (flag == 1) printf("A\n%d",count2);
	if (flag == -1) printf("B\n%d",count1);
	return 0;
}
