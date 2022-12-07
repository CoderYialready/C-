#include <stdio.h>
void fal();
int main()
{
	fal();
	return 0;
 } 
 void fal()
 {
 	int bi,sm;
 	int n;
 	int a[2];
 	scanf("%d",&n);
 	for(n = 0;n < 2;n++)
 	{
 		scanf("%d",&a[n]);
	}
	for(n = 0;n < 2;n++)
	{
 		for(bi = 1;bi <= a[n]/3;bi++)
 		{
 			for(sm = 1;sm <= a[n] - bi;sm++)
 			{
				if((sm + bi) == a[n] && (bi*3+sm/3) == a[n])	
 				{
 				printf("bi = %d sm = %d\n",bi,sm);
				}
			}
		 }
 	}
 }
 
 
 
 
 
