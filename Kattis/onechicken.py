a,b = input().split()

c = int(a)
d = int(b)

if c <= d:
    if d - c == 1:
        print("Dr. Chaz will have " + str(d-c) + " piece of chicken left over!")
    else:
        print("Dr. Chaz will have " + str(d - c) + " pieces of chicken left over!")
elif c > d:
    if c - d == 1:
        print("Dr. Chaz needs " + str(c-d) + " more piece of chicken!")
    else:
        print("Dr. Chaz needs " + str(c - d) + " more pieces of chicken!")