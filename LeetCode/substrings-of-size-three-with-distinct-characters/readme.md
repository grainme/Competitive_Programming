## Problem:
Count the number of good substrings in a given string. A good substring is a substring that contains three unique characters.

## Solution:
A class `Solution` is defined which contains a function `countGoodSubstrings(string s)`. This function takes in a string `s` as input and returns an integer value representing the number of good substrings in `s`. The function iterates through the string, checking for substrings of length 3. If a substring of length 3 contains three unique characters, it increments a counter variable. 

## Time Complexity:
The function iterates through the string once. The number of iterations is equal to the length of the string. Therefore the time complexity of this function is O(n) where n is the length of the input string.

## Space Complexity:
The function uses a single integer variable `res` to store the count of good substrings. The space complexity of this function is O(1).


# Code
```
class Solution {
public:
    int countGoodSubstrings(string s)
    {
        int res = 0;
        if(s.size()<=2){return 0;}
        for(int i = 0;  i < s.size()-2; i++)
        {
            if(s[i]!=s[i+1] && s[i]!=s[i+2] && s[i+1]!=s[i+2])
            {
                res ++;
            }
        }
        return res;
    }
};
```
