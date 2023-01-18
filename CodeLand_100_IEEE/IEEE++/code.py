T = int(input())
res = 0
for _ in range(T):
	s = input()
	if s[:2]=="++" or s[1:]=="++":
		res += 1
	elif s[:2]=="--" or s[1:]=="--":
		res -= 1
print(res)
