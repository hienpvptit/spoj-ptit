s=raw_input()
n=s.find(' ')
a=long(s[0:n])
b=long(s[n+1::])
print a+b
