s = input()
res = "".join(f".{i.lower()}" for i in s if i.lower() not in "aeoiyu")
print(res)
