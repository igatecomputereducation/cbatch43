#include<stdio.h>
int main()
{
	int mat,phy,che;
	printf("Enter the marks in maths, Physics and Chemistry\n");
	scanf("%i%i%i",&mat,&phy,&che);
	if(mat>=35)
	{
		if(phy>=35)
		{
			if(che>=35)
				printf("Pass");
			else
				printf("Failed");
		}
		else
			printf("Failed");
	}
	else
		printf("Failed");
	return 0;
}
