#include <stdio.h>

enum Sex
{
	MALE=2,
FEMALE,
SECRET

};
int main()
{
	enum Sex s = MALE;
	printf("%d\n",MALE );
	printf("%d\n",FEMALE );
	printf("%d\n",SECRET );
	return 0;
}







