#include<stdio.h>
extern int a;
void display();
int main()
{
	printf("%i\n",a);
	display();
	return 0;
}
int a=10;
void display()
{
	printf("%i\n",a);
}



