a,b,c = input().split()

d = int(a)
e = int(b)
f = int(c)

for i in range(1, f+1):
    if i % d == 0 and i % e == 0:
        print("FizzBuzz")
    elif i % e == 0:
        print("Buzz")
    elif i % d == 0:
        print("Fizz")
    else:
        print(i)