#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <set>
using namespace std;
const int maxn = 99100;
int arr[maxn];
int main() {
	int n = 0, m = 0, k = 0, temp = 0, relation = 0;
	set<string> s;
	int sa, sb;
	string s1, s2, s3, s4, ans;
	scanf("%d%d%d", &n, &m, &k);
	while (m--) {
		cin >> s1 >> s2 >> relation;
		s3 = s1 + s2;
		temp = stoi(s3);
		arr[temp] = relation;
		s3 = s2 + s1;
		temp = stoi(s3);
		arr[temp] = relation;
	}
	while (k--) {
		bool flag = true;
		cin >> s1 >> s2;
		s3 = s1 + s2;
		sa = (int)s1.length();
		sb = (int)s2.length();
		temp = stoi(s3);
		if (arr[temp] == 1) printf("No problem\n");
		else if (arr[temp] == 0) {
			string a, b;
			for (int i = 1; i < 101; i++) {
				s4 = to_string(i);
				int p = (int)s4.length();
				s4 += s1;
				s4 += "MMMMMMMMMM";
				a = s4.substr(0, sa);
				b = s4.substr(p, sa);
				if ((!s1.compare(a) || !s1.compare(b)) && arr[i] == 1) {
					if (!s1.compare(a)) s.insert(b);
					if (!s1.compare(b)) s.insert(a);
				}
			}
			for (int i = 1; i < 101; i++) {
				s4 = to_string(i);
				int p = (int)s4.length();
				s4 += s2;
				s4 += "MMMMMMMMMM";
				a = s4.substr(0, sb);
				b = s4.substr(p, sb);
				if ((!s2.compare(a) || !s2.compare(b)) && arr[i] == 1) {
					if (!s2.compare(a)) ans = b;
					if (!s2.compare(b)) ans = a;
					if (s.find(ans) != s.end()) {
						printf("No problem\n");
						flag = false;
						break;
					}
				}
			}
			if (flag) printf("OK\n");
			s.clear();
		}
		else if (arr[temp] == -1) {
			string a, b;
			for (int i = 1; i < 101; i++) {
				s4 = to_string(i);
				int p = (int)s4.length();
				s4 += s1;
				s4 += "MMMMMMMMMM";
				a = s4.substr(0, sa);
				b = s4.substr(p, sa);
				if ((!s1.compare(a) || !s1.compare(b)) && arr[i] == 1) {
					if (!s1.compare(a)) s.insert(b);
					if (!s1.compare(b)) s.insert(a);
				}
			}
			for (int i = 1; i < 101; i++) {
				s4 = to_string(i);
				int p = (int)s4.length();
				s4 += s2;
				s4 += "MMMMMMMMMM";
				a = s4.substr(0, sb);
				b = s4.substr(p, sb);
				if ((!s2.compare(a) || !s2.compare(b)) && arr[i] == 1) {
					if (!s2.compare(a)) ans = b;
					if (!s2.compare(b)) ans = a;
					if (s.find(ans) != s.end()) {
						printf("OK but...\n");
						flag = false;
						break;
					}
				}
			}
			if (flag) printf("No way\n");
			s.clear();
		}
	}
	return 0;
}
		
