class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vv = {{}};
        
        for (int n : nums) {
            int s = vv.size();
            for (int i=0; i<s; i++) {
                vv.push_back(vv[i]);  // sub(n)={sub(n-1), sub(n-1)+n}
                vv.back().push_back(n);
            }
        }
        return vv;
    }
};
