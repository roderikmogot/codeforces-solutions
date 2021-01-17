t = int(input())

for i in range(t):
    lis = list(map(int, input().split()))
    total = 0
    for j in range(1, len(lis)):
        total += lis[j]

    average_total = int(total / lis[0])

    data = 0
    for k in range(1, len(lis)):
        if lis[k] > average_total:
            data += 1

    more_than_average = data / (len(lis) - 1) * 100

    print('%.3f' % more_than_average, end='%\n')
