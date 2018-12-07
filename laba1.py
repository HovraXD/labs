#!/usr/bin/env python
# -*- coding: utf-8 -*-
from math import cos,log, pow

print('==============================')
print(' Введите значения переменных:')
a = float(input(' a = '))
x = float(input(' x = '))
print('==============================')
G = (5*(9*pow(a,2)-26*a*x+16*pow(x,2)))/(20*pow(a,2)+29*a*x+5*pow(x,2))
F = 1/cos(14*pow(a,2) -19*a*x+6*pow(x,2))
Y = log(-80*pow(a,2)+6*a*x+35*pow(x,2)+1)/log(10)
print(' G = %.6f' % G)
print(' F = %.6f' % F)
print(' Y = %.6f' % Y)
print('==============================')
