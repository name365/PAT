balls = map(int, raw_input().split())
b = reduce(lambda x, y: x ^ y, balls)
print chr(balls.index(b) + ord('A'))
