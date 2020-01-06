#!/bin/python3
# -*- coding: utf-8 -*-

from math import pow

def sumOfPow(n):
    return sum([pow(x, 2) for x in range(n)])

def powOfSum(n):
    return pow(sum([x for x in range(n)]), 2)

print(powOfSum(101) - sumOfPow(101))
