#include<stdio.h>
int main()
{
	float hei,wei,bmi;
	printf("Your height in feets:");
	scanf("%f",&hei);
	printf("Your weight in Kgs:");
	scanf("%f",&wei);
	hei=hei*0.3048;
	bmi=wei/(hei*hei);
	printf("Your body mass index %f\n",bmi);
	if(bmi>=30)
		printf("Obesity");
	else if(bmi>=25)
		printf("Overweight");
	else if(bmi>=18.5)
		printf("Normal weight");
	else
		printf("You can eat..sleep..and repeat");
	return 0;
}

