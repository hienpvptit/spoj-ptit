from sys import exit

GT = [1,2,6,24,120,720,5040,40320,362880]

T = int(input())

while T>0:
    s = raw_input()
    n = len(s)
    result = 0;
    for i in range(0,n):
        result = result + int(s[i])*GT[n-i-1]
    print result

    T = T-1
