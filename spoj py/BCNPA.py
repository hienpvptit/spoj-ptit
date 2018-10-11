from sys import exit
from math import sqrt
def NT(n):
    if n<2:
        return 0
    for i in range(2,int(sqrt(n))+1,1):
        if n%i==0:
            return 0
    return 1

T = int(input())
while T>0:
    n = int(input())
    s = count = 0
    if NT(n)==1:
        count = count+1
    for i in range(2,n/2+1):
        s = 0
        if NT(i)==1:
            for j in range(i,n+1):
                if NT(j)==1:
                    s = s+j
                    if s==n:
                        count = count+1
                    if s>n:
                        break
    print count
    T=T-1
exit(0)
