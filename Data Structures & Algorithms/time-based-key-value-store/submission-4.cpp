class TimeMap {
   private:
    unordered_map<string, vector<pair<int, string>>> store;

   public:
    TimeMap() {}

    void set(string key, string value, int timestamp) {
        store[key].push_back ({timestamp, value});
    }
    string get(string key, int timestamp) {
        if (store.count(key) == 0) return "";
        auto &arr = store[key];
        int left = 0, right = arr.size()-1;
        string res = "";
        while (left <= right) {
            int mid = left + (right-left)/2;
            if (arr[mid].first == timestamp) return arr[mid].second;
            else if (arr[mid].first < timestamp) {
                left = mid + 1;
                res = arr[mid].second;
            }
            else right = mid - 1;
        }
        return res;
    }
};
