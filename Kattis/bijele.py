a, b, c, d, e, f = input().split()
g = int(a)
h = int(b)
i = int(c)
j = int(d)
k = int(e)
l = int(f)

data = [g,h,i,j,k,l]
store = [1,1,2,2,2,8]

for i in range(len(store)):
    print(store[i] - data[i], end=" ")
