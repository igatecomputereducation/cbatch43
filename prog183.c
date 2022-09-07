#include<stdio.h>
int main()
{
	int a[5],i;
	
	printf("Enter 5 integers\n");
	for(i=0;i<5;i++)
		scanf("%i",&a[i]);
		
	
	printf("The given integers\n");
	for(i=0;i<5;i++)
		printf("%7i",a[i]);
	
	return 0;
}

