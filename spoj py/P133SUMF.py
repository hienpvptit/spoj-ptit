from sys import exit
A = range(0,3)
s = raw_input()
n = s.find(' ')
A[0] = int(s[0:n])
temp = n
n = s[temp+1::].find(' ')
A[1] = int(s[temp+1:temp+1+n])
A[2] = int(s[n+2+temp::])

A.sort()
h1=A[1]-A[0]
h2=A[2]-A[1]

if h1>h2:
    d=A[0]+h2
elif h2>h1:
    d=A[1]+h1
else:
    d=A[2]+h1

print d
exit(0)
