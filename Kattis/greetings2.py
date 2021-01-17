a = input()

check = list(a)

temp = 0
for i in check:
    if i == "e":
        temp = temp + 1

fill = temp * 2
for j in range(temp):
    check.insert(2, "e")

for k in check:
    print(k, end="")
