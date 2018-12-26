#!/usr/bin/env python
# -*- coding: utf-8 -*-

from math import cos, log, pow
from array import *
import os

os.system('clear')
array_mas = []
print('======================================================')
b = int(input(' Выберите функци (G - 1, F - 2, Y - 3): '))
print('======================================================')
a = float(input(' Значение переменной a = '))
x = float(input(' Минимальное значение переменной x = '))
xmax = float(input(' Максимальное значение переменной x = '))
print('======================================================')
nofsteps = int(input(' Введите количество итераций = '))
print('======================================================')
step = ((xmax-x)/nofsteps)

x2 = 0
x3 = 0
min = 0
max = 0
i = 0
nofsteps2 = 0
if (b == 1 and a !=0 and x != 0):
    for nofsteps2 in range(nofsteps):
        G = (5*(9*pow(a,2)-26*a*x+16*pow(x,2)))/(20*pow(a,2)+29*a*x+5*pow(x,2))
        array_mas.append (G)
        print(' %.6f %.6f' % (x, array_mas [i]))
        if (max == 0):
            max = array_mas [i]
            min = max
            x3 = x
            x2 = x
        elif (max < array_mas [i]):
            max = array_mas [i]
            x3 = x
        elif (min > array_mas  [i]):
            min = array_mas [i]
            x2 = x
        x = x+step
        i = i+1
elif (b == 2):
    for nofsteps2 in range(nofsteps):
        F = (1/cos(14*pow(a,2)-19*a*x+6*pow(x,2)))
	array_mas.append (F)
        print(" %.6f %.6f" % (x, array_mas [i]))
        if (max == 0):
            max = array_mas [i]
            min = max
            x3 = x
            x2 = x
        elif (max < array_mas [i]):
            max = array_mas [i]
            x3 = x
        elif (min > array_mas [i]):
            min = array_mas [i]
            x2 = x
        x = x+step
        i = i+1
elif ( b == 3 and x > a):
    for nofsteps2 in range(nofsteps):
        Y = (log(-80*pow(a,2)+6*a*x+35*pow(x,2)+1)/log(10))
        array_mas.append (Y)
        print(" %.6f %.6f" % (x, array_mas [i]))
        if (max == 0):
            max = array_mas [i]
            min = max
            x3 = x
            x2 = x
        elif (max < array_mas [i]):
            max = array_mas [i]
            x3 = x
        elif (min > array_mas [i]):
            min = array_mas [i]
            x2 = x
        x = x+step
        i = i+1
else:
    print(' Неверный номер формулы или невозможно посчитать!')
print('======================================================')
print(' Миниимальное значение: %.6f %.6f' % (x2, min))
print(' Максимальное значение: %.6f %.6f' % (x3, max))
print('======================================================')
