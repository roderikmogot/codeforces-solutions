def decimalToBinary(n):
    return bin(n).replace("0b", "")


def binaryToDecimal(n):
    return int(n, 2)


i = int(input())
c = decimalToBinary(i)[::-1]
d = binaryToDecimal(c)

print(d)
