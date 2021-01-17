import math
i = 100
lis = []

while True:
    b = str(i)
    temp = 0
    for j in b:
        temp += math.factorial(int(j))

    if temp == i:
        lis.append(i)
        print(sum(lis))

    i += 1
