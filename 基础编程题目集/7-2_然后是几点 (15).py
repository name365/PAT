
start, addMinute = raw_input().split()
minute = int(start[-2:]) + int(addMinute)
hour = int(start[:-2]) + minute / 60
minute = minute % 60
print hour*100 + minute

