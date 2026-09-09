class Solution {
   public:
    vector<int> sortArray(vector<int>& nums) {
        int sortedIndex = 0;
        while (sortedIndex < nums.size()) 
        {
            int minIndex=sortedIndex;
            for (int i = sortedIndex + 1; i < nums.size(); i++) 
            {
                if(nums[i]<nums[minIndex])
                {
                    minIndex=i;
                }
            }

            swap(nums[sortedIndex],nums[minIndex]);
            sortedIndex++;
        }

        return nums;
    }
};