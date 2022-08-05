#include<stdio.h>
int main()
{
	int x,y,sm,sb,pro;
	float div;
	printf("First number:");
	scanf("%i",&x);
	printf("Second number:");
	scanf("%i",&y);
	sm=x+y;
	sb=x-y;
	pro=x*y;
	div=(float)x/y;
	printf("Addition %i\n",sm);
	printf("Subtraction %i\n",sb);
	printf("Product %i\n",pro);
	printf("Division %f",div);
	return 0;
}
