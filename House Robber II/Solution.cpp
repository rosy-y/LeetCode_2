class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        if (n < 2) {
            return n ? nums[0] : 0;
        }
        return max(money(nums, 0, n-2), money(nums, 1, n-1));
    }
    
private:
    int money(vector<int>& nums, int l, int r) {
        int pre = 0, cur = 0;
        
        for (int i=l; i<=r; i++) {
            int tmp = max(pre+nums[i], cur);
            pre = cur; cur = tmp;
        }
        return cur;
    }
};
