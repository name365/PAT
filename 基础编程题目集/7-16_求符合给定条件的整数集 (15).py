from itertools import permutations 

n = int(raw_input())
s = sorted( \
    list(permutations([n, n+1, n+2])) \
    + list(permutations([n, n+2, n+3])) \
    + list(permutations([n+1, n+2, n+3])) \
    + list(permutations([n, n+1, n+3])))
s = map(lambda x: x[0]*100+x[1]*10+x[2], s)
for index, value in enumerate(s):
    if index != 0 and index % 6 == 0:
        print 
    print value,

