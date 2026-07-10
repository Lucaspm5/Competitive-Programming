n = int(input())
ans = []
prev = n
for i in range(n, n + 10):
    if i == n:
        ans.append(i)
        continue
    ans.append(prev << 1)
    prev = ans[-1]
for i, value in enumerate(ans):
    print("N[{}] = {}".format(i, value))