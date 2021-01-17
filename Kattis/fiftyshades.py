t = int(input())
temp = 0
for i in range(t):
    b = input().lower()
    if "pink" in b or "rose" in b:
        temp += 1

if temp != 0:
    print(temp)
else:
    print("I must watch Star Wars with my daughter")
