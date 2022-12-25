#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

void del(int k)
{
	int x = v[k-1], sz = v.size(), y = x;
	while (y < sz) y += x;
	for (y -= x; y >= x; y -= x) {
		v.erase(v.begin() + y - 1);
	}
}

int main()
{
	int ans = 0;
	int m, n;
	scanf("%d%d", &m, &n);
	for (int i = 1; i <= n; i++) {
		v.push_back(i);
	}
	del(2);
	for (int i = 2; i <= n; i++) {
		if (i-1 < v.size()) del(i);
	}
	for (int i = 0; i < v.size(); i++) {
		if (v[i] > m) ans++;
	}
	printf("%d", ans - 1);
	return 0;
}
