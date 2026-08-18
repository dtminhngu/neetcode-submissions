class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> new_matrix;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                new_matrix.push_back(matrix[i][j]);
            }
        }
        sort(new_matrix.begin(), new_matrix.end());
        int left = 0, right = new_matrix.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (new_matrix [mid] == target) return true;
            else if (new_matrix [mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        return false;
    }
};
