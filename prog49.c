#include<stdio.h>
int main()
{
	int n;
	printf("Enter an integer:");
	scanf("%i",&n);
	if(n==0)
		printf("Zero");
	if(n>0)
		printf("Positive number");
	if(n<0)
		printf("Negative number");
	return 0;
}

