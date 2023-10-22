# Salam Marouane :)

def solve():
    from typing import List

    ll = int
    array = List[ll]

    vpr = [None] * 901
    prev_prev, prev = [1, 0], [0, 1]
    vpr[1], vpr[2] = prev_prev, prev

    for i in range(3, 901):
        prev_prev = vpr[i - 2]
        prev = vpr[i - 1]
        new_one = [prev_prev[0] + prev[0], prev_prev[1] + prev[1]]
        vpr[i] = new_one
        prev_prev, prev = prev, new_one

    t = int(input())
    while t > 0:
        t -= 1
        n, k = map(int, input().split())

        if k >= 901:
            print(0)
            continue

        val = vpr[k]
        result = 0
        for i in range(n + 1):
            temp = n - val[0] * i
            if temp % val[1] == 0 and temp // val[1] >= i:
                result += 1

        print(result)


solve()
