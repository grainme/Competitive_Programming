<h1>🔢 Bitwise Operations in Competitive Programming</h1>

- Basic Bitwise Operations like `&` (AND) and `^` (XOR) ✅
- Bitwise Shifts ⏩
- Iterating over all `2^N` subsets 🔄

<p>We can pad zeros to the beginning of binary representation to match the size of our data type:</p>

<<<<<<< HEAD
- AND :  01 & 11 = 01
- OR  :  01 | 11 = 11
- XOR :  01 ^ 11 = 10
- Left Shift : 01 << 2 = 0100 
<p>
  Left Shifting, if the bit is turned on (==1) and we left shift the binary representation, the value of the bit will increase
  by 2^k as we left shift by k places i will become eventually i+k
<p>
- Right Shift : 0110 << 2 = 01
<p>
  Right Shifting is the same thing as left shifting, in terms of logic, instead of multiplying by 2^k we divide by 2^k
</p>


<h5>Tips / Ideas</h5>
1. To check whether the ith bit is turned on (set to 1) on a number x, we just do AND it with 2^i [ x & (1 << i) ]
2. second
=======
- AND:  `01 & 11 = 01` ✖️
- OR:  `01 | 11 = 11` ➕
- XOR:  `01 ^ 11 = 10` ⚡️
- Left Shift: `01 << 2 = 0100` ⬅️
  - Left Shifting: Increase the value of the bit by `2^k` when left shifting `k` places.
- Right Shift: `0110 << 2 = 01` ➡️
  - Right Shifting: Divide the value by `2^k` when right shifting `k` places.
>>>>>>> 52cd0f3f08dfda31b3fb92209c9cf1b3e17ca0ee

<h5>💡 Tips / Ideas</h5>
<ul>
<li> To check if the `i`th bit is turned on (set to `1`) on a number `x`, use `x & (1 << i)` </li>
<li> second </li>
<li> third </li>
</ul>
