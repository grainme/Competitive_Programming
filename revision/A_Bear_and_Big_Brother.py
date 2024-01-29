a,b = map(int, input().split()) # Ila kanu star wa7ed dyl input
year = 0
 
while a <= b:
    year += 1
    a = a * 3
    b = b * 2
 
print(year)