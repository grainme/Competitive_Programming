## Problem:
Check if a given string is a prefix of the concatenation of the words in a vector.

## Time Complexity:
The function iterates through the words in the vector once. The number of iterations is equal to the number of words in the vector. Therefore the time complexity of this function is O(n) where n is the number of words in the vector.

## Space Complexity:
The function uses a string variable `res` to store the concatenated words. The maximum size of this variable is equal to the length of the input string `s`. Therefore the space complexity of this function is O(m) where m is the length of the string `s`.

# Code
```
class Solution {
public:
    bool isPrefixString(string s, vector<string>& words)
    {
        string res="";
        int i = 0;
        while(res.size() <= s.size() && res != s && i < words.size())
        {
            res += words[i++];
        }
        return (res == s);
    }
};
```
