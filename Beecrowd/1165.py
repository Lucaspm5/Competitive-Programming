def solve(n : int) -> bool:
    if n == 2: return True
    if ~n & 1 or n == 1: return False
    for i in range(3, int(n ** (0.5)) + 1, 2):
        if n % i == 0: return False
    return True

t = int(input())
while t > 0:
    n = int(input())
    print(n, "eh primo" if solve(n) else "nao eh primo")
    t -= 1