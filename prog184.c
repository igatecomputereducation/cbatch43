#include<stdio.h>
int main()
{
	int a[50],i,n;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
		
	printf("The given integers\n");
	for(i=0;i<n;i++)
		printf("%7i",a[i]);
	
	return 0;
}

