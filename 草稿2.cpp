#include <bits/stdc++.h>
using namespace std;
int main() {
    string s, temp;
    int k = 0, flag = 0;
    int arr[10];
    for (int i = 0; i < 10; i++) {
    	arr[i] = 2021;
	}
    int i = 1;
    for (i = 1;; i++) {
        s = to_string(i);
        for (int j = 0; j < (int)s.length(); j++) {
        	temp = s.substr(j, 1);
            k = stoi(temp);
            if (arr[k] <= 0) {
            	flag = 1;
            	break;
			}
            arr[k]--;
        }
        if (flag) break;
    }
    cout << i - 1;
    return 0;
}
