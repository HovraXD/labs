#!/usr/bin/env python
# -*- coding: utf-8 -*-

from math import cos, log, pow
from array import *
import os

os.system('clear')
array_mas = []
str_result = ""
amount = 0
print('======================================================')
b = int(input(' Выберите функци (G - 1, F - 2, Y - 3): '))
print('======================================================')
str_a = input(' Введите значение переменной a: ')
a = float(str_a)
str_x = input(' Минимальное значение переменной x: ')
x = float(str_x)
str_xmax = input(' Максимальное значение переменной x: ')
xmax = float(str_xmax)
print('======================================================')
str_nofsteps = input(' Введите количество итераций: ')
nofsteps = int(str_nofsteps)
print('======================================================')
str_shablon = input(' Введите шшаблон: ')
print('======================================================')
shablon = float(str_shablon)
step = ((xmax-x)/nofsteps)
x2 = 0
x3 = 0
min = 0
max = 0
i = 0
nofsteps2 = 0
if (b == 1 and a !=0 and x != 0):
    for nofsteps2 in range(nofsteps):
        G = str((5*(9*pow(a,2)-26*a*x+16*pow(x,2)))/(20*pow(a,2)+29*a*x+5*pow(x,2)))
        str_result = str_result + G + '\t'
	G2 = float(G)
        if (G2 == shablon):
            amount = amount+1
        if (max == 0):
            max = G2
            min = max
            x3 = x
            x2 = x
        elif (max < G2):
            max = G2
            x3 = x
        elif (min > G2):
            min = G2
            x2 = x
        x = x+step
        i = i+1
elif (b == 2):
    for nofsteps2 in range(nofsteps):
        F = str(1/cos(14*pow(a,2)-19*a*x+6*pow(x,2)))
	str_result = str_result + G + '\t'
        G2 =float(G)
        if (G2 == shablon):
            amount = amount+1
        if (max == 0):
            max = G2
            min = max
            x3 = x
            x2 = x
        elif (max < G2):
            max = G2
            x3 = x
        elif (min > G2):
            min = G2
            x2 = x
        x = x+step
        i = i+1
elif ( b == 3 and x > a):
    for nofsteps2 in range(nofsteps):
        Y = str(log(-80*pow(a,2)+6*a*x+35*pow(x,2)+1)/log(10))
        str_result = str_result + G + '\t'
        G2 = float(G)
        if (G2 == shablon):
            amount = amount+1
        if (max == 0):
            max = G2
            min = max
            x3 = x
            x2 = x
        elif (max < G2):
            max = G2
            x3 = x
        elif (min > G2):
            min = G2
            x2 = x
        x = x+step
        i = i+1
else:
    print(' Неверный номер формулы или невозможно посчитать!')
print('======================================================')
print(str_result)
print(' Миниимальное значение: %f %f' % (x2, min))
print(' Максимальное значение: %f %f' % (x3, max))
print(' Количество совпадений с шаблоном: %d' % amount)
print('======================================================')
