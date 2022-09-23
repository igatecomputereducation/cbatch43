#include<stdio.h>
float calc_intr(int,int,float);
int main()
{
	int amt,time;
	float rate;
	printf("Amount:");
	scanf("%i",&amt);
	printf("Time in months:");
	scanf("%i",&time);
	printf("Rate of interest:");
	scanf("%f",&rate);
	printf("Simple Interest %f\n",calc_intr(amt,time,rate));
	printf("Total %f",amt+calc_intr(amt,time,rate));
	return 0;
}
float calc_intr(int a,int t,float r)
{
	return a*t*r/100;
}

