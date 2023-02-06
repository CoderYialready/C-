#include <bits/stdc++.h>
using namespace std;
int main( ) {
	vector<int> v;
	v.push_back(0);
	int n = 0, m= 0, k = 0;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		v.push_back(k);
	}
	if (m > n) m %= n;
	int j = (int)v.size() - m;
	for (j; j < (int)v.size(); j++) {
		if (j == (int)v.size() - m) printf("%d", v[j]);
		else printf(" %d", v[j]);
	}
	for (int i = 1; i < (int)v.size() - m; i++) {
		if (m != 0) printf(" %d", v[i]);
		else {
			if (i == (int)v.size() - m - 1) printf("%d", v[i]);
			else printf("%d ", v[i]);
		}
	}
    return 0;
}
