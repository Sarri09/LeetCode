class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }
        
        int current = 0;
        int needleiterator = 0;
        int start = 0;

        while (current < haystack.length() && needleiterator < needle.length()) {
            if (haystack[current] != needle[needleiterator]) {
                needleiterator = 0;
                start++;
                current = start - 1;
            } else {
                needleiterator++;
            }

            current++;
        }

        if (needleiterator == needle.length()) {
            return start;
        }

        return -1;
    }
};