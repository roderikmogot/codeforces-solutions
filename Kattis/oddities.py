t = int(input())

for i in range(t):
    l = int(input())
    if l == 2 or l == 0:
        print(l, "is even")
    elif l == 1:
        print(l, "is odd")
    elif l % 2 == 0:
        print(l, "is even")
    elif l % 2 != 0:
        print(l, "is odd")