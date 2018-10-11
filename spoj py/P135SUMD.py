from sys import exit

K = long(input())

H = K - 1
H |= H>>1
H |= H>>2
H |= H>>4
H |= H>>8
H |= H>>16
H += 1

print H,

count = 0
if K<H:
    gif = 0
    while gif!=K:
        gif += H/2
        if gif>K:
            gif -= H/2
        H /= 2
        count += 1
print count

exit(0)
