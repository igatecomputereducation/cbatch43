#include<stdio.h>
int main()
{
	int i,j;	
	for(i=1;i<=5;i++)
	{
		for(i=1;i<=5-i;i++)
			printf("     ");
		for(j=1;j<=i;j++)
			printf("%5i",j);
		printf("\n\n");
	}
	return 0;
}
