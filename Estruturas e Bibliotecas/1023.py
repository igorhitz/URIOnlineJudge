from __future__ import division

def truncate(f, n):
    '''Truncates/pads a float f to n decimal places without rounding'''
    s = '%.12f' % f
    i, p, d = s.partition('.')
    return '.'.join([i, (d+'0'*n)[:n]])


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
		media = totalconsumo/morador
		if media in cidade:
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
	for key in sorted(cidade):
		string += "%d-%d " % (cidade[key], key)
	print string
	mediafinal = truncate(mediacidade, 2)
	print "Consumo medio: %s m3" % (mediafinal)


	cidade.clear()
	n = input()