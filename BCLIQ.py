N = int(input())
A = range(0,N)
s = raw_input()
s = s+" "
k = 0
i = 0
while k<len(s) and i<N:
    temp = ""
    while s[k]==' ':
        k = k+1
    while s[k]!=' ':
        temp = temp+s[k]
        k = k+1
    A[i] = int(temp)
    i = i+1

del i
del k
del s
del temp
count = 1
Max = 1
for i in range(0,N-1):
    temp = A[i]
    for j in range(i+1,N):
        if temp<A[j]:
            count = count + 1
            temp = A[j]
    if count>Max:
        Max = count
    count = 1
print Max
    
