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
