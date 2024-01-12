class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string min_str = strs[0];
        for(auto &i: strs){
            if(i.size() < min_str.size()){
                min_str = i;
            }
        }
        string mx_pref = "";
        vector<string> res;
        for(auto &i: strs){
            int k = 0;
            while(k<min_str.size()){
                if(i[k] != min_str[k]){
                    break;
                }
                else{
                    mx_pref += min_str[k];
                }
                k++;
            }
            res.push_back(mx_pref);
            mx_pref = "";
        }
        string re = res[0];
        for(auto &i: res){
            if(i.size()<re.size()){
                re = i;
            }
        }
        return re;
    }
};
