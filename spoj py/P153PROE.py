from sys import exit

n = long(input())

Pot = range(0,n+1)

s = raw_input()
s = s + " "
k = 0
i = 0
while i<len(s) and k<=n:
    temp = ""
    while s[i]==' ':
        i = i+1
    while s[i]!=' ':
        temp = temp + s[i]
        i = i+1
    Pot[k] = long(temp)
    k = k + 1

del i
del k
del s
del temp

i = n
carry = 0
while i>0:
    if Pot[i]%i==0:
        div = Pot[i]/i
        carry = carry + div
        Pot[i-1] = Pot[i-1] + carry
    else:
        print 'No'
        exit(0)
    i = i-1

print 'Yes'
exit(0)
