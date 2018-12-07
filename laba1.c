#include <stdio.h>
#include <math.h>

int main()
{
	float a,x;
	printf("========================================\n");
	printf(" Введите значениt переменной a: ");
	scanf("%f", &a);
	printf(" Введите значениt переменной x: ");
	scanf("%f", &x);
	printf("========================================\n");
	float G = (5*(9*pow(a,2)-26*a*x+16*pow(x,2)))/(20*pow(a,2)+29*a*x+5*pow(x,2));
	float F = 1/cos(14*pow(a,2)-19*a*x+6*pow(x,2));
	float Y = log(-80*pow(a,2)+6*a*x+35*pow(x,2)+1)/log(10);
	printf(" G = %.6f\n F = %.6f\n Y = %.6f\n", G, F, Y);
	printf("========================================\n");
	return 0;
}
