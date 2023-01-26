#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    string s1 = "qiandao";
    string s2 = "easy";
    int n = 0, m =0, rec = 0, cnt = -1, flag = 1;
    cin >> n >> m;
    getchar();
    while (n--) {
        getline(cin, s);
        rec = s.find(s1);
        if (rec >= 0) continue;
        rec = s.find(s2);
        if (rec >= 0) continue;
        cnt++;
        if (cnt == m) {
            cout << s;
            flag = 0;
        }
    }
    if (flag) cout << "Wo AK le";
    return 0;
}
