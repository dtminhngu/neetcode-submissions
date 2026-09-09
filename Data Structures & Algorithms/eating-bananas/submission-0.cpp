class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = *max_element (piles.begin(), piles.end());
        int res = right;
        while (left <= right) {
            int mid = left + (right-left)/2;
            int total_hours = 0;
            for (int i=0; i<piles.size(); i++) {
                int time = (piles[i] + mid - 1)/mid;
                total_hours += time;
            }
            if (total_hours <= h) {
                res = mid;
                right = mid - 1;
            }
            else left = mid + 1;
        }
        return res;
    }
};
