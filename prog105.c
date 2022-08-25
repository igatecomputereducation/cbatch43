#include<stdio.h>
int main()
{
	printf("first\n");
	goto abc;
		printf("second\n");
		printf("third\n");
	abc:
	printf("fourth\n");
	return 0;
}

