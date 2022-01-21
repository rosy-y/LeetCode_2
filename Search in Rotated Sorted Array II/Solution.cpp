class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1;
        
        while (l <= r) {
            int mid = (r-l)/2 + l;
            if (nums[mid] == target) return true;
                        
            if (nums[l] < nums[mid]) {
                if  (target<nums[mid] && nums[l]<=target) r = mid-1;
                else l = mid+1;
            }
            else if (nums[l] == nums[mid]) l++;  // 중복처리
            else {
                if (nums[mid]<target && target<=nums[r]) l = mid+1;
                else r = mid-1;
            }
        }
        return false;
    }
};
