t = input()

location = 1  # 1, 2, 3
for i in t:
    if i == 'A':
        if location == 1:
            location = 2
        elif location == 2:
            location = 1
        else:
            location = 3
    elif i == 'B':
        if location == 2:
            location = 3
        elif location == 3:
            location = 2
        else:
            location = 1
    elif i == 'C':
        if location == 1:
            location = 3
        elif location == 3:
            location = 1
        else:
            location = 2

print(location)