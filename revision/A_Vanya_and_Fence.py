n, h = map(int, input().split())

res = 0
l = list(map(int, input().split()))

for i in range(n):
    if l[i] > h:
        res += 2
    else:
        res += 1
        
print(res)