class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        map<int, int> set;

        for (int i = 0; i < nums.size(); ++i) {
        int candidate = target - nums[i];
        if (set.count(candidate) != 0) {
            return {set[candidate], i};
        }
        set[nums[i]] = i;
    }
    return {};

    }
};