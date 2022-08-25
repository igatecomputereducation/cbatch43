#include<stdio.h>
int main()
{
	short x;
	
	x=1;
	abc:
		printf("%hi\n",x);
		x=x+1;
	goto abc;
	
	
	return 0;
}

