In=raw_input()
count=0
for i in range(0,len(In)):
    if In[i]=='4' or In[i]=='7':
        count=count+1
if count==4 or count==7:
    print "YES"
else:
    print "NO"
