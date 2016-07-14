from __future__ import division
from collections import Counter

def truncate(f, n):
    '''Truncates/pads a float f to n decimal places without rounding'''
    s = '%.12f' % f
    i, p, d = s.partition('.')
    return '.'.join([i, (d+'0'*n)[:n]])

def countingsort(l, k):

	k = k + 1
	counter = [0] * k
	for x in l:
		counter[x] += 1
	
	total = 0
	for i in range(k):
		oldCount = counter[i]
		counter[i] = total
		total += oldCount

	output = [0] * len(l)
	for x in l:
		output[counter[x]] = (x,l[x])
		counter[x] += 1

	return output

contador = 0
n = input()
while n != 0:
	contador += 1
	cidade = {}
	mediacidade = 0
	totalmorador = 0
	for i in range(0, n):
		morador,totalconsumo = raw_input().split()
		morador = int(morador)
		totalconsumo = int(totalconsumo)
		media = int(totalconsumo/morador)
		if cidade.get(media) != None:
			cidade[media] += morador
		else:
			cidade[media] = morador
		totalmorador += morador
		mediacidade += totalconsumo
	mediacidade /= totalmorador
	
	if contador > 1:
		print "\nCidade# %d:" % (contador)
	else:
		print "Cidade# %d:" % (contador)
	string = ""
	cidadeSorted = countingsort(cidade, 200)
	for i in cidadeSorted:
	    string += "%d-%d" % (i[1], i[0])
	    if i != cidadeSorted[-1]:
	        string += " "
	print string
	mediafinal = truncate(mediacidade, 2)
	print "Consumo medio: %s m3." % (mediafinal)


	cidade.clear()
	n = input()