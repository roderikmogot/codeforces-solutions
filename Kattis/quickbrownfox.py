c = int(input())
for i in range(c):
    t = input().lower()
    alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
                'v', 'w', 'x', 'y', 'z']
    check = ' '
    save = ' '
    for j in t:
        if j.isalpha() and not j.isnumeric():
            check += j

    for f in check:
        if f in alphabet:
            alphabet.remove(f)

    if len(alphabet) == 0:
        print("pangram")
    else:
        result = ' '
        for k in alphabet:
            result += k
        print("missing"+str(result))
