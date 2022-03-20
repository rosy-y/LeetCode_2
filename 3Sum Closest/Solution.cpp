class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int sum = nums[0] + nums[1] + nums[n-1];        
        
        if (n == 3) return sum;  // check
        for (int i=0; i<n-2; i++) {
            int j = i+1, k = n-1;
            while (j < k) {
                int tmp = nums[i] + nums[j] + nums[k];
                if (tmp > target) k--;
                else if (tmp == target) return target;
                else j++;
                if (abs(tmp-target) < abs(sum-target)) sum = tmp;
            }            
        }
       return sum; 
    }
};
