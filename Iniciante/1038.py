# -*- coding: utf-8 -*-
values = {1:4, 2:4.5, 3:5, 4:2, 5:1.5}
prod,qtd = raw_input().split()
prod = int(prod)
qtd = int(qtd)
soma = 0

for i in range(0,qtd):
    soma += values[prod]
soma = "%.2f" % soma
print "Total: R$ " + str(soma)