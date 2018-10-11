from sys import exit

n = int(input())
x = range(0,n+1)
y = range(0,n+1)

count = 0

for i in range(1,n+1):
    s = raw_input()
    f = s.find(' ')
    x[i] = int(s[0:f])
    y[i] = int(s[f+1::])

x.sort()
y.sort()

for i in range(1,n+1):
    if x[i]!=i:
        count = count + abs(x[i]-i)
    if y[i]!=i:
        count = count + abs(y[i]-i)

print count

exit(0)
