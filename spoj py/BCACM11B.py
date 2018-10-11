N = int(input())

def xoanoc(n,x,y):
    A = [range(0,n)]
    for i in range(1,n):
        A.append(range(0,n))
    i = j = d_colum = 0
    d_row = count = 1
    row = colum = n
    while d_colum<=2 or d_row<=2:
        while j<colum:
            A[i][j] = count
            count = count+1
            j = j+1
        j = j-1
        i = i+1
        if count>n*n:
            break
        while i<row:
            A[i][j] = count
            count = count+1
            i = i+1
        i = i-1
        j = j-1
        if count>n*n:
            break
        while j>=d_colum:
            A[i][j] = count
            count = count+1
            j = j-1
        j = j+1
        i = i-1
        if count>n*n:
            break
        while i>=d_row:
            A[i][j] = count
            count = count+1
            i = i-1
        if count>n*n:
            break
        i = i+1
        j = j+1
        row = row-1
        colum = colum-1
        d_colum = d_colum+1
        d_row = d_row+1
    return A[x][y]
        
    

while N>0:
    s=raw_input()
    f=s.find(' ')
    n=int(s[0:f])
    temp=f
    f=s.find(' ')
    x=int(s[temp+1:temp+f+1])
    y=int(s[temp+f+2::])
    print xoanoc(n,x-1,y-1)
    N=N-1
