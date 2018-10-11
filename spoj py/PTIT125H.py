from sys import exit
N = int(input())
s = raw_input()
count = 1
i = 0
while i<N:
    if s[i]=='S':
        count+=1;
    if s[i]=='L':
        count+=1
        i+=1
    i+=1
if count<N:
    print count
else:
    print N
