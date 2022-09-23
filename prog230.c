#include<stdio.h>
int arraysum(int[],int);
int main()
{
	int a[50],n,i;
	printf("How many elements:");
	scanf("%i",&n);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	printf("Sum of elements %i",arraysum(a,n));
	return 0;
}
int arraysum(int x[],int n)
{
	int i,sum;
	for(sum=0,i=0;i<n;i++)
		sum=sum+x[i];
	return sum;
}



