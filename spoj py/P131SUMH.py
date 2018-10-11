from sys import exit

s=raw_input()
n=s.find(' ')
a=int(s[0:n])
temp=n
n=s[n+1::].find(' ')
b=int(s[temp+1:temp+n+1])
c=int(s[temp+n+2::])

if c-b>b-a:
    print c-b-1
else:
    print b-a-1

exit(0)
