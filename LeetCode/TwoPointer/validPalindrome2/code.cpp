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
    bool validPalindrome(string s) {
    int i=0, w=s.size()-1;
    while(i <= w){
        if(s[i] != s[w]){
            string left ="";
            string right = "";
            for(int j=0; j < s.size();j++){
                if(j!=i){
                    left += s[j];
                }
                    if(j!=w){
                        right += s[j];
                    }
                }
            if(isPalindrome(left) || isPalindrome(right)){
                return true;
            } 
            else{
                
                return false;break;
            }
        }
        i++;w--;
    }
    return true; 
    }
};
