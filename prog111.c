#include<stdio.h>
int main()
{
	int ll,ul,x;
	
	printf("Lower limit:");
	scanf("%i",&ll);
	printf("Upper limit:");
	scanf("%i",&ul);
	
	x=ul;
	abc:
		printf("%i\n",x);
		x=x-1;
	if(x>=ll)
		goto abc;
	
	return 0;
}

