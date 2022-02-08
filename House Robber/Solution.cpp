class Solution {
public:
    int rob(vector<int>& nums) {
        int a = 0, b = 0;
        
        for (int i=0; i<nums.size(); i++) {
            int sum = max(a+nums[i], b);
            a = b;
            b = sum;
        }
        return b;
    }
};
