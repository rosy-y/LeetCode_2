class Solution {
public:
    bool canJump(vector<int>& nums) {
        int s = nums.size(), step = 0;
        
        for (int i=0; i<=step; i++) {  // i <= step 주의
            step = max(step, nums[i]+i);
            if (step >= s-1) return true;
        }
        return false;
    }
};
