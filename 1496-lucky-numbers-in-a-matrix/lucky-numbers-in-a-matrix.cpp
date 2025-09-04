class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        set<int> rows;
        int n = matrix.size(); 
        int m = matrix[0].size();
        int min_val = 0;
        int max_val = 0;

        for (int i = 0; i < n; i++) { // here i stands for the rows and j stands for the columns
            min_val = INT_MAX;
            for (int j = 0; j < m; j++) {
                min_val = min(min_val, matrix[i][j]); // minimum of each row
            }
            rows.insert(min_val); // got in the set the minimum values on each row
        }
            // at this point we just have the minimum values on a row, no more worries for the rest (JUST IN THE SET ROWS)
        vector<int> ans;
        for (int i = 0; i < m; i++) { // now change, i stands for the columns and j for the rows
            max_val = INT_MIN;
            for (int j = 0; j < n; j++) {
                max_val = max(matrix[j][i], max_val);
            }
            if(!rows.insert(max_val).second) ans.push_back(max_val); // remember the set rows, just have the minimum on the rows storage, if a column maximum fits, there will be the lucky number
        }
        return ans;
    }
};