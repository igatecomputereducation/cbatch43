#include<stdio.h>
int main()
{
	int n,min,max;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	for(max=min=n%10;n!=0;n=n/10)
	{
		if(n%10<min)
			min=n%10;
		if(n%10>max)
			max=n%10;
		
	}	

	printf("Mimimum digit %i\n",min);
	printf("Maximum digit %i",max);
	return 0;
}

