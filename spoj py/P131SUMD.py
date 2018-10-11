from sys import exit

s = raw_input()
f = s.find(' ')
s1 = s[0:f]
s2 = s[f+1::]

print long(s1.replace('6','5'))+long(s2.replace('6','5')),
print long(s1.replace('5','6'))+long(s2.replace('5','6'))

exit(0)
