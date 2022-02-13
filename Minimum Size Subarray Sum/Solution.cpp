class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r = 0, sum = 0;
        int size = nums.size(), len = INT_MAX;
        
        for (int i=0; i<size; i++) {
            sum += nums[i];
            while (target <= sum) {
                len = min(len, i-l+1);
                sum -= nums[l++];
            }
        }
        return len == INT_MAX ? 0 : len;
    }
};
