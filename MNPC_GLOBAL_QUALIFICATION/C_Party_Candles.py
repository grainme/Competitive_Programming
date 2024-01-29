# Hamza nachid Template
import sys
from collections import defaultdict

from math import ceil
from collections import deque


def input():
    return sys.stdin.readline().rstrip()


def read_int():
    return int(input().strip())


def read_int_list():
    return list(map(int, input().split()))


def read_int_set():
    return set(map(int, input().split()))


def read_string():
    return input().strip()


def read_multpl_var():
    return map(int, input().split())


t = read_int()
for _ in range(t):
    n = read_int()
    k = "1" * len(str(n))
    d = int(k)
    if n < 10:
        print(1, end=" ")
    else:
        print(len(str(n)) - 1, end=" ")
    if n < d:
        print(len(k) - 1, end=" ")
    else:
        print(len(k), end=" ")
    k = "2" * len(str(n))
    d = int(k)
    if n < d:
        print(len(k) - 1, end=" ")
    else:
        print(len(k), end=" ")
    k = "3" * len(str(n))
    d = int(k)
    if n < d:
        print(len(k) - 1, end=" ")
    else:
        print(len(k), end=" ")
    k = "4" * len(str(n))
    d = int(k)
    if n < d:
        print(len(k) - 1, end=" ")
    else:
        print(len(k), end=" ")
    k = "5" * len(str(n))
    d = int(k)
    if n < d:
        print(len(k) - 1, end=" ")
    else:
        print(len(k), end=" ")
    k = "6" * len(str(n))
    d = int(k)
    if n < d:
        print(len(k) - 1, end=" ")
    else:
        print(len(k), end=" ")
    k = "7" * len(str(n))
    d = int(k)
    if n < d:
        print(len(k) - 1, end=" ")
    else:
        print(len(k), end=" ")
    k = "8" * len(str(n))
    d = int(k)
    if n < d:
        print(len(k) - 1, end=" ")
    else:
        print(len(k), end=" ")
    k = "9" * len(str(n))
    d = int(k)
    if n < d:
        print(len(k) - 1, end=" ")
    else:
        print(len(k), end=" ")
    print("")
