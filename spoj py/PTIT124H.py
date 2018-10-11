x=[[0,0],[0,0],[0,0]]
for i in range(0,3):
    s=raw_input()
    f=s.find(' ')
    x[i][0]=int(s[0:f])
    x[i][1]=int(s[f+1::])

for i in range(0,2):
    for j in range(i,3):
        if x[i][0]!=x[j][0] and x[i][1]!=x[j][1]:
            ktx=i
            kty=j

xtd=x[ktx][0]+x[kty][0]
ytd=x[ktx][1]+x[kty][1]
for i in range(0,3):
    if i!=ktx and i!=kty:
        xD=xtd-x[i][0]
        yD=ytd-x[i][1]
print xD,yD
