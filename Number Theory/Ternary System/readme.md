## AtCoder - Ternary Decomposition

This is a solution for the "Ternary Decomposition" problem from AtCoder. The problem can be found [here](https://atcoder.jp/contests/arc164/tasks/arc164_a).

### Problem Description
Given two integers N and K, the task is to determine if it's possible to express N as the sum of exactly K powers of 3 (3^i), where i is a non-negative integer.

### Approach
To solve the problem, we use the following trick:
1. Write N in base 3 (ternary representation).
2. Write N in the ternary Base which is Base 3, then you will get the least K (denoted as L) sum of powers of 3 we need to get N.
3. If L is less than or equal to K and K is less than or equal to N, and both N and K have the same parity (even or odd), then it is possible to construct the sum. Otherwise, it is not possible.

### Implementation
The solution is implemented in C++ and can be found below:

```cpp
void solve(){
  int t;
  cin >> t;
  while (t--)
  {
    long long n, k, ans=0, temp;
    cin >> n >> k;
    temp = n;
    while(n>0){
      ans += n%3;
      n/=3;
    }
    if(k>=ans && k<=temp && ans%2==k%2){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
  }
}
```



### Additional Remarks
- The constraints for this problem are not provided. Make sure to consider the possible range of input values when using this solution.
- The parity check is important because the product of a power of 3 with an even number is always even, and the product of a power of 3 with an odd number is always odd. Therefore, both N and K must have the same parity for a valid sum to be constructed.
