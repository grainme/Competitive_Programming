
T = int(input())
s = input()
 
if len(s) <= T:
	print(s)
else:
	print(f"{s[:T]}...")
