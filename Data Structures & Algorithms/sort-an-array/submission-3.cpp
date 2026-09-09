class Solution {
public:
    vector<int> sortArray(vector<int>& nums) 
    {
        
        int sortedIndex=0;
        int n=nums.size();
        while(sortedIndex<n-1)
        {
            bool swapped=false;
            for(int i=n-1;i>sortedIndex;i--)
            {
                if(nums[i]<nums[i-1])
                {
                    swap(nums[i],nums[i-1]);
                    swapped=true;
                }
            }
            if(!swapped)
                break;

            sortedIndex++;
        }

        return nums;
    }
};