#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main()
{	
  const int N = 100;
  struct res
  {
    float masg[N];
    float masf[N];
    float masy[N];
  };
  struct res otvet;
	uint8_t test;
	int error,exit1, j, i, k;
	char* sovp;
  float mas[N];
	float F, G, Y, a, x, x2, shag, min, max, kolshag;
  char stx[255]; char stx2[255]; char sta[255]; char stk[255]; char blok [255]; char stg[255]; char stf[255]; char sty[255];
  char sh[255];


	while (exit1 != 1)
	{
		memset(stg,0,255); memset(stf,0,255); memset(blok,0,255); memset(sty,0,255); 
		memset(mas, 0, N);
          j = 0;
          i = 0;
          printf("Функция G\n");
	   		  printf ("Введите число a \n");
          fgets(sta, 255, stdin);
          a = atof(sta);
       		printf ("Введите число x \n");
       		fgets(stx, 255, stdin);
          x = atof(stx);
       		printf ("Введите число x2 \n");
       		fgets(stx2, 255, stdin);
          x2 = atof(stx2);
       		printf ("Введите колличество шагов вычисления функции\n");
       		fgets(stk, 255, stdin);
          kolshag = atof(stk);
       		shag = (x2-x)/kolshag;
       		if (shag > x2)
       			{
       			printf ("Шаг вычисления функции больше чем область\n");
       			error = 6;
       			break;
       			}

        	for (;x <= x2-shag;x = x + shag)
            {
              if (a ==0 && x ==0)
                {
                  error = 1;  
                  printf("Функция не может быть вычислена так как знаменатель не может быть = 0\n");
                  break;
                }
              G = (5*(9*pow(a,2)-26*a*x+16*pow(x,2)))/(20*pow(a,2)+29*a*x+5*pow(x,2));
              mas[j] = G;
              otvet.masg[j] = G;
              sprintf(blok, "%2f\t", mas[j]);
              strcat(stg, blok);
              j = j+1;
              i = i+1;
	    	 	  }	 	
        printf("%s\n", stg);
        printf ("Задайте шаблон для поиска совпадения\n");
        scanf("%s", sh);
        sovp = strstr(stg, sh);
        while(sovp != NULL)
    {
      sovp = strstr(sovp + 1, sh);
      k+=1;
    }      
          printf("\n Количество совпадений %d\n",k); 

	    	  min = mas[0];
	    	  max = mas[0];
          for (j = 0; j <= i ; j++)
            	{
              		if (mas[j] < min )
              		{
                		min = mas[j];
              		}

              		if (mas[j] > max )
              		{
                		max = mas [j];
              		}
            	} 

          printf("\n Минимальный элемент %f\n", min);
          printf("\n Максимальный элемент %f\n", max);

          j = 0;
          i = 0;
          memset(blok,0,255);
          memset(mas, 0, N);
          getchar();
          printf("Функция F\n");
	   		  printf ("Введите число a \n");
          fgets(sta, 255, stdin);
          a = atof(sta);
          printf ("Введите число x \n");
          fgets(stx, 255, stdin);
          x = atof(stx);
          printf ("Введите число x2 \n");
          fgets(stx2, 255, stdin);
          x2 = atof(stx2);
          printf ("Введите количество шагов вычисления функции\n");
          fgets(stk, 255, stdin);
          kolshag = atof(stk);
       		shag = (x2-x)/kolshag;
       		if (shag > x2)
       			{
       			  printf ("Шаг вычисления функции > Области вычисления функции\n");
       			  error = 6;
       			  exit(1);
       			}
       		for (;x <= x2-shag;x = x + shag)
       			{ 
       			F = 1/cos(14*pow(a,2)-19*a*x+6*pow(x,2));
              		mas[j] = F;
                  otvet.masf[j] = F;
              		sprintf(blok, "%2f\t", mas[j]);
              		strcat(stf, blok);
              		j = j+1;
              		i = i+1;   		
       			}
       		printf("%s\n", stf);
          printf ("Задайте шаблон для поиска совпадения\n");
          scanf("%s", sh);
          sovp = strstr(stf, sh);
          while(sovp != NULL)
          {
            sovp = strstr(sovp + 1, sh);
            k+=1;
          }      
          printf("\nКоличество совпадений %d\n",k); 	
	    	  min = mas[0];
	    	  max = mas[0];
          	for (j = 0; j < i ; j++)
            	{
              		if (mas[j] < min )
              		{
                		min = mas[j];
              		}

              		if (mas[j] > max )
              		{
                		max = mas [j];
              		}
            	} 
          printf("\n Минимальный элемент %f\n", min);
          printf("\n Максимальный элемент %f\n", max);


          j = 0;
          i = 0;
          memset(blok,0,255);
          memset(mas, 0, N);

          getchar();
          printf("Функция Y\n");
          printf ("Введите число a \n");
          fgets(sta, 255, stdin);
          a = atof(sta);
       		printf ("Введите число x \n");
          fgets(stx, 255, stdin);
          x = atof(stx);
        	printf ("Введите число x2 \n");	
          fgets(stx2, 255, stdin);
          x2 = atof(stx2);
          if (a == 0 && x == 0) 
            {
              printf("\n Невозможно посчитать функцию.");
              exit(1);
            } 
       	  printf ("Введите количество шагов вычисления функции\n");
          fgets(stk, 255, stdin);
          kolshag = atof(stk);
       		shag = (x2-x)/kolshag;

       		if (shag > x2)
       			{
       			printf ("Шаг вычисления функции > Области вычисления функции\n");
       			exit(1);
       			}


       		for (x;x <= x2-shag;x = x + shag)
            {
	    	Y = log(-80*pow(a,2)+6*a*x+35*pow(x,2)+1)/log(10);
            		mas[j] = Y;
                otvet.masy[j] = Y;
              	sprintf(blok, "%2f\t", mas[j]);
              	strcat(sty, blok);
            		j = j+1;
            		i = i+1;      
        		}
        	printf("%s\n", sty);
          printf ("Задайте шаблон для поиска совпадения\n");
          scanf("%s", sh);
          sovp = strstr(sty, sh);
          while(sovp != NULL)
          {
            sovp = strstr(sovp + 1, sh);
            k+=1;
          }      
          printf("\nКоличество совпадений %d\n",k); 	
        	min = mas[0];
	    	  max = mas[0];
          for (j = 0; j < i ; j++)
            {
              if (mas[j] < min )
                {
                  min = mas[j];
                }

              if (mas[j] > max )
                {
                	max = mas [j];
                }
            } 
          printf("\n Минимальный элемент %f\n", min);
          printf("\n Максимальный элемент %f\n", max);
		
		
printf("Хотите выйти из программы? 1 - Да 0 - Нет\n");
scanf ("%d", &exit1);
getchar();
}
return error;
}
