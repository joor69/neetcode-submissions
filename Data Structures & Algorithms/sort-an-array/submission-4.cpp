class Solution {
public:
    //Insertion Sort
    vector<int> sortArray(vector<int>& nums) 
    {
        int sortedIndex=0;
        int n=nums.size();
        while(sortedIndex<n)
        {
            for(int i=sortedIndex;i>0;i--)
            {
                if(nums[i]<nums[i-1])
                {
                    swap(nums[i],nums[i-1]);
                }
                else
                {
                    break;
                }
            }
            sortedIndex++;
        }    
        return nums;
    }
};