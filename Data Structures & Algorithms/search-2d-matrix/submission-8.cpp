class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i=0; i<matrix.size(); i++) {
            int left = 0, right = matrix[i].size()-1;
            while (left <= right) {
                int mid = left + (right-left)/2;
                if (target == matrix[i][mid]) return true;
                else if (target < matrix[i][mid]) right = mid - 1;
                else left = mid + 1;
            }
        }
        return false;
    }
};
