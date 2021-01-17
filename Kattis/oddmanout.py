import collections

test_case = int(input())

for i in range(test_case):
    index = int(input())
    lis = list(map(int, input().split()))
    b = [item for item, count in collections.Counter(lis).items() if count > 1]
    for j in lis:
        if j not in b:
            print("Case #" + str(i+1) + ": " + str(j))


