#include<stdio.h>
int main()
{
	char type;
	int cmr,pmr,nu;
	float uch,bill;
	
	printf("Type of electrical connection [d/c/i/a]:");
	scanf("%c",&type);
	
	printf("Current month meter reading:");
	scanf("%i",&cmr);
	printf("Previous month meter reading:");
	scanf("%i",&pmr);
	
	nu=cmr-pmr;
	
	if(type=='d')
	{
		if(nu>500)
			uch=10.50;
		else if(nu>=301)
			uch=9.35;
		else if(nu>=101)
			uch=8.25;
		else if(nu>=51)
			uch=7.30;
		else
			uch=5.75;
	}
	else if(type=='c')
	{
		if(nu>500)
			uch=13.75;
		else if(nu>=301)
			uch=11.25;
		else
			uch=10.75;
	}
	else if(type=='i')
		uch=9.25;
	else
		uch=0.50;
	
	bill=nu*uch;
	printf("No of units consumed %i\n",nu);
	printf("Unit charge %f\n",uch);
	printf("Total bill %f",bill);
	return 0;
}

