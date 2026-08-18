class Solution {
public:
    int findMin(vector<int> &nums) {
        sort (nums.rbegin(), nums.rend());
        int min = nums.back();
        return min;
    }
};
