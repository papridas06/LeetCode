class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int minr = 0;
        int maxr = matrix.size() - 1;
        int minc = 0;
        int maxc = matrix[0].size() - 1;

        while (minr <= maxr && minc <= maxc) {

            // Right
            for (int j = minc; j <= maxc; j++) {
                ans.push_back(matrix[minr][j]);
            }
            minr++;

            // Down
            for (int i = minr; i <= maxr; i++) {
                ans.push_back(matrix[i][maxc]);
            }
            maxc--;

            // Left
            if (minr <= maxr) {
                for (int j = maxc; j >= minc; j--) {
                    ans.push_back(matrix[maxr][j]);
                }
                maxr--;
            }

            // Up
            if (minc <= maxc) {
                for (int i = maxr; i >= minr; i--) {
                    ans.push_back(matrix[i][minc]);
                }
                minc++;
            }
        }

        return ans;  
    }
};