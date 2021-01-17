t = int(input())
a = list(input().split())

for ab in range(len(a)):
    a[ab] = int(a[ab])

total = 0
for cb in range(len(a)):
    if a[cb] < 0:
        total = total + 1
print(total)