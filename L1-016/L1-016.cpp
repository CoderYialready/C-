#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() {
	int arr[17] = {0};
	int arr1[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char arr2[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
	int flag = 1, n = 0;
	int flag1 = 1;
	string s;
	scanf("%d",&n);
	getchar();
	while (n--) {
		flag = 1;
		int all = 0; 
		string s;
		getline(cin,s);
		for (int i = 0; i < s.size(); i++) {
			if (i == s.size() - 1) break;
			if (islower(s[i]) || isupper(s[i])) flag = 0;
		}
		if (flag == 0) {
			printf("%s\n",s.c_str()); 
			flag1 = 0;
			continue;
		}
		for (int i = 0; i < s.size()-1; i++) {
			arr[i] = s[i] - '0';
			all += arr[i]*arr1[i];
		}
			all %= 11;
			if (arr2[all] != s[17])	{
				printf("%s\n",s.c_str()); 
				flag1 = 0;
			}
	}
	if (flag1) printf("All passed");
    return 0;
}



