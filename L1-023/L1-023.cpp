#include <iostream>
#include <string>
using namespace std;
int main() {
	int arr[128] = {0};
	int count = 0;
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'G' || s[i] == 'g') {
			arr['G']++;
			count++;
		}
		else if (s[i] == 'T' || s[i] == 't') {
			arr['T']++;
			count++;
		}
		else if (s[i] == 'P' || s[i] == 'p') {
			arr['P']++;
			count++;
		}
		else if (s[i] == 'L' || s[i] == 'l') {
			arr['L']++;
			count++;
		}
	}
	while (count--) {
		if (arr['G'] > 0) {
			printf("G");
			arr['G']--;
		}
		if (arr['P'] > 0) {
			printf("P");
			arr['P']--;
		}
		if (arr['L'] > 0) {
			printf("L");
			arr['L']--;
		}
		if (arr['T'] > 0) {
			printf("T");
			arr['T']--;
		}
	}
	return 0;
} 
