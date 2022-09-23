#include<stdio.h>
int matrixsum(int[50][50],int,int);
int main()
{
	int a[50][50],n,m,i,j;
	
	printf("Enter the class of matrix\n");
	scanf("%i%i",&n,&m);
	
	printf("Enter the matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%i",&a[i][j]);
	}
	
	printf("Sum %i",matrixsum(a,n,m));
	
	return 0;
}
int matrixsum(int x[50][50],int n,int m)
{
	int i,j,sum;
	sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			sum=sum+x[i][j];
	}
	return sum;
}



