x = int(input())
y = int(input())
if x < y:
    x, y = y, x
sum = 0
for i in range(y, x + 1):
    if i % 13 != 0:
        sum += i
print(sum)