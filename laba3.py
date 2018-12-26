#!/usr/bin/env python
# -*- coding: utf-8 -*-

from math import cos, log, pow

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

nofsteps2 = 1
if (b == 1 and a !=0 and x != 0):
    for nofsteps2 in range(nofsteps):
        G = (5*(9*pow(a,2)-26*a*x+16*pow(x,2)))/(20*pow(a,2)+29*a*x+5*pow(x,2))
        print(" %.6f' '%.6f" % (x, G))
        x = (x+step)
elif (b == 2):
    for nofsteps2 in range(nofsteps):
        F = (1/cos(14*pow(a,2)-19*a*x+6*pow(x,2)))
        print(" %.6f' '%.6f" % (x, F))
        x = (x+step)
elif ( b == 3 and x > a):
    for nofsteps2 in range(nofsteps):
        Y = (log(-80*pow(a,2)+6*a*x+35*pow(x,2)+1)/log(10))
        print(" %.6f' '%.6f" % (x, Y))
        x = (x+step)
else:
    print(' Неверный номер формулы или невозможно посчитать!')
print('======================================================')


