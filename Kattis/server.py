m = list(map(int, input().split()))
n = list(map(int, input().split()))
temp = 0
store = 0
for i in range(m[0]):
    if temp+n[i] > m[1]:
        break
    else:
        temp += n[i]
        store += 1

print(store)