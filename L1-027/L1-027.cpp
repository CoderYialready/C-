#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	vector<int> v, v1;
	int arr[10] = {0};
	string s, s1, s2;
	getline(cin, s);
	for (int i = 0; i < 11; i++) {
		arr[s[i] - '0'] = 1;
	}
	for (int i = 9; i >= 0; i--) {
		if (arr[i] != 0) v.push_back(i);
	}
	for (int i = 0; i < v.size(); i++) {
		s1 = v[i] + '0';
		s2 += s1;
	}
	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j < s2.size(); j++) {
			if (s[i] == s2[j]) {
				v1.push_back(j);
				break;
			}
		}
	}
	printf("int[] arr = new int[]{%d",v[0]);
	if (v.size() > 1) {
		for (int i = 1; i < v.size(); i++) {
			printf(",%d",v[i]);
		}
		printf("};\n");
	}
	else printf("};\n");
	printf("int[] index = new int[]{%d",v1[0]);
	if (v1.size() > 1) {
		for (int i = 1; i < v1.size(); i++) {
			printf(",%d",v1[i]);
		}
		printf("};");
	}
	else printf("};\n");
	return 0;
}
