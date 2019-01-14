import math

exit1 = 0
while exit1 == 0:

	dictg = {}
	dictf = {}
	dicty = {}
	vivod = []
	mas = []
	stg = []
	stf = []
	sty = []
	mas.clear()
	stg.clear()
	stf.clear()
	sty.clear()
	print ('Функция G')	
	sta = input("a:")
	a = float(sta)
	stx = input("x:")
	x = float(stx)
	stx2 = input("x2:")
	x2 = float(stx2)
	stk = input("Количество шагов вычисления:")
	kolshag = float (stk)
	shag = (x2 - x)/kolshag
	if shag > x2:
		print ("Шаг вычисления функции > Области вычисления функции\n")
		continue

	i = 0
	while x <= x2-shag:
		if (a ==0 and x ==0):
			print ("Функция не может быть вычислена так как знаменатель не может быть = 0\n")
			exit(0)
		G = str((5*(9*pow(a,2)-26*a*x+16*pow(x,2)))/(20*pow(a,2)+29*a*x+5*pow(x,2)))
		stg = "\t".join([str(i) for i in mas])
		print ('{:2f}\t {:2f}'.format(x,mas[i]))
		i = i + 1
		x = x + shag
	print(stg)
	dictg[G] = stg
	sh = input("Задайте шаблон для поиска совпадения ")
	sovp = stg.count(sh)
	print('Количество совпадений ' '%d' %sovp)
	minimum = min(mas)
	maximum = max(mas)
	print ('Минимальный элемент ''%2f' %minimum)
	print ('Максимальный элемент ''%2f' %maximum)

	print ('Функция F')				
	sta = input("a:")
	a = float(sta)
	stx = input("x:")
	x = float(stx)
	stx2 = input("x2:")
	x2 = float(stx2)
	stk = input("Количество шагов вычисления:")
	kolshag = float (stk)
	shag = (x2 - x)/kolshag
	if shag > x2-shag:
		print ("Шаг вычисления функции >  Области вычисления функции\n")
		continue

	mas.clear()	
	i = 0
	while x <= x2-shag:	
		F = str(1/cos(14*pow(a,2)-19*a*x+6*pow(x,2)))
		mas.append(F)
		stf = "\t".join([str(i) for i in mas])
		print ('{:2f}\t {:2f}'.format(x,mas[i]))
		i = i + 1
		x = x + shag

	print(stf)
	dictf[F] = stf
	sh = input("Задайте шаблон для поиска совпадения")
	sovp = stf.count(sh)
	print('Количество совпадений ' '%d' %sovp)
	minimum = min(mas)
	maximum = max(mas)
	print ('Минимальный элемент ''%2f' %minimum)
	print ('Максимальный элемент ''%2f' %maximum) 

	mas.clear()
	print ('Функция Y')
	i = 0		
	sta = input("a:")
	a = float(sta)
	stx = input("x:")
	x = float(stx)
	stx2 = input("x2:")
	x2 = float(stx2)
	if a == 0 and x == 0:
		print("\nНевозможно посчитать функцию.")
		continue
	stk = input("Количество шагов вычисления:")
	kolshag = float (stk)
	shag = (x2 - x)/kolshag
	if shag > x2:
		print ("Шаг вычисления функции > Области вычисления функции\n")
		continue
	while x <= x2-shag:
		Y = str(log(-80*pow(a,2)+6*a*x+35*pow(x,2)+1)/log(10))
		mas.append(Y)
		sty = "\t".join([str(i) for i in mas])
		print ('{:2f}\t {:2f}'.format(x,mas[i]))
		i = i + 1
		x = x + shag

	print(sty)
	dicty[Y] = sty
	sh = input("Задайте шаблон для поиска совпадения")
	sovp = sty.count(sh)
	print('Количество совпадений ' '%d' %sovp)
	minimum = min(mas)
	maximum = max(mas)
	print ('Минимальный элемент ''%2f' %minimum)
	print ('Максимальный элемент ''%2f' %maximum)



	vivod.append(dictg)
	vivod.append(dictf)
	vivod.append(dicty)
			


	print ("Хотите выйти из программы 1 - да 0 - нет")
	exit1 = int(input())		
	
