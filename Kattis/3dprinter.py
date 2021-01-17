def days(statues):
    printer = 1
    count = 0
    while printer < statues:
        printer *= 2
        count += 1
    count += 1
    return count


print(days(int(input())))
