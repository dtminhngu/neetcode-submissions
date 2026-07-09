class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int table [26] = {0};
        for (int i=0; i<s.length(); i++) {
            table [s[i] - 'a'] ++;
            table [t[i] - 'a'] --;
        }
        for (int i=0; i<26; i++) {
            if (table[i] != 0) return false;
        }
        return true;
    }
};
