from sys import exit

N = int(input())
Cap = [range(0,4)]

for i in range(1,N):
    Cap.append(range(0,4))

for i in range(0,N):
    s = raw_input()
    s = s + " "
    k = 0
    j = 0
    while k<len(s) and j<4:
        temp = ""
        while s[k]==' ':
            k = k+1
        while s[k]!=' ':
            temp = temp+s[k]
            k = k+1
        if j==0:
            Cap[i][j] = temp
        else:
            Cap[i][j] = int(temp)
        j = j+1
    del s
    del k
    del j
    del temp

for i in range(0,N-1):
    for j in range(0,N-1):
        if Cap[j][3]>Cap[j+1][3]:
            temp = Cap[j]
            Cap[j] = Cap[j+1]
            Cap[j+1] = temp

for i in range(0,N-1):
    for j in range(0,N-1):
        if Cap[j][2]>Cap[j+1][2] and Cap[j][3]==Cap[j+1][3]:
            temp = Cap[j]
            Cap[j] = Cap[j+1]
            Cap[j+1] = temp

for i in range(0,N-1):
    for j in range(0,N-1):
        if Cap[j][1]>Cap[j+1][1] and Cap[j][3]==Cap[j+1][3] and Cap[j][2]==Cap[j+1][2]:
            temp = Cap[j]
            Cap[j] = Cap[j+1]
            Cap[j+1] = temp

print Cap[N-1][0]
print Cap[0][0]           

exit(0)
