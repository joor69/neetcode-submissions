class Solution {
    int partition(vector<int>& nums, int left, int right) {
        int j = left;
        int i = left - 1;
        while (j < right) {
            if (nums[j] < nums[right]) {
                i++;
                swap(nums[i], nums[j]);
            }

            j++;
        }

        swap(nums[i + 1], nums[right]);
        return i + 1;
    }

    void quicksort(vector<int>& nums, int left, int right) {
        if (left < right) {
            int pivot = partition(nums, left, right);

            quicksort(nums, left, pivot - 1);
            quicksort(nums, pivot + 1, right);
        }
    }

   public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        quicksort(nums, 0, n - 1);
        return nums;
    }
};