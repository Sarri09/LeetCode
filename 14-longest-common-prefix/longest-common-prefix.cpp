class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        
        if (strs.empty()) {
            return "";
        }

        for (int caracter = 0; caracter < strs[0].length(); caracter++) {
            char base = strs[0][caracter];

            for (int palabra = 1; palabra < strs.size(); palabra++) {
                if (caracter >= strs[palabra].length() || strs[palabra][caracter] != base) {
                    return prefix;
                }
            }

            prefix = prefix + base;
        }

        return prefix;
    }
};