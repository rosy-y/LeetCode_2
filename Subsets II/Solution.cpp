class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort (nums.begin(), nums.end());
        vector<vector<int>> vv = {{}};
        vector<int> v;
        
        for (auto n : nums) {
            int s = vv.size();
            for (int i=0; i<s; i++) {
                v = vv[i];
                v.push_back(n);
                if (find(vv.begin(), vv.end(), v) == vv.end())  // 중복 처리
                    vv.push_back(v);
            }
        }
        return vv;
    }
};
