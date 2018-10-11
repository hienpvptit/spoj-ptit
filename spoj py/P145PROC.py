from sys import exit

arr =[]
for i in range(0,10):
    temp = int(input())
    temp = temp%42
    arr.append(temp)
arr.sort()
count = 1
for i in range(1,10):
    if arr[i]!=arr[i-1]:
        count+=1
print count
exit(0)
