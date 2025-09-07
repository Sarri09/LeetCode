class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int result = -1;

        for (int num : nums) {
            if (nums[num] != num) {
                result = result & nums[num];
            }
        }

        return max(result, 0);
    }
};