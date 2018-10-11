from sys import exit
s = raw_input()
s = s+" "
i = 0
k = 0
Color = range(0,4)
while k<len(s) and i<4:
    temp = ''
    while s[k]==' ':
        k = k+1
    while s[k]!=' ':
        temp = temp+s[k]
        k = k+1
    Color[i] = long(temp)
    i = i+1

del s
del i
del k
del temp

Count = 0

for i in range(0,3):
    for j in range(i+1,4):
        if Color[j]==Color[i]:
            Count = Count + 1
            break

print Count

exit(0)
