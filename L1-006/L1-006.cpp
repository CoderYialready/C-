#include <iostream>
#include <cmath>
using namespace std;
int prime(long long n) {
	for (int i = 2; i < sqrt(n); i++) {
		if (n%i == 0) return 0;
	}
	return 1;
}

int main() {
	long long n = 0;
	int start = 0, l = 0;
	long long s = 1;
	scanf("%lld",&n);
	if (prime(n)) printf("1\n%lld",n);
	else {
		for (int i = 2; i < sqrt(n); i++) {
			s = 1;
			for (int j = i; s*j <= n; j++) {
				s *= j;
				if (n%s == 0 && j-i+1 > l) {
					start = i;
					l = j-i+1;
				} 
			} 
		}
		printf("%d\n",l);
        for(int i = start; i < start+l; i++) {
            if(i ==  start)
                printf("%lld",i);
            else
                printf("*%lld",i);
        }
	}
	return 0;
}









