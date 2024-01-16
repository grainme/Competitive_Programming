s = input().lower()
l = input().lower()
res = 0
for i in range(len(s)):
    if s[i] < l[i]:
        res = -1
        break
    elif s[i] > l[i]:
        res = 1
        break
print(res)
