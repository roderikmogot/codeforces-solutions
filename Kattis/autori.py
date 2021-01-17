n = list(input())
t = []
t.append(n[0])
for i in range(len(n)):
    if n[i] == '-':
        t.append(n[i+1])

for j in range(len(t)):
    print(*t[j].capitalize(),end="")