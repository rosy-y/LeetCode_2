class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> vv;
        
        for (string s : strs) {
            string tmp = s;
            sort(tmp.begin(), tmp.end());
            m[tmp].push_back(s);
        }
        for (auto n : m) vv.push_back(n.second);
        return vv;
    }
};
