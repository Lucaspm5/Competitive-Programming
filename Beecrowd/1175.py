l = []
n = 20
for i in range(n):
    x = int(input())
    l.append(x)
for i in range(n):
    print("N[{}] = {}".format(i, l[n - i - 1]))