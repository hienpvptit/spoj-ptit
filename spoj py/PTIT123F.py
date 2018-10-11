T=int(input())
while T>0:
    n=int(input())
    Jail=range(0,n+1)
    for i in range(1,n+1):
        Jail[i]=1
    for i in range(2,n+1):
        for j in range(1,n+1):
            if j%i==0:
                if Jail[j]==0:
                    Jail[j]=1
                else:
                    Jail[j]=0
    count=0
    for i in range(1,n+1):
        if Jail[i]==1:
            count=count+1
    print count 
    del Jail[0:n+1]
    del n
    T=T-1
del count
