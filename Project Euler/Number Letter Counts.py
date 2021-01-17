digit1 = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"]
digit2_below_20 = ["eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"]
digit2_above_20 = ["twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety", "hundred"]
digit3 = ["onethousand"]

count = 0
for i in range(1, 1001):
    if 0 <= i <= 10:
        # print(digit1[n])
        count = count + len(digit1[i])
    elif 10 < i < 20:
        # print(digit2_below_20[n-12])
        count = count + len(digit2_below_20[i-12])
    elif 20 <= i < 100:
        a = list(str(i))
        for j in range(len(a)):
            a[j] = int(a[j])

        if 0 < a[0] < 10 and a[1] == 0:
            # print(digit2_above_20[a[0]-2])
            count = count + len(digit2_above_20[a[0]-2])
        elif 0 < a[0] < 10 and 0 < a[1] < 10:
            # print(digit2_above_20[a[0] - 2] + digit1[a[1]])
            count = count + len(digit2_above_20[a[0] - 2] + digit1[a[1]])
    elif 100 <= i < 1000:
        b = list(str(i))
        for i in range(len(b)):
            b[i] = int(b[i])

        if 0 < b[0] < 10 and b[1] == 0 and b[2] == 0:
            # print(digit1[b[0]] + "hundred")
            count = count + len(digit1[b[0]] + "hundred")
        elif 0 < b[0] < 10 and b[1] == 1 and b[2] == 0:
            # print(digit1[b[0]] + "hundredandten")
            count = count + len(digit1[b[0]] + "hundredandten")
        elif 0 < b[0] < 10 and b[1] == 0 and 0 < b[2] < 10:
            # print(digit1[b[0]] + "hundredand" + digit1[b[2]])
            count = count + len(digit1[b[0]] + "hundredand" + digit1[b[2]])
        elif 0 < b[0] < 10 and b[1] == 1 and 0 < b[2] < 10:
            # print(digit1[b[0]] + "hundredand" + digit2_below_20[b[2] - 1])
            count = count + len(digit1[b[0]] + "hundredand" + digit2_below_20[b[2]-1])
        elif 0 < b[0] < 10 and 0 < b[1] < 10 and b[2] == 0:
            # print(digit1[b[0]] + "hundredand" + digit2_above_20[b[1]-2])
            count = count + len(digit1[b[0]] + "hundredand" + digit2_above_20[b[1]-2])
        elif 0 < b[0] < 10 and 0 < b[1] < 10 and 0 < b[2] < 10:
            # print(digit1[b[0]] + "hundredand" + digit2_above_20[b[1]-2] + digit1[b[2]])
            count = count + len(digit1[b[0]] + "hundredand" + digit2_above_20[b[1]-2] + digit1[b[2]])
    elif i == 1000:
        # print(digit3[0])
        count = count + len(digit3[0])

print(count)