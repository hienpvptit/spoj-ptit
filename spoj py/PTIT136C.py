from sys import exit
def dao(a):
    print a[::-1]

s=raw_input()
n=s.find(' ')
a=s[0:n]
b=s[n+1:len(s)]
la=len(a)
lb=len(b)
l=la-1
while l>0:
    if a[l]>b[l] or l==0:
        dao(a)
        break
    if a[l]<b[l]:
        dao(b)
        break
    l=l-1

exit(0)
