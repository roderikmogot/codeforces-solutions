n = [n for n in input().split()]
check = True
k = []
for j in n:
    if j not in k:
        k.append(j)
    else:
        check = False
        break
if check:
    print("yes")
else:
    print("no")
