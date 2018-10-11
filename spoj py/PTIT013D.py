from sys import exit

T = int(input())
while T>0:

    n = int(input())

    if n<2:
        print n
    elif n==2:
        print "4"
    else:
        result = 0
        if n%2==0:
            for i in range(2,n+1,2):
                result += i
            result = result*2 - n
        else:
            for i in range(1,n+1,2):
                result += i
            result = result*2 - n
        print result
    T -= 1
