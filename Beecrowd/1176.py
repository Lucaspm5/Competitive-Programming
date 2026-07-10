memo = [0] * 61

def pre_compute() -> None:
    memo[0], memo[1] = 0, 1
    for i in range(2, 61): memo[i] = memo[i-1] + memo[i-2]

pre_compute()
t = int(input())
while t > 0:
    n = int(input())
    print("Fib({}) = {}".format(n, memo[n]))
    t -= 1