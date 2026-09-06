class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        for(int ele:nums)
            mp[ele]++;

        for(auto [ele,freq]:mp)
        {
            if(freq>nums.size()/2)
            {
                return ele;
            }
        }

        return -1;
    }
};