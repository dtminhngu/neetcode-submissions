bool Palindrome (string s) {
    int left = 0, right = s.length()-1;
    while (left < right)  {
        if (s[left] != s[right]) return false;
        left ++;
        right --;
    }
    return true;
}

void Try (int start_idx, string s, vector <string> &path, vector <vector<string>> &res) {
    if (start_idx == s.length()) {
        res.push_back (path);
        return;
    }
    for (int i=start_idx; i<s.length(); i++) {
        string current_string = s.substr (start_idx, i-start_idx+1);
        if (Palindrome(current_string)) {
            path.push_back (current_string);
            Try (i+1, s, path, res);
            path.pop_back();
        }
    }
}

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector <string> path;
        vector <vector<string>> res;
        Try (0, s, path, res);
        return res;
    }
};
