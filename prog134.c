#include<stdio.h>
int main()
{
	int n,i,count;
	printf("Enter any natural number:");
	scanf("%i",&n);
	count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			count++;
	}
	printf("Number of factors %i",count);
	return 0;
}

