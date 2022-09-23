#include<stdio.h>
int box(int,int,int);
int main()
{
	int b,w,h,vol;
	printf("Enter 3 sides of a box\n");
	scanf("%i%i%i",&b,&w,&h);
	vol=box(b,w,h);
	printf("Volume of box %i",vol);
	return 0;
}
int box(int x,int y,int z)
{
	return x*y*z;
}

