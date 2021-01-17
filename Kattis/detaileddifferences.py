test = int(input())
for i in range(test):
    a = input()
    b = input()
    save = ''
    for j in range(len(a)):
        if a[j] == b[j]:
            save = save + "."
        else:
            save = save + "*"

    print(a)
    print(b)
    print(save + '\n')