class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <char> store;
        int left = 0, right = 0, max_length = 0;
        while (right < s.length()) {
            while (store.count(s[right]) > 0) {
                store.erase(s[left]);
                left ++;
            }
            store.insert (s[right]);
            max_length = max (max_length, right-left+1);
            right++;
        }
        return max_length;
    }
};
