
# Approach
The hash table stores the frequencies of each character, which requires O(k) space, where k is the number of unique characters in the strings.

# Complexity
- Time complexity:
O(n) which represents the max length of the strings

- Space complexity:
O(k) where k is the length of the set(string) which means unique chars.

# Code
```
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpp, mpp1;
        for(auto &i: s){
            mpp[i]++;
        }
        for(auto &i: t){
            mpp1[i]++;
        }
        return mpp == mpp1;
    }
}; 
```
