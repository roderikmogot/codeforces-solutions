import math

t = int(input())
for i in range(t):
    n = int(input())
    a = list(str(math.factorial(n)))

    print(*a[-1:])