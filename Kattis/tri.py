a = list(map(int, input().split()))

if a[0] + a[1] == a[2]:
    res = str(a[0]) + "+" + str(a[1]) + "=" + str(a[2])
    print(res)
elif a[0] - a[1] == a[2]:
    res = str(a[0]) + "-" + str(a[1]) + "=" + str(a[2])
    print(res)
elif a[0] * a[1] == a[2]:
    res = str(a[0]) + "*" + str(a[1]) + "=" + str(a[2])
    print(res)
elif a[0] / a[1] == a[2]:
    res = str(a[0]) + "/" + str(a[1]) + "=" + str(a[2])
    print(res)
elif a[0] == a[1] + a[2]:
    res = str(a[0]) + "=" + str(a[1]) + "+" + str(a[2])
    print(res)
elif a[0] == a[1] - a[2]:
    res = str(a[0]) + "=" + str(a[1]) + "-" + str(a[2])
    print(res)
elif a[0] == a[1] * a[2]:
    res = str(a[0]) + "=" + str(a[1]) + "*" + str(a[2])
    print(res)
elif a[0] == a[1] / a[2]:
    res = str(a[0]) + "=" + str(a[1]) + "/" + str(a[2])
    print(res)