class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> vv;
        recur(nums, 0, vv);
        return vv;
    }
    
    void recur(vector<int> nums, int i, vector<vector<int>>& vv) {
        if (i == nums.size()) vv.push_back(nums);
        else {
            for (int j=i; j<nums.size(); j++) {
                swap(nums[i], nums[j]);
                recur(nums, i+1, vv);
            }
        }
    }
};
