N=input()
In=range(0,N)
count=0
for i in range(0,N):
    In[i]=input()
    if i>0:
        if In[i]!=In[i-1]:
            count=count+1
print count
