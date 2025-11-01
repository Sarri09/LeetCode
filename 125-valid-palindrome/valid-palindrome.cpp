class Solution {
public:
    bool isPalindrome(string s) {
        if (s == "") return true;

        vector<char> planeword;

        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                planeword.push_back(s[i]);
            }
        }

        transform(planeword.begin(), planeword.end(), planeword.begin(), [](unsigned char c){ return tolower(c); });
        

        int endpointer = planeword.size()-1;

        for (int i = 0; i < planeword.size(); i++) {
            if (planeword[i] != planeword[endpointer]) return false;
            endpointer--;
        }

        return true;
    }
};