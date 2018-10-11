from sys import exit

s = raw_input()
s = s.lower()
Result=""
for i in range(0,len(s)):
    if s[i]=='e' or s[i]=='y' or s[i]=='u' or s[i]=='i' or s[i]=='o' or s[i]=='a':
        continue
    else:
        Result=Result+'.'
    Result=Result+s[i]
print Result

exit(0)
