import math, sys


def divisorGenerator(n):
    large_divisors = []
    for i in range(1, int(math.sqrt(n) + 1)):
        if n % i == 0:
            yield i
            if i * i != n:
                large_divisors.append(int(n / i))
    for divisor in reversed(large_divisors):
        yield divisor


for k in sys.stdin.readlines():
    c = int(k)
    temp = 0
    divisors_c = list(divisorGenerator(c))
    for i in range(len(divisors_c)-1):
        temp += divisors_c[i]

    if temp == c:
        print(c, "perfect")
    elif temp - 2 <= c <= temp + 2:
        print(c, "almost perfect")
    else:
        print(c, "not perfect")
