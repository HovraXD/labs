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
    float maso[N];
    char mass[255];
  };
	uint8_t test;
	int error,exit1, j, i, k;
	char* sovp;
  float mas[N];
  float F, G, Y, a, x, x2, shag, min, max, kolshag;
  char stx[255]; char stx2[255]; char sta[255]; char stk[255]; char blok [255]; char stg[255]; char stf[255]; char sty[255];
  char sh[255];
  char c = ' ';
  struct res otvet[2];


	while (exit1 != 1)
	{
		memset(stg,0,255); memset(stf,0,255); memset(blok,0,255); memset(sty,0,255); 
		memset(mas, 0, N);
		k = 0;
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
       	printf ("Введите количество шагов вычисления функции\n");
       	fgets(stk, 255, stdin);
        kolshag = atof(stk);
        shag = (x2-x)/kolshag;
       	if (shag > x2)
       	{
       		printf ("Шаг вычисления функции больше чем сама область\n");
       		error = 6;
       		break;
       	}

        for (;x <= x2-shag;x = x + shag)
          {
              if (a==0 && x==0)
                {
                  printf("\n Невозможно сосчитать функцию.");
                  error = 1;
                  break;
                }
              G = (5*(9*pow(a,2)-26*a*x+16*pow(x,2)))/(20*pow(a,2)+29*a*x+5*pow(x,2));
              mas[j] = G;
              otvet[0].maso[j] = G;
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
          printf("\nКоличество совпадений %d\n",k); 

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

          FILE *file;
          file = fopen("lab7.txt", "w+");
          if ((file = fopen("lab7.txt","w+")) == NULL)
          {
            printf("Ошибка при открытии файла.\n");
            exit(1);
          }
          for (j = 0; j < i ; j++)
           {       
            fprintf(file,"%f\t",otvet[0].maso[j]);
           } 
           fprintf(file,"%c\n",c);      
          fclose(file);


          j = 0;
          i = 0;
          k = 0;
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
          printf ("Введите колличество шагов вычисления функции\n");
          fgets(stk, 255, stdin);
          kolshag = atof(stk);
       		shag = (x2-x)/kolshag;
       		if (shag > x2)
       			{
       			  printf ("Шаг вычисления функции больше чем сама область вычисления функции\n");
       			  error = 6;
       			  break;
       			}
       		for (;x <= x2;x = x + shag)
       			{ 
       			F = 1/cos(14*pow(a,2)-19*a*x+6*pow(x,2));
              		mas[j] = F;
                  	otvet[1].maso[j] = F;
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
 
        
          file = fopen("lab7.txt", "a+");
          if ((file = fopen("lab7.txt","a+")) == NULL)
          {
            printf("Ошибка при открытии файла.\n");
            exit(1);
          }
          for (j = 0; j < i ; j++)
           {       
            fprintf(file,"%f\t",otvet[1].maso[j]); 
           }
          fprintf(file,"%c\n",c);
          fclose(file);


          j = 0;
          i = 0;
          k = 0;
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
       		printf ("Введите колличество шагов вычисления функции\n");
          fgets(stk, 255, stdin);
          kolshag = atof(stk);
       		shag = (x2-x)/kolshag;
       		if (shag > x2)
       			{
       			printf ("Шаг вычисления функции больше чем сама область вычисления функции\n");
       			break;
       			}
       		for (x;x <= x2;x = x + shag)
          {
		Y = log(-80*pow(a,2)+6*a*x+35*pow(x,2)+1)/log(10);
            	mas[j] = Y;
                otvet[2].maso[j] = Y;
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


          file = fopen("lab7.txt", "a+");
          if ((file = fopen("lab7.txt","a+")) == NULL)
          {
            printf("Ошибка при открытии файла.\n");
            exit(1);
          }
          for (j = 0; j < i ; j++)
           {       
            fprintf(file,"%f\t",otvet[2].maso[j]);
           }
          fprintf(file,"%c\n",c);     
          fclose(file);
          memset(otvet[0].maso,0,N);
          memset(otvet[1].maso,0,N);
          memset(otvet[2].maso,0,N); 
          file = fopen("lab7.txt", "r");
          if ((file = fopen("lab7.txt","r")) == NULL)
          {
            printf("Ошибка при открытии файла.\n");
            exit(1);
          }   
          fgets(otvet[0].mass,255,file);
          fgets(otvet[1].mass,255,file);
          fgets(otvet[2].mass,255,file);
          fclose(file);  		
	
	
printf("Хотите выйти из программы? 1 - Да 0 - Нет\n");
scanf ("%d", &exit1);
getchar();
}
return error;
}
