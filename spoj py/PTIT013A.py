N=input()
while N>0:
    s=raw_input()
    if len(s)<2:
        print '0'
    else:
        if s[len(s)-1]=='6' and s[len(s)-2]=='8':
            print '1'
        else:
            print '0'
    N=N-1
    
