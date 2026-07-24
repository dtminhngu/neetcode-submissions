class Solution {
public:
    bool isPalindrome(string s) {
        string new_s = "";
        for (char &c:s) {
            c = tolower (c);
            if (c >= 'a' && c <= 'z' || c >= '0' && c <= '9') new_s += c;
        }

        int left = 0;
        int right = new_s.length()-1;

        while (left < right) {
            if (new_s[left] != new_s[right]) return false;
            left ++;
            right--;
        }
        return true;
    }
};
