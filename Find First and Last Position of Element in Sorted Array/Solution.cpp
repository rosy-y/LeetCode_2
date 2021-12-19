class Solution {
public:
    int bound(vector<int>& nums, int target) {
        int l=0, r = nums.size()-1;        
        while (l <= r) {
            int mid = (r-l)/2 + l;
            if (nums[mid] < target) l = mid + 1;
            else r = mid - 1;
        }
        return l;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = bound(nums, target);
        int right = bound(nums, target+1)-1;
        if (left<nums.size() && nums[left]==target) return {left, right};
        else return {-1, -1};        
    }
};
