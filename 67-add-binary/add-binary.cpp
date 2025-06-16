class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int LargA = a.length() - 1;
        int LargB = b.length() - 1;
        int carry = 0;

        while (LargA >= 0 || LargB >= 0 || carry) {
            int sum = carry;
            if (LargA >= 0) {
                sum = sum + a[LargA] - '0';
                LargA--;
            }
            if (LargB >= 0) {
                sum = sum + b[LargB] - '0';
                LargB--;
            }

            result = char(sum % 2 + '0') + result;
            carry = sum / 2;
        }

        return result;
    }
};