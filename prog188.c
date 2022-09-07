#include<stdio.h>
int main()
{
	int a[50],i,n,es,os;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	for(es=os=i=0;i<n;i++)
	{
		if(a[i]%2==0)
			es=es+a[i];
		else
			os=os+a[i];
	}
	
	printf("Sum of even elements %i\n",es);
	printf("Sum of odd elements %i",os);
	return 0;
}

