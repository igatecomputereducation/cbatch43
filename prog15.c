#include<stdio.h>
int main()
{
	int lmr,pmr,nu;
	float bill;
	printf("Last month meter reading:");
	scanf("%i",&lmr);
	printf("Present month meter reading:");
	scanf("%i",&pmr);
	nu=pmr-lmr;
	bill=nu*7.35;
	printf("Number of units consumed %i\n",nu);
	printf("Total bill %f",bill);
	return 0;
}

