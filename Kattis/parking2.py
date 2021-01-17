t = int(input())
for i in range(t):
    b = int(input())
    lis = list(map(int, input().split()))
    tes = max(lis) - min(lis)
    print(tes*2)