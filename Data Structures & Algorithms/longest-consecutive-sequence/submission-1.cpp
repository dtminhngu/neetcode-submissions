class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> storage;
        for (int value : nums) storage.insert(value);
        int result = 0;
        for (int n : storage) {
            if (storage.count(n - 1) == 0) {
                int sub_value = n;
                int length = 1;
                while (storage.count(sub_value + 1) > 0) {
                    sub_value++;
                    length++;
                }
                result = max(result, length);
            }
        }
        return result;
    }
};
