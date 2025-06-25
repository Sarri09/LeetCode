class Solution {
public:
    int romanToInt(string s) {
        vector<int> tointIndex(s.length());

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'I') {
                tointIndex[i] = 1; 
            } else if (s[i] == 'V') {
                tointIndex[i] = 5; 
            } else if (s[i] == 'X') {
                tointIndex[i] = 10; 
            } else if (s[i] == 'L') {
                tointIndex[i] = 50; 
            } else if (s[i] == 'C') {
                tointIndex[i] = 100; 
            } else if (s[i] == 'D') {
                tointIndex[i] = 500; 
            } else if (s[i] == 'M') {
                tointIndex[i] = 1000; 
            }
        }

        int result = 0;

        for (int i = 0; i < tointIndex.size(); i++) {
            if (i+1 < tointIndex.size() && tointIndex[i] < tointIndex[i+1]) {
                result = result - tointIndex[i];
            } else {
                result = result + tointIndex[i];
            }
        }
        return result;

    }
};