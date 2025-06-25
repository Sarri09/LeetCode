class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> charIndex;
        int maxLength = 0;
        int start = 0;

        for (int i = 0; i < s.length(); i++) {
            char currentChar = s[i];
            if (charIndex.contains(currentChar) && charIndex[currentChar] >= start) {
                start = charIndex[currentChar] + 1;
            }
            charIndex[currentChar] = i;
            maxLength = max(maxLength, i - start + 1);
        }

        return maxLength;
    }
};
