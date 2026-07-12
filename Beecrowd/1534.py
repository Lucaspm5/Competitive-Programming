# vou arrumar essas condições, estou cansado para pensar agora kkk

while True:
    try:
        n = int(input())
        l = [1] + [3] * (n - 2) + [2]
        for i in range(n):
            for j in range(n): print(l[j], end = '')
            print()
            if (i + 1 < n and n - i - 2 >= 0 and n % 2 != 0 and i == (n // 2)):
                l[i + 1] = 1
                l[i] = 3
                l[n - i - 2] = 2
                continue
            if (i + 1 < n):
                l[i], l[i+1] = l[i+1], l[i]
                if (n - i - 2 >= 0 and (not (n % 2 == 0 and (i + 1) == (n // 2)))):
                    l[n-i-1], l[n-i-2] = l[n-i-2], l[n-i-1]
            if (n - i - 1 >= 0 and n % 2 != 0 and (i + 1) == (n // 2)):
                l[n - i - 1] = 3 
    except EOFError: break
        
    