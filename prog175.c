#include<stdio.h>
int main()
{
	int n,sum,t,limit;
	
	printf("Enter the limit:");
	scanf("%i",&limit);
	
	for(n=1;n<=limit;n++)
	{
		for(t=n,sum=0;t!=0;t=t/10)
			sum=sum+(t%10)*(t%10)*(t%10);
			
		if(sum==n)
			printf("%i\n",n);
	}
	return 0;
}

