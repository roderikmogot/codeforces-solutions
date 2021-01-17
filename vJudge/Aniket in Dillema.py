t = list(map(int, input().split()))
temp = 0
for c in range(1, len(t)):
    temp += t[c]

if t[0] >= temp:
    print("Happy")
else:
    print("Sad")