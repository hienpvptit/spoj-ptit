from sys import exit
st = raw_input()
f = st.find(' ')
m = int(st[0:f])
s = int(st[f+1::])

if m==1 and s==0:
    print '0 0'
    exit(0)

if s>9*m or s==0:
    print '-1 -1'
    exit(0)

Max = range(0,m)
Min = Max

for i in range(0,m):
    Max[i]=0
    Min[i]=0

scs = s/9
du = s - scs *9
for i in range(0,scs):
    Max[i] = 9
if scs<m and du!=0:
    Max[scs]=du

Min = Max[::-1]

if Min[0]==0:
    Min[0]=1
    for i in range(1,m):
        if Min[i]!=0:
            Min[i] = Min[i]-1
            break
str_max=""
str_min=""
for i in range(0,m):
    str_max = str_max + str(Max[i])
    str_min = str_min + str(Min[i])

print str_min,str_max
exit(0)
