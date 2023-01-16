#include <iostream>
#include <string.h>
using namespace std;
int main() {
 	string s;
 	s.resize(10);
 	scanf("%s",&s[0]);
 	printf("%s",s.c_str());
 	return 0;
}
