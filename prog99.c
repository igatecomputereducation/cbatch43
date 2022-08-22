#include<stdio.h>
int main()
{
	int x;
	x=45;
	switch(x+15)
	{
		case 30:
			printf("first\n");
			break;
		case 60:
			printf("second\n");
			break;
		case 45:
			printf("third\n");
			break;
		default:
			printf("fourth");
	}
	return 0;
}

