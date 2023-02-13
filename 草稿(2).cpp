#include <bits/stdc++.h>
using namespace std;
int n = 0, k = 0, p = 0, maxfacnum = -1;
vector<int> temp, ans, fac;
int power(int x) {
	int ans = 1;
	for (int i = 0; i < p; i++) {
		ans *= x;
	}
	return ans;
}
void init() {
	int i = 0, temp = 0;
	while (temp <= n) {
		fac.push_back(temp);
		temp = power(++i);
	}
}

void DFS(int index, int nowk, int sum, int facnum) {
	if (nowk == k && sum == n) {
		if (facnum > maxfacnum) {
			ans = temp;
			maxfacnum = facnum;
		}
		return;
	}
	if (nowk > k || sum > n) return;
	if (index - 1 >= 0) {
		temp.push_back(index);
		DFS(index, nowk + 1, sum + fac[index], facnum + index);
		temp.pop_back();
		DFS(index - 1, nowk, sum, facnum);
	}
}
int main() {
	scanf("%d%d%d", &n, &k, &p);
	init();
	DFS(fac.size()-1, 0, 0, 0);
	if (maxfacnum == -1) printf("Impossible");
	else {
		printf("%d = %d^%d", n, ans[0], p);
		for (int i = 1; i < ans.size(); i++)
		printf(" + %d^%d", ans[i], p);
	}
	return 0;
}
