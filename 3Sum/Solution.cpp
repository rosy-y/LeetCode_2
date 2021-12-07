class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vv;
        int n = nums.size();
        if (n < 3) return vv;
        
        sort(nums.begin(), nums.end());
        
        for (int i=0; i<n; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int second = i+1, last = n-1;
            while (second < last) {
                int sum = nums[i] + nums[second] + nums[last];
                if (sum > 0) last--;
                else if (sum < 0) second++;
                else {  // 0인 경우
                    vv.push_back({nums[i], nums[second], nums[last]});
                    while (second < last && nums[second] == nums[second+1]) second++;  // 중복처리
                    while (second < last && nums[last] == nums[last-1]) last--;
                    second++; last--;
                }                    
            }
        }
        return vv;
    }
};
