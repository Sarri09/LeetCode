class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int dist = 0;
        int maxdist = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if ((nums[i] - nums[j]) < 0) {
                    dist = abs(nums[i] - nums[j]);
                    if (dist > maxdist) {
                        maxdist = dist;
                    }
                }        
            }
        }
        
        if (maxdist == 0) {
            return -1;
        }

        return maxdist; 
    }
};