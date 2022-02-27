class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<long> s;
        
        for (int i=0; i<nums.size(); i++) {
            long n = nums[i];
            if (i > k) s.erase(nums[i-k-1]); 
            
            auto j = s.lower_bound(n - t);   
            if (j != s.end() && *j-n <= t) return true;
            s.insert(nums[i]);
        }
        return false;
    }
};
