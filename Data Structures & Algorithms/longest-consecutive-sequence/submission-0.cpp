class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> note;
        for (int n:nums) note.insert (n);
        int result = 0;
        for (int value:note) {
            if (note.count (value-1) == 0) {
                int current_value = value;
                int length = 1;
                while (note.count (current_value + 1) > 0) {
                    current_value ++;
                    length++;
                }
                result = max (result, length);
            }
        }
        return result;
    }
};
