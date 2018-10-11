from sys import exit
Tail=['TTT','TTH','THT','THH','HTT','HTH','HHT','HHH']
count=range(0,8)
P = int(input())

while P>0:
    N=int(input())
    s=raw_input()
    check=""
    for i in range(0,8):
        count[i]=0
    for i in range(0,38):
        for j in range(i,i+3):
            check=check+s[j]
        for j in range(0,8):
            if check==Tail[j]:
                count[j]=count[j]+1
                break
        check=""
    print N,
    for i in range(0,8):
        print count[i],
    print
            
    P=P-1
