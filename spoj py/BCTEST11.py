from sys import exit
div=[4,7,44,47,74,77,444,447,474,744,477,747,774,777]
Num=int(input())
for i in div:
    if Num%i==0:
        print 'YES'
        exit(0)
print 'NO'
