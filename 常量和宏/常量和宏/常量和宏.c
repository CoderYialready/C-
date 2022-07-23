#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define Add(x,y) ((x)+(y))
// Add(x,y) x+y
int main()
{
	//printf("%d\n",4* Add(2, 3));=4*2+3
	printf("%d\n", 4 * Add(2, 3));//=4*(2+3)



	return 0;
}


