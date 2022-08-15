#include<stdio.h>
int main()
{
	int n,fi,se,th,sm,temp;
	printf("Enter any 3 digit number:");
	scanf("%i",&n);
	temp=n;
	th=n%10;
	n=n/10;
	se=n%10;
	n=n/10;
	fi=n%10;
	sm=fi*fi*fi+se*se*se+th*th*th;
	if(sm==temp)
		printf("Armstrong number");
	else
		printf("Not an armstrong");
	return 0;
}

