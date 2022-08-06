#include<stdio.h>
int main()
{
	int num,x;
	num=45;
	x=0765;
	printf("%i\n",num);
	printf("%8i\n",num);
	printf("%08i\n",num);
	printf("%+8i\n",num);
	printf("%#8o\n",x);
	printf("%-8ihello",num);
	return 0;
}

