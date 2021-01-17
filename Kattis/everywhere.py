case = int(input())

for i in range(case):
    t = int(input())
    l = []
    for j in range(t):
        a = input()
        if a not in l:
            l.insert(j, a)

    print(len(l))



