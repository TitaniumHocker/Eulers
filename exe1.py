# -*- coding:utf-8 -*-

arr = [x for x in range(1000) if x % 3 == 0 or x % 5 == 0]
print(arr)
print(sum(arr))
