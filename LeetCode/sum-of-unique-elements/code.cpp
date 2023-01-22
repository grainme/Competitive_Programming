// https://leetcode.com/problems/sum-of-unique-elements/submissions/883295107/


class Solution {
public:
    int sumOfUnique(vector<int>& nums)
    {
        int s = 0;
        for(auto &i: nums)
        {
            if (count(nums.begin(), nums.end(), i) == 1)
            {
                s += i;
            }
        }
        return s;    
    }
};

/*

Efficient Code using HashTable


class Solution {
public:
    int sumOfUnique(vector<int>& nums)
    {
        unordered_map<int, int> visited;
        int s = 0;
        for(auto &i: nums)
        {
            visited[i]++;
        }
        for(auto &i: nums)
        {
            if(visited[i] == 1){s+=i;}
        }
        return s;
    }
};

*/
