class Solution 
{
    void helper(vector<int>& nums,int left,int right)
    {
        while(left<right)
        {
            int temp=nums[left];
            nums[left++]=nums[right];
            nums[right--]=temp;
        }
    }
public:
    void rotate(vector<int>& nums, int k) 
    {
        if(nums.size()==0) return ;
        int n=nums.size();
        k=k%n;
        helper(nums,0,n-1);
        helper(nums,0,k-1);
        helper(nums,k,n-1);
    }
};