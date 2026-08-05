class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        int note[26] = {0};
        for (int i = 0; i < s.size(); i++) note[s[i] - 'a']++;
        for (int i = 0; i < t.size(); i++) note[t[i] - 'a']--;
        for (int i = 0; i < 26; i++) {
            if (note[i] != 0) return false;
        }
        return true;
    }
};
