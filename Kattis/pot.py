t = int(input())

data = []
result = []
for i in range(t):
    t = input()
    data.append(t)

for j in data:
    k = len(j) - 1
    power_result = int(j[0:k]) ** int(j[k])
    result.append(power_result)

print(sum(result))



