from sys import exit
s=raw_input()
Result=""
temp=""
k=0
for i in range(len(s)-1,-1,-1):
    if k%4==3:
        temp=temp+','
        k=k+1
    temp=temp+s[i]
    k=k+1
for i in range(len(temp)-1,-1,-1):
    Result=Result+temp[i]

print Result
del Result
del temp
del k
del s
del i
exit(0)
