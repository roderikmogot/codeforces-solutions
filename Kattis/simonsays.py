t = int(input())
for i in range(t):
    says = input()
    l = []
    if "Simon says" in says:
        l.insert(i, says[11::])

    for k in range(len(l)):
        print(l[k])
