class Solution {
public:
    void shortestDistance(vector<vector<int>>& mat) {
        int n = mat.size();

        // Step 1: Initialize the matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == -1 && i != j) {
                    mat[i][j] = 1e9; // Mark unreachable paths as infinity
                }
                if (i == j) {
                    mat[i][j] = 0; // Distance to self is zero
                }
            }
        }

        // Step 2: Floyd-Warshall Algorithm
        for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
                }
            }
        }

        // Step 3: Convert unreachable distances back to -1
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1e9) {
                    mat[i][j] = -1; // No path exists
                }
            }
        }
    }
};
