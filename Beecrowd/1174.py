n = 100
ans = []
for i in range(n):
    x = float(input())
    if x <= 10.0: ans.append((i, x))
for i, value in ans:
    print("A[{}] = {}".format(i, value))