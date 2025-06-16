class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> result;
        int carry = 0;
        int iterator = num.size() - 1;
        long long finalsum;
        vector<int> reverseresult;

        while (iterator >= 0 || carry > 0 || k > 0) {
            int val = 0;
            int valk = 0;
            if (iterator >= 0) {
                val = num[iterator--];
            }
            if (k > 0) {
                valk = k%10;
                k = k/10;
            }
            int sum = val + valk + carry;

            carry = sum/10;

            finalsum = sum%10;

            result.push_back(finalsum); 
        }
        for (int i = result.size() - 1; i < result.size(); i--) {
            reverseresult.push_back(result[i]);
        }
        return reverseresult;
    }
};