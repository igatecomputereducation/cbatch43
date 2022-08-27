#include<stdio.h>
int main()
{
	int n,i,sum;
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	sum=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			sum=sum+i;	
	}
	
	printf("Sum of all the factors %i",sum);
	return 0;
}

