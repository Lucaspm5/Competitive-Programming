t = int(input())
while t > 0:
    n = int(input())
    sum = 0
    for i in range(1, n // 2 + 1):
        if n % i == 0: sum += i
    print(n, "eh perfeito" if sum == n else "nao eh perfeito")
    t -= 1