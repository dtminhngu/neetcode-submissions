class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;
        vector <int> count_s1 (26, 0);
        vector <int> count_window (26,0);
        for (int i=0; i<s1.length(); i++) {
            count_s1 [s1[i]-'a'] ++;
            count_window [s2[i]-'a'] ++;
        }
        if (count_s1 == count_window) return true;
        for (int i=s1.length(); i<s2.length(); i++) {
            count_window [s2[i] - 'a'] ++;
            count_window [s2[i-s1.length()] -'a'] --;
            if (count_s1 == count_window) return true;
        }
        return false;
    }
};
