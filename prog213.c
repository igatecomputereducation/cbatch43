#include<stdio.h>
int main()
{
	int a[50][50],n,i,j,trace;
	
	printf("Enter the class of square matrix:");
	scanf("%i",&n);
	
	printf("Enter the matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%i",&a[i][j]);
	}
	
	printf("Diagonal elements are\n");
	for(i=0;i<n;i++)
		printf("%i\n",a[i][i]);
	
	for(trace=0,i=0;i<n;i++)
		trace=trace+a[i][i];
		
	printf("Trace of matrix %i",trace)	;
	
	return 0;
}

