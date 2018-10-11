from sys import exit

s = raw_input()
f = s.find(' ')
A = int(s[0:f])
temp = f
f = s[temp+1::].find(' ')
B = int(s[temp+1:temp+f+1])
V = int(s[temp+f+2::])
h1 = V - B
h2 = A - B
if h1%h2==0:
    day = h1/h2
else:
    day = long(round((float(h1))/h2 + .5))

print day

exit(0)
