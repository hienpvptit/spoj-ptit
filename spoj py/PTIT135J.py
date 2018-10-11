from sys import exit
T=int(input())
while T>0:
    s=raw_input()
    n=s.find(' ')
    N=float(s[0:n])
    temp=n
    n=s[n+1::].find(' ')
    L=float(s[temp+1:temp+1+n])
    M=float(s[temp+n+2::])
    year=0
    while N<M:
        N=N+N*(L/100)
        year=year+1
    print year
    T=T-1

exit(0)
