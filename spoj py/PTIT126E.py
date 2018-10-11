s=raw_input()
while s[0]!='#':
    Y=0
    N=0
    A=0
    for k in s:
        if k=='Y':
            Y=Y+1
        if k=='N':
            N=N+1
        if k=='A':
            A=A+1
    if A>=int(round(float(len(s))/2)):
        print 'need quorum'
    else:
        if Y>N:
            print 'yes'
        elif Y<N:
            print 'no'
        else:
            print 'tie'
    s=raw_input()
