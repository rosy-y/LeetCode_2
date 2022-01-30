class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> vv;
        vector<string> v;
        DFS(vv, v, s, 0);
        return vv;        
    }
    
    void DFS(vector<vector<string>> &vv, vector<string> &v, string &s, int i) {
        if (i >= s.size()) vv.push_back(v);
        
        for (int j=i; j<s.size(); j++) {
            if (isCheck(s, i, j)) {
                v.push_back(s.substr(i, j-i+1));
                DFS(vv, v, s, j+1);
                v.pop_back();
            }
        }
    }
    
    bool isCheck (string &s, int m, int n) {
        while (m < n) {
            if (s[m++] != s[n--]) return false;
        }
        return true;
    }
};
