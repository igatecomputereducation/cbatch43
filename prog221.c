#include<stdio.h>
void printbill(float,int);
int main()
{
	float price;
	int qty;
	printf("Price:");
	scanf("%f",&price);
	printf("Quantity:");
	scanf("%i",&qty);
	printbill(price,qty);
	return 0;
}
void printbill(float p,int q)
{
	float bill,sgst,cgst,tot;
	bill=p*q;
	sgst=bill*9/100;
	cgst=bill*9/100;
	tot=bill+sgst+cgst;
	printf("Bill %f\n",bill);
	printf("SGST %f\n",sgst);
	printf("CGST %f\n",cgst);
	printf("Total %f",tot);
}
