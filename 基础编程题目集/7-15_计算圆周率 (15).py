def fractor():
    f = 1
    i = 2
    while True:
        yield f
        f = f*i
        i += 1

def odd_fractor():
    f = 3
    i = 2
    while True:
        yield f
        f = f * (2*i+1)
        i += 1

f = fractor()
of = odd_fractor()
n = float(raw_input())
s = 1
while True:
    value = next(f) / float(next(of))
    s += value;
    if value < n: 
        break
print '%.6f' % (s * 2)



