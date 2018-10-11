n=input()

def tcs(m):
    temp=m
    tong=0;
    while temp>0:
        tong=tong+temp%10
        temp=temp/10
    return tong

while n>0:
    num=input()
    s=tcs(num)
    while s>=10:
        s=tcs(s)
    print s
    n=n-1;
