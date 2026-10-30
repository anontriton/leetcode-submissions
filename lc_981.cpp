// https://leetcode.com/problems/time-based-key-value-store/

class TimeMap {
public:
    TimeMap() {}

    unordered_map<string, vector<pair<int, string>>> m;

    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp, value});
    }

    string get(string key, int timestamp) {
        string ans;
        auto v = m.find(key);

        if (v == m.end()) {
            return "";
        }

        int low = 0;
        int high = (v->second).size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2; // avoid overflow

            int timestamp_prev = v->second[mid].first;

            if (timestamp_prev <= timestamp) {
                ans = v->second[mid].second;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};
