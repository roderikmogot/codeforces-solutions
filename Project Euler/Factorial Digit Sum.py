def factorial(n):
    if n <= 1:
        return 1
    else:
        return n * factorial(n - 1)


t = list(str(factorial(100)))
m = 0
for i in t:
    f = int(i)
    m = m + f

print(m)