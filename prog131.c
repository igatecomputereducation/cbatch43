#include<stdio.h>
int main()
{
	int n,i,fact;
	
	printf("Enter the natural number:");
	scanf("%i",&n);
	
	fact=1;
	for(i=1;i<=n;i++)
		fact=fact*i;
	
	printf("factorial %i",fact);
	return 0;
}

