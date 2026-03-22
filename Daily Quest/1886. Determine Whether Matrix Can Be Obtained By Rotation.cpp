class Solution {
public:
    
    // rotate matrix by 90 degrees clockwise
    void rotate90(vector<vector<int>>& mat) {
        int n = mat.size();

        // Step 1: transpose
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }

        // Step 2: reverse each row
        for (int i = 0; i < n; i++) {
            reverse(mat[i].begin(), mat[i].end());
        }
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        // try all 4 rotations
        for (int i = 0; i < 4; i++) {
            if (mat == target) return true;
            rotate90(mat);
        }

        return false;
    }
};