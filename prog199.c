#include<stdio.h>
int main()
{
	int a[50],i,j,n,flag;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	flag=1;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		if(a[i]!=a[j])
		{
			flag=0;
			break;
		}
	}
	
	if(flag)
		printf("Palindrome");
	else
		printf("Not a palindrome");
		
	return 0;
}

