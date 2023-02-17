#include <iostream>
using namespace std;
typedef struct student {
	int sex;	
	char name[10];
}student;
int main() {
	int n = 0;
	scanf("%d",&n);
	student stu[n];
	for (int i = 0; i < n; i++) {
		scanf("%d",&stu[i].sex);
		scanf("%s",stu[i].name);
	}
	for (int i = 0; i < n/2; i++) {
		for (int j = n-1; j >= n/2; j--) {
			if (stu[i].sex + stu[j].sex == 1) {
				printf("%s %s\n",stu[i].name, stu[j].name);
				stu[j].sex = -1;
				break;
			}
		}
	}
	return 0;
}
