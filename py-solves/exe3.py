#!/bin/python3
# -*- coding: utf-8 -*-
a = 600851475143
simple = []
answ = []
def isPrime(n):
    if n == 1:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
        else:
            return True

for i in range(600000000000, a):
    if isPrime(i):
        simple.append(i)

for i in simple:
    if a % i == 0:
        answ.append(i)

print(answ[-1])
