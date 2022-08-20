#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%i",&age);
	if(age>=60)
		printf("you are a Senior citizen");
	else if(age>=19)
		printf("You are an Adult");
	else if(age>=13)
		printf("You are an Adolesence");
	else
		printf("You are a Child");
	return 0;
}

