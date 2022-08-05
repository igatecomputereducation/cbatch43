#include<stdio.h>
int main()
{
	int l,b,a,p;
	
	printf("Length:");
	scanf("%i",&l);
	printf("Breadth:");
	scanf("%i",&b);
	
	a=l*b;
	p=2*(l+b);
	
	printf("Area of rectangle %i\n",a);
	printf("Perimeter of rectangle %i",p);
	return 0;
}

