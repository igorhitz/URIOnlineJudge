# -*- coding: utf-8 -*-
from math import sqrt

A = input()
B = input()
C = input()

if A == 0:
    print "Impossivel Calcular"
delta = B*B - 4*A*C
if delta < 0:
    print "Impossivel Calcular"
R1 = (-B + sqrt(delta)) / (2*A)
R2 = (-B - sqrt(delta)) / (2*A)
R1 = "%.5f" % R1
R2 = "%.5f" % R2
print "R1 = " + str(R1)
print "R2 = " + str(R2)