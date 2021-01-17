case = int(input())
for i in range(case):
    a,b,c = input().split()
    d = int(a)
    e = int(b)
    f = int(c)
    if d + e == f or e + d == f:
        print("Possible")
    elif d - e == f or e - d == f:
        print("Possible")
    elif d * e == f:
        print("Possible")
    elif d / e == f or e / d == f:
        print("Possible")
    else:
        print("Impossible")
