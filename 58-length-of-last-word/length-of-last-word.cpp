class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.empty()) return 0;

        int largo = 0;
        int iterator = s.length()-1;

        while (iterator >= 0 && s[iterator] == ' ') {
            iterator--;
        } 

        while (iterator >= 0 && s[iterator] != ' ') {
            largo++;
            iterator--;
        }

        return largo;
    }
};