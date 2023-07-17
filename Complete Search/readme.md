

# 🎲 Permutations and Subsets

Permutations and subsets are common concepts in computer science and mathematics. Understanding the difference between them is key. 😄

## Permutations 🔄

Permutations have a fixed length, unlike subsets. They represent all possible arrangements of elements in a given input. 

🔍 Searching over permutations can be achieved using the built-in `next_permutation` function, which is quite handy! 🧙‍♂️

To generate permutations with exactly `k` elements, here's a clever trick using `next_permutation`:

```cpp
vector<int> v(k, 1);
v.resize(n, 0);
do {
  vector<int> idx;
  for (int i = 0; i < n; i++) {
    if (v[i]) idx.push_back(i);
  }
} while (next_permutation(v.begin(), v.end()));
```

## Subsets 🧩
Subsets, on the other hand, allow for a changing length from 0 to n, where n is the length of the input. They represent all possible combinations of elements from the input.

🔍 Searching over subsets can be done using recursion or an efficient technique called bitmasking. Let's explore the bitmasking approach! 💡
To generate all the subsets, we can also bitmasking, like this:
```cpp
for (ll mask = 0; mask < (1LL << n); mask++)
{
    vector<int> subset;
    for (int i = 0; i < n; i++)
    {
        if (mask & (1 << i))
        {
            subset.push_back(a[i]);
        }
    }
    for (auto &element : subset)
    {
        cout << element << " ";
    }
    cout << endl;
}
```
To generate subsets with exactly k elements, we can once again use the power of bitmasking:
```cpp
for (int mask = 0; mask < (1 << n); mask++) {
  // The function __builtin_popcount counts the number of bits set in a mask in O(1) time. So cool! 😎
  if (__builtin_popcount(mask) == k) {
    // Do something with the subset
  }
}
```
