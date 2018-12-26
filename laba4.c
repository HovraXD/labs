#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	const int N = 100;
	int noffunction = 0, nofsteps = 0, nofsteps2 = 0, j = 0;
	float a = 0, x = 0, border = 0, step = 0, G = 0, F =  0, Y = 0, min = 0, max = 0, xmin = 0, xmax = 0;
	float mas [N];
	system("clear");
	printf("===========================================================\n");
	printf(" Выберите функцию (G - 1, F - 2, Y - 3,): ");
	scanf("%d", &noffunction);
	printf("===========================================================\n");
	printf(" Введите значение a: ");
	scanf("%f", &a);
	printf(" Введите минимальное значение x: ");
	scanf("%f", &x);
	printf(" Введите максимальное значение x: ");
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
				for (nofsteps2; nofsteps2 <= nofsteps; nofsteps2++)
				{
					if (x <= border) {
						if (j <= nofsteps) {
							if (a != 0 && x != 0) {
								G = (5*(9*pow(a,2)-26*a*x+16*pow(x,2)))/(20*pow(a,2)+29*a*x+5*pow(x,2));
								mas[j] = G;
								printf(" %f %f\t\n", x, mas [j]);
								if (mas[j] > max) {
									max = mas [j];
									xmax = x;
								}
								if (min == 0) {
									min = mas [j];
									xmin = x;
								}
								if (min > mas [j]) {
									min = mas [j];
									xmin = x;
								}
							x = x+step;
							}
							else {
								printf (" %f н.з.э\n", x);
							}
						}
					j = j++;
					}
				}
				printf("===========================================================\n");
				printf(" Максимальное значение: %f %f\n", xmax, max);
				printf("===========================================================\n");
				printf(" Минимальное значение: %f %f\n", xmin, min);
				printf("===========================================================\n");
				return 0;
			case(2):
				for (nofsteps2 = 1; nofsteps2 <= nofsteps; nofsteps2 = nofsteps2+1)
				{
					if (x <= border) {
						if (j <= nofsteps) {
							F = 1/cos(14*pow(a,2)-19*a*x+6*pow(x,2));
							mas[j] = F;
							printf(" %f %f\t\n", x, mas [j]);
								if (mas[j] > max) {
									max = mas [j];
                                                                       	xmax = x;
                                                                }
                                                                if (min == 0) {
                                                                        min = mas [j];
                                                                        xmin = x;
                                                                }
                                                                if (min > mas [j]) {
                                                                        min = mas [j];
                                                                        xmin = x;
								}
                                                x = x+step;
						}
					j = j++;
					}
				}
				printf("===========================================================\n");
                                printf(" Максимальное значение: %f %f\n", xmax, max);
                                printf("===========================================================\n");
                                printf(" Минимальное значение: %f %f\n", xmin, min);
                                printf("===========================================================\n");
				return 0;
			case(3):
				for (nofsteps2 = 1; nofsteps2 <= nofsteps; nofsteps2 = nofsteps2+1)
				{
					 if (x <= border) {
                                                if (j <= nofsteps) {
							if (x > a) {
								Y = log(-80*pow(a,2)+6*a*x+35*pow(x,2)+1)/log(10);
								mas[j] = Y;
								printf(" %f %f\t\n", x, mas [j]);
								if (mas[j] > max) {
                                                                        max = mas [j];
                                                                        xmax = x;
                                                                }
                                                                if (min == 0) {
                                                                        min = mas [j];
                                                                        xmin = x;
                                                                }
                                                                if (min > mas [j]) {
                                                                        min = mas [j];
                                                                        xmin = x;
                                                                }
                                                        x = x+step;
                                                        }
						}
						else {
						printf(" %F н.з\n", x);
						}
					}
				j = j++;
				}
				printf("===========================================================\n");
				printf(" Максимальное значение: %f %f\n", xmax, max);
				printf("===========================================================\n");
				printf(" Минимальное значение: %f %f\n", xmin, min);
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
