# TLE!!!!!!
from math import floor
n = int(input())
lighton = []
for i in range(0,n):
    a,t = (input().split())
    a = float(a)
    t = int(t)
    for j in range(1,t + 1):
        value = floor(a * j)
        if value in lighton:
            lighton.remove(value)
        else:
            lighton.append(value)
print(lighton[0])
