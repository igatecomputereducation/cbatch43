#include<stdio.h>
int main()
{
	int n,dig,flag;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	printf("Enter a digit:");
	scanf("%i",&dig);
	
	for(flag=0;n!=0;n=n/10)
	{
		if(n%10==dig)
		{
			flag=1;
			break;	
		}	
	}	
	
	if(flag)
		printf("Existed");
	else
		printf("Not existed");
	
	return 0;
}

