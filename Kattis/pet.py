a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = list(map(int, input().split()))
d = list(map(int, input().split()))
e = list(map(int, input().split()))

f = sum(a)
g = sum(b)
h = sum(c)
i = sum(d)
j = sum(e)

data = [f, g, h, i, j]
if max(data) == f:
    print(1, f)
elif max(data) == g:
    print(2, g)
elif max(data) == h:
    print(3, h)
elif max(data) == i:
    print(4, i)
elif max(data) == j:
    print(5, j)
