class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return i;
            }    
        }
        
        // can't mach the target on the array
        int nomatch = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > target) {
                return i;
            }
        }
        return nums.size();
    }
};