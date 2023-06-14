class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(auto &i: stones){
        q.push(i);
        }
        int ans = q.size();
        while(q.size()>1){
            //ans = q.top();
            int lst_0, lst_1;
            lst_0 = q.top();
            q.pop();
            lst_1 = q.top();
            if(lst_0 == lst_1){
                q.pop();
            }
            else{
                q.pop();
                q.push(lst_0 - lst_1);
            }
            ans = (q.empty()?0:q.top());
        }
        return ans;
        }
};
