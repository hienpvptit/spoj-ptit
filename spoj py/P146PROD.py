from sys import exit
n = int(input())
count = 0
for i in range(0,n):
    num = 0
    T = raw_input()
    for i in T:
        if i=='1':
            num += 1
    if num>=2:
        count += 1
print count

exit(0)
