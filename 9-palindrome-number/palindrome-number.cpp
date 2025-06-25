class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int x_ = 0;
        long long reverse = 0;

        x_ = x;

        while (x_ > 0) {
            reverse = reverse * 10 + (x_%10);
            x_ = x_/10;
        }

        if (reverse == x) {
            return true;
        } 

        return false;
    }
};