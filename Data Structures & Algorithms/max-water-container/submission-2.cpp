class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size()-1;
        int max_container = 0;
        while (left < right) {
            int width = min (heights[left], heights[right]);
            int length = right - left;
            int container = width * length;
            max_container = max (max_container, container);
            if (heights[left] < heights[right]) left ++;
            else right --;
        }
        return max_container;
    }
};
