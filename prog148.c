#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10000;i++)
	{
		printf("%i\n",i);
		if(i==5)
			break;
	}
	return 0;
}

