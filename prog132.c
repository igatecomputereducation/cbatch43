#include<stdio.h>
int main()
{
	int i,n,es,os;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	es=os=0;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
			es=es+i;
		else
			os=os+i;
	}
	
	printf("Sum of even numbers %i\n",es);
	printf("Sum of odd numbers %i",os);
	return 0;
}

