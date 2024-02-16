- the most left bit is the strongest one!
- int x = 0b001; --> will convert the binary to integer.
- bitwise operations treats bits independently.
- x << k == left shift == x * 2^k 
- x >> k == right shift == floor(x/2^k)
- builtin_popcount(int x) --> (shoudl be in, ll can overflow)
it counts the numbers of 1s in x
- builtin_ctz --> count trailing zeros (nbr of 0s before, left,  the first 1)
- builtin_clz --> count leading zeroes after the last 1, right)
