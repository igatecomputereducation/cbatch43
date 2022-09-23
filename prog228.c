#include<stdio.h>
void igate(int,int);
int main()
{
	int a=10,b=20;
	igate(a,b);
	printf("%i\n%i",a,b);
	return 0;
}
void igate(int x,int y)
{
	x=x+5;
	y=y+5;
}



