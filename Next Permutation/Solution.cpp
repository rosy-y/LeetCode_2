class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size()-1, l = i;
        for (i; i>0 && nums[i-1]>=nums[i]; i--); // 처음으로 감소하는 곳
        
        if (i > 0) {
            for (l; nums[l]<=nums[i-1]; l--);            
            swap(nums[i-1], nums[l]);
        }
        reverse(nums.begin()+i, nums.end());
    }
};
