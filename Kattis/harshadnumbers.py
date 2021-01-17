a = int(input())

while a <= 1000000000:
    temp = 0
    b = str(a)
    for i in b:
        temp = temp + int(i)

    if a % temp == 0:
        print(a)
        break
    else:
        a = a + 1



