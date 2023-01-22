// https://leetcode.com/problems/majority-element/submissions/883299490/


class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int n = nums.size();
        unordered_map<int,int> mpp;
        for(auto &i : nums)
        {
            mpp[i]++;
        }
        for(auto &i : nums)
        {
            if(mpp[i] > n/2)
            {
                n = i;
                break;
            }
        }
        return n;   
    }
};
