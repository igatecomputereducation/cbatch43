#include<stdio.h>
int ismajor(char,int);
int main()
{
	char gen;
	int age;
	printf("Gender [m/f]:");
	scanf("%c",&gen);
	printf("Age:");
	scanf("%i",&age);
	if(ismajor(gen,age))
		printf("Major");
	else
		printf("Minor");
	return 0;
}
int ismajor(char g,int a)
{
	return g=='m' && a>=21 || g=='f' && a>=18;
}


