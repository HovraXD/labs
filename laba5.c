#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	system("clear");
	//Обозначение переменных и обнуление char
	const int N = 256;
	int  nofsteps = 0, nofsteps2 = 1, noffunction = 0, amount_of_shablons = 0;
	char str_fresult[N], str_result[N], str_a[N], str_x[N], str_border[N], str_nofsteps[N], str_shablon[N];
	float a = 0, x = 0, G = 0, F = 0, Y = 0, step = 0, min = 0, max = 0, xmin = 0, xmax = 0, border = 0, shablon = 0;
	memset(str_result, 0, N);
	memset(str_a, 0, N);
	memset(str_x, 0, N);
	memset(str_border, 0, N);
	memset(str_nofsteps, 0, N);
	memset(str_shablon, 0, N);
	//Ввод значений переменных
	printf("======================================================================\n Выберите функцию (G - 1, F - 2, Y - 3): ");
	scanf("%d", &noffunction);
	printf("======================================================================\n Введите значение переменной a: ");
	scanf("%s", str_a);
	a = atof(str_a);
	printf("======================================================================\n Введите начальное значение переменной x: ");
	scanf("%s", str_x);
	x = atof(str_x);
	printf("======================================================================\n Введите максимальное значение переменной x: ");
	scanf("%s", str_border);
	border = atof(str_border);
	printf("======================================================================\n Введите количество итераций: ");
	scanf("%s", str_nofsteps);
	nofsteps = atof(str_nofsteps);
	printf("======================================================================\n Введите шаблон: ");
	scanf("%s", str_shablon);
	shablon = atof(str_shablon);
	//Определение шага
	step = ((border-x)/nofsteps);
	if (step <= border)//Условие проверки шага
	{
		switch(noffunction)
		{
			case(1):
				for (nofsteps2; nofsteps2 <= nofsteps; nofsteps2++)
				{
					{
						if (a != 0 && x != 0)//Проверка условий выполнения функции
						{
							G = (5*(9*pow(a,2)-26*a*x+16*pow(x,2)))/(20*pow(a,2)+29*a*x+5*pow(x,2));
							sprintf(str_fresult, "%f ", G);
							//Поиск совпадений с шаблоном
							if (G == shablon)
							{
								amount_of_shablons++;
							}
							//Выявление минамального и максимального значения
							if (max ==0)
							{
								max = G;
								xmax = x;
							}
							if (G > max)
							{
								max = G;
								xmax = x;
							}
							if (min == 0)
							{
								min = G;
								xmin = x;
							}
							if (min > G)
							{
								min = G;
								xmin = G;
							}
							strcat(str_result, str_fresult);
						}
						else
						{
							sprintf(str_fresult, "н.з ");
							strcat(str_result, str_fresult);
						}
						x = x+step;
					}
				}
				break;
			case(2):
				for (nofsteps2; nofsteps2 <= nofsteps; nofsteps2++)
				{
					F = 1/cos(14*pow(a,2)-19*a*x+6*pow(x,2));
					sprintf(str_fresult, "%f ", F);
					//Поиск совпадений с шаблоном
					if (F == shablon)
					{
						amount_of_shablons++;
					}
					//Выявление минимального и максимального значения
					if (max == 0)
					{
						max = F;
						xmax = x;
					}
					if (F > max)
					{
						max = F;
						xmax = x;
					}
					if (min == 0)
					{
						min = F;
						xmin = x;
					}
					if (min > F)
					{
						min = F;
						xmin = x;
					}
					strcat(str_result, str_fresult);
					x = x+step;
				}
				break;
			case(3):
				for (nofsteps2; nofsteps2 <= nofsteps; nofsteps2++)
				{
					if (x > a)//Условие выполнение функции
					{
						Y = log(-80*pow(a,2)+6*a*x+35*pow(x,2)+1)/log(10);
						sprintf(str_fresult, "%f ", Y);
						//Поиск совпадений с шаблоном
						if (Y == shablon)
						{
							amount_of_shablons++;
						}
						//Выявление минимального и максимального значения
						if (max == 0)
						{
							max = Y;
							xmax = x;
						}
						if (Y > max)
						{
							max = Y;
							xmax = x;
						}
						if (min == 0)
						{
							min = Y;
							xmin = x;
						}
						if (min > Y)
						{
							min = Y;
							xmin = x;
						}
						strcat(str_result, str_fresult);
					}
					else
					{
						sprintf(str_fresult, "н.з ");
						strcat(str_result, str_fresult);
					}
					x = x+step;
				}
				break;
		}
		//Вывод значений
		printf("======================================================================\n Результата вычисления:\n %s\t\n", str_result);
		printf(" Минимальное значение: x = %f, функция = %f\n", xmin, min);
		printf(" Максимальное значение: x = %f, функция = %f\n", xmax, max);
		printf("======================================================================\n Количество совпадений: %d\n======================================================================\n", amount_of_shablons);
	}
	return 0;
}
