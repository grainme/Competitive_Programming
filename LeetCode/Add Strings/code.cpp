class Solution {
public:
    string addStrings(string a, string b)
    {
    while(a.size()!=b.size())
    {
        if(a.size()<b.size()){a.insert(0, "0");}
        else{b.insert(0, "0");}
    }
    int mod_lc=0, res_lc=0;
    vector<int> V;
    for(int i = a.size()-1; i>=0; --i)
    {
        int res = a[i]+b[i]-2*'0'+mod_lc;
        if(res>=10)
        {
            mod_lc = 1;
            res_lc = res%10;
            V.push_back(res_lc);
        }
        else
        {
            V.push_back(res);
            mod_lc=0;
        }
    }
    
    string bs="";
    if(mod_lc!=0){bs+="1";}
    for(int i=a.size()-1; i>=0; i--)
    {
        bs +=V[i]+'0';
    }
    return bs;   
}
};
