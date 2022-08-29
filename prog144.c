#include<stdio.h>
int main()
{
	int i,base,exp,res;
	
	
	printf("Base:");
	scanf("%i",&base);
	
	printf("Exponent:");
	scanf("%i",&exp);
	
	res=1;
	for(i=1;i<=exp;i++)
		res=res*base;
		
	printf("Result of expression %i",res);
	return 0;
}

