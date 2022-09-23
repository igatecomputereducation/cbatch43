#include<stdio.h>
int x=1;
int main()
{
	printf("%i\n",x);
	x++;
	if(x<=5)
		main();
	return 0;
}



