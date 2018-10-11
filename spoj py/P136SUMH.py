from sys import exit
T = raw_input()
f = T.find(" ")
A = int(T[0:f])
C = int(T[f+1::])
print A*(C-1)+1

exit(0)
