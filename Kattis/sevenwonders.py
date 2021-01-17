t = input()
list_data = {
    "T": 0,
    "G": 0,
    "C": 0
}

total = 0
for i in t:
    list_data[i] += 1

for i in list_data:
    total += list_data[i]**2

stop = False
while True:
    for i in list_data:
        list_data[i] -= 1
        if list_data[i] < 0:
            stop = True
            break
    if stop:
        break
    else:
        total = total + 7

print(total)
