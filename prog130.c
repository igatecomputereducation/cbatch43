#include<stdio.h>
int main()
{
	int n,i,sum;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	sum=0;
	for(i=1;i<=n;i++)
		sum=sum+i;
	
	printf("Sum of natural numbers %i",sum);
	return 0;
}

