class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs[0];
        for(auto &i : strs){
            if(res.size() > i.size()){
                res = i;
            }
        }
        int res_ind=res.size();
        for(auto &wrd: strs){
            int k = 0, index=0; 
            for(int i = 0; i < res.size(); i++){
                if(res[i] == wrd[k]){
                    index++;
                    k++;
                }
                else{
                    break;
                }
            }
            res_ind = min(res_ind, index);
        }
        string final = "";
        for(int i = 0; i < res_ind; i++){
            final += res[i];
        }
        return final;
    }
};
