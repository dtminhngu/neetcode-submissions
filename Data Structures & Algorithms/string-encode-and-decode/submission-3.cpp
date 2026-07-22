class Solution {
   public:
    string encode(vector<string>& strs) {
        string encoded_string = "";
        for (string& s : strs) {
            string length = to_string(s.length());
            encoded_string += length + "#" + s;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_string;
        int i = 0;
        while (i < s.length()) {
            int j = i;
            while (s[j] != '#') j++;
            int length = stoi(s.substr(i, j - i));
            string str = s.substr(j + 1, length);
            decoded_string.push_back(str);
            i = j+1+length;
        }
        return decoded_string;
    }
};
