class Solution {
   public:
   //using boyer moore voting algo
    int majorityElement(vector<int>& nums) {
        int candidate=nums[0];
        int count = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (0==count) {
                candidate = nums[i];
                count=1;
            }
            else if(nums[i]==candidate)
            {
                count++;
            }
            else
                count--;
        }

        return candidate;
    }
};