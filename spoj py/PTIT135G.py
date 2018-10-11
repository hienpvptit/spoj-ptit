from sys import exit
s = raw_input()
f = s.find(' ')
N = int(s[0:f])
M = long(s[f+1::])

del f
del s

Card = range(0,N)
s = raw_input()
s = s+' '
t = k = 0
n=len(s)
temp = ''
while t<n:
    if s[t]!=' ':
        temp = temp + s[t]
    else:
        Card[k] = long(temp)
        temp = ''
        k = k+1
    t = t+1

del temp
del k
del t
del s
del n
t = 0
for i in range(0,N-1):
    for j in range(i+1,N):
        two = Card[i]+Card[j]
        temp = M - two
        if temp>0:
            for k in range(0,N):
                if k!=i and k!=j:
                    if Card[k]==temp:
                        print M
                        exit(0)
                    if Card[k]+two>t and Card[k]+two<M:
                        t = Card[k]+two
                        
print t
exit(0)
