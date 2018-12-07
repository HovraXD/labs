#include <stdio.h>
#include <math.h>

int main()
{
	float a = 0,x = 0;
	int b = 0;
	printf("===========================================\n");
	printf(" Введите значениt переменной a: ");
	scanf("%f", &a);
	printf(" Введите значениt переменной x: ");
	scanf("%f", &x);
	printf("===========================================\n");
	printf(" Выверите формулу (G - 1; F - 2; Y - 3): ");
	scanf("%d", &b);
	printf("===========================================\n");
	if (0 < b && b < 4) {
			switch(b)
			{
				case(1):
				if (a != 0 && x != 0) {
				printf(" G = %.6f\n", (5*(9*pow(a,2)-26*a*x+16*pow(x,2)))/(20*pow(a,2)+29*a*x+5*pow(x,2)));
				}
				else {
				printf(" Невозможно посчитать! (деление на 0)\n");
				}
				break;
				case(2):
				printf(" F = %.6f\n", 1/cos(14*pow(a,2)-19*a*x+6*pow(x,2)));
				break;
				case(3):
				if ( x > a) {
				printf(" Y = %.6f\n", log(-80*pow(a,2)+6*a*x+35*pow(x,2)+1)/log(10));
				}
				else {
				printf(" Невозможно посчитать!\n");
				}
				break;
			}
	}
	else {
		printf("Неверный номер формулы!\n");
	}
	printf("===========================================\n");
	return 0;
}
