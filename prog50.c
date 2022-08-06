#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 integers\n");
	scanf("%i%i",&a,&b);
	if(a==b)
		printf("Both are equal");
	if(a!=b)
		printf("Both are not equal");
	return 0;
}

