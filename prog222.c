#include<stdio.h>
void bodymassindex(float,float);
int main()
{
	float hei,wei;
	printf("Height in feets:");
	scanf("%f",&hei);
	printf("Weight in kgs:");
	scanf("%f",&wei);
	bodymassindex(hei,wei);
	return 0;
}
void bodymassindex(float h,float w)
{
	float bmi;
	h=h*0.3048;
	bmi=w/(h*h);
	printf("Your body mass index %f\n",bmi);
	if(bmi>=30)
		printf("You are obess");
	else if(bmi>=25)
		printf("Over weight");
	else if(bmi>=18.5)
		printf("Normal weight");
	else
		printf("Under weight");
}
