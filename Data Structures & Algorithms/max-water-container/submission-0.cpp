class Solution {
public:
    int maxArea(vector<int>& heights) {
        int right = heights.size()-1;
        int left = 0;
        int max_container = 0;
        while (left < right) {
            int width = right - left;
            int length = min (heights[left], heights[right]);
            int container = width * length;
            max_container = max (max_container, container);
            if (heights[left] < heights[right]) left++;
            else right--;
        }
        return max_container;
    }
};
