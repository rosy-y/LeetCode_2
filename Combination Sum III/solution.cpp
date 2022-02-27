class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int sum) {
        vector<vector<int>> vv;
        vector<int> v;
        
        Comb(1, k, sum, v, vv);
        return vv;
    }
    
    void Comb(int cur, int k, int sum, vector<int>& v, vector<vector<int>>& vv) {
        if (v.size() == k) {
            if (sum == 0) vv.push_back(v);
            return;
        }
        
        if (cur > 9) return;
            
        Comb(cur+1, k, sum, v, vv);
        v.push_back(cur);
        Comb(cur+1, k, sum-cur, v, vv);
        v.pop_back();
    }
};
