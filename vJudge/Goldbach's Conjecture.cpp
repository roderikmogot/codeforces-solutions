def range_prime(min, limit):
    list_of_prime = []
    for num in range(min, limit + 1):
        if num > 1:
            for i in range(min, num):
                if (num % i) == 0:
                    break
            else:
                list_of_prime.append(num)

    return list_of_prime


t = int(input())
while t != 0:
    list_prime = list(range_prime(2, t))
    temp = 0
    forbidden = []
    for c in range(len(list_prime)):
        for k in range(len(list_prime)):
            check = list_prime[c] + list_prime[k]
            if check == t and list_prime[c] not in forbidden:
                temp += 1
                get_index = list_prime.index(list_prime[k])
                banned = forbidden.append(list_prime[get_index])

    print(temp)
    t = int(input())
