class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return {}; // Handle empty matrix case

        int m = matrix.size();
        int n = matrix[0].size();
        int scol = 0, srow = 0, erow = m - 1, ecol = n - 1;
        vector<int> ans;

        while (srow <= erow && scol <= ecol) {
            // Top row
            for (int j = scol; j <= ecol; j++) {
                ans.push_back(matrix[srow][j]);
            }
            srow++;

            // Right column
            for (int i = srow; i <= erow; i++) {
                ans.push_back(matrix[i][ecol]);
            }
            ecol--;

            // Bottom row (only if there's a new row to process)
            if (srow <= erow) {
                for (int j = ecol; j >= scol; j--) {
                    ans.push_back(matrix[erow][j]);
                }
                erow--;
            }

            // Left column (only if there's a new column to process)
            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--) {
                    ans.push_back(matrix[i][scol]);
                }
                scol++;
            }
        }

        return ans;
    }
};
