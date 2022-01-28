class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int cur = 1, res = 1;
        
        for (int i=1; i<nums.size(); i++) {
            if (nums[i] != nums[i-1]) {
                if (nums[i-1]+1 == nums[i]) cur++;
                else {
                    res = max(res, cur);
                    cur = 1;  // 초기화
                }
            }
        }
        return max(res, cur);
    }
};
