#!/bin/python3
# -*- coding: utf-8 -*-

lol = []
for i in range(0, 1000, 1):
    for k in range(0, 1000, 1):
        if str(i * k) == str(i * k)[-1::-1]:
            lol.append(i * k)

print(max(lol))
