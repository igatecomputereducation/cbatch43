#include<stdio.h>
int main()
{
	char gen;
	int age;
	float per;
	
	printf("Gender [m/f]:");
	scanf("%c",&gen);
	printf("Age:");
	scanf("%i",&age);
	printf("Percentage:");
	scanf("%f",&per);
	
	if(gen=='m' && age>=40 && age<=55 && per>=70)
		printf("Selected");
	else
		printf("Not selected");
	
	return 0;
}

