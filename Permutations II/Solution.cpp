class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> vv;
        recur(nums, 0, vv);
        return vv;
    }

    void recur(vector<int> nums, int i, vector<vector<int>>& vv) {
        if (i==nums.size()) vv.push_back(nums);
        else {
            for (int j=i; j<nums.size(); j++) {
                if (i==j || nums[i] != nums[j]) {
                    swap(nums[i], nums[j]);
                    recur(nums, i + 1, vv);
                }
            }
        }
    }
};
