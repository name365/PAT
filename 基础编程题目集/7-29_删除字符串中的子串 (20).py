s1, s2 = raw_input(), raw_input()
while s2 in s1:
    s1 = s1.replace(s2, '')
print s1

