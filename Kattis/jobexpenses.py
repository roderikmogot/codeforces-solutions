b = int(input())
t = list(map(int, input().split()))
temp = 0
for i in t:
    if i < 0:
        temp += i
print(abs(temp))