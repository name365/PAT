s = raw_input()
n = int(raw_input())
n = n % len(s)
print (s[n-1::-1]+s[:n-1:-1])[::-1]
