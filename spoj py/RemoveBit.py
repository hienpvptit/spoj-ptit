from sys import exit

s = raw_input()

f = s.find('0')

if f==-1:
    print s[0:len(s)-1]
else:
    result = ''
    result = s[0:f]+s[f+1::]
    print result

exit(0)
