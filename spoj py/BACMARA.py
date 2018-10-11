from sys import exit
N = int(input())
cow = [range(0,3)]
for i in range(1,N):
    cow.append(range(0,3))
for i in range(0,N):
    s = raw_input()
    f = s.find(' ')
    cow[i][0] = int(s[0:f])
    temp = f
    f = s[temp+1::].find(' ')
    cow[i][1] = int(s[temp+1:temp+1+f])
    cow[i][2] = int(s[temp+f+2::])
    del s
    del f
    del temp
for i in range(0,N-1):
    for j in range(0,N-1):
        if cow[j][0]>cow[j+1][0]:
            temp = cow[j]
            cow[j] = cow[j+1]
            cow[j+1] = temp

for i in range(0,N-1):
    for j in range(0,N-1):
        if cow[j][1]>cow[j+1][1] and cow[j][0]==cow[j+1][0]:
            temp = cow[j]
            cow[j] = cow[j+1]
            cow[j+1] = temp

for i in range(0,N-1):
    for j in range(0,N-1):
        if cow[j][2]>cow[j+1][2] and cow[j][0:2]==cow[j+1][0:2]:
            temp = cow[j]
            cow[j] = cow[j+1]
            cow[j+1] = temp
for i in range(0,N):
    print cow[i][0],cow[i][1],cow[i][2]

exit(0)
