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
