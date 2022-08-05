#include<stdio.h>
int main()
{
	float cel,fah;
	printf("Temparature in fahrenheit:");
	scanf("%f",&fah);
	cel=5.0/9*(fah-32);
	printf("Temparature in celsius %f",cel);
	return 0;
}

