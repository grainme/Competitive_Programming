class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(auto &i: s){
            if(iswalnum(i)){
                res += tolower(i);
            }
        }
        int i=0, j=res.size()-1;
        while(i<=j){
            if(res[i]!=res[j]){
                return false;
            }
            i++;j--;
        }
        return true;
    }
};
