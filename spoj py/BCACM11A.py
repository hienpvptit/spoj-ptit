from sys import exit
T = int(input())
while T>0:
    A = range(0,3)
    s = raw_input()
    s = s + " "
    k = 0
    i = 0
    temp = ""
    while k<len(s) and i<3:
        while s[k] == ' ' and len(temp)==0:
            k = k+1
        while s[k]!=' ':
            temp = temp+s[k]
            k = k+1
        A[i]= int(temp)
        temp = ""
        i = i+1
    if A[0]<=145:
        if A[1]<=180-A[0]:
            if A[2]<=900-A[0]-A[1]:
                print "YES"
            else:
                print "NO"
        else:
            print "NO"
    else:
        print "NO"
    
    T = T-1
exit(0)
