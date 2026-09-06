class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int count=k;
        int n=nums.size();
        while(count>0)
        {
            int last_ele=nums[n-1];
            for(int i=n-2;i>=0;i--)
            {
                nums[i+1]=nums[i];
            }
            nums[0]=last_ele;
            count--;
        }
    }
};