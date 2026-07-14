class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> Left (nums.size());
        Left [0] = 1;
        for (int i=1; i<nums.size(); i++) Left [i] = Left [i-1] * nums [i-1];
        vector <int> Right (nums.size());
        Right [nums.size()-1] = 1;
        for (int i=nums.size()-2; i>=0; i--) Right [i] = Right [i+1] * nums [i+1];
        vector <int> Answer (nums.size());
        for (int i=0; i<nums.size(); i++) Answer [i] = Left [i] * Right [i];
        return Answer;
    }
};
