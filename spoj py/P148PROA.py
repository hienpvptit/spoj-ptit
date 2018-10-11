from sys import exit
N = int(input())
while N!=0:
    temp = N
    count = 1
    while temp!=1:
        if temp%2==0:
            temp/=2
        else:
            temp=temp*3+1
        count += 1
    print count
    N = int(input())


exit(0)
