#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a = 0, x = 0, border = 0, step = 0, G = 0, F =  0, Y = 0;
	int noffunction = 0, nofsteps = 0, nofsteps2 = 0;
	system("clear");
	printf("===========================================================\n");
	printf(" Выберите функцию (G - 1, F - 2, Y - 3,): ");
	scanf("%d", &noffunction);
	printf("===========================================================\n");
	printf(" Введите значениe a: ");
	scanf("%f", &a);
	printf(" Введите значение x: ");
	scanf("%f", &x);
	printf(" Введите предел: ");
	scanf("%f", &border);
	printf("===========================================================\n");
	printf(" Задайте количество итераций: ");
	scanf("%d", &nofsteps);
	printf("===========================================================\n");
	step = ((border-x)/nofsteps);
	if (step <= border) {
		switch(noffunction)
		{
			case(1):
				for (nofsteps2 = 0; nofsteps2 <= nofsteps; nofsteps2 = nofsteps2+1)
				{
					if (a != 0 && x !=0) {
						G = (5*(9*pow(a,2)-26*a*x+16*pow(x,2)))/(20*pow(a,2)+29*a*x+5*pow(x,2));
						printf(" %f, %f\n", x,G);
						x = (x+step);
					}
					else {
						printf (" %f, н.з.э\n", x);
						x = (x+step);
					}
				}
				printf("===========================================================\n");
				return 0;
			case(2):
				for (nofsteps2 = 0; nofsteps2 <= nofsteps; nofsteps2 = nofsteps2+1)
				{
					F = 1/cos(14*pow(a,2)-19*a*x+6*pow(x,2));
					printf("%f, %f\n", x, F);
					x = (x+step);
				}
				printf("===========================================================\n");
				return 0;
			case(3):
				for (nofsteps2 = 0; nofsteps2 <= nofsteps; nofsteps2 = nofsteps2+1)
				{
					if (x > a) {
						Y = log(-80*pow(a,2)+6*a*x+35*pow(x,2)+1)/log(10);
						printf(" %f, %f\n", x, Y);
						x = (x+step);
					}
					else {
						printf(" %F, н.з\n", x);
						x = (x+step);
					}
					}
				printf("===========================================================\n");
				return 0;
			default:
				printf(" Неверный номер функции!\n");
				break;
			}
	}
	else {
		printf(" Шаг больше границы функции!\n");
	}
	printf("===========================================================\n");
	return 0;
}
