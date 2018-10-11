from sys import exit

s = raw_input()

count_R = s.count('R')
count_L = s.count('L')
count_W = s.count('?')

print abs(count_R - count_L) + count_W

exit(0)
