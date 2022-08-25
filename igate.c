#include<stdio.h>
int main()
{
	int len,bre;
	printf("Length:");
	scanf("%i",&len);
	printf("Breadth:");
	scanf("%i",&bre);
	printf("Area %i\n",len*bre);
	printf("Perimeter %i",2*(len+bre));
	getch();
	return 0;
}
