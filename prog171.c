#include<stdio.h>
int main()
{
	char i,j;
	int k;
	
	for(i='F';i>='A';i--)
	{
		for(j='A';j<=i;j++)
			printf("%5c",j);
		for(k=1;k<=2*('F'-i)-1;k++)
			printf("     ");
		for(j=i;j>='A';j--)
		{
			if(j!='F')
				printf("%5c",j);
		}
		printf("\n\n");
	
	}
	
	return 0;
}

