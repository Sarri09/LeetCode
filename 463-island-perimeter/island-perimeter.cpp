class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int totalPerimeter = 0;

        for (int i = 0; i < grid.size(); i++) { // rows (bottom, up)
            for (int j = 0; j < grid[0].size(); j++) { // columns (right, left)
                if (grid[i][j] == 1) {
                    if (i == 0 || grid[i-1][j] == 0) { // up
                        totalPerimeter++;
                    } if (i == grid.size()-1 || grid[i+1][j] == 0) { // bottom
                        totalPerimeter++;
                    } if (j == 0 || grid[i][j-1] == 0) {  // right
                        totalPerimeter++;
                    } if (j == grid[0].size()-1 || grid[i][j+1] == 0) { // left
                        totalPerimeter++;
                    }
                }
            }
        }

        return totalPerimeter;
    }
};