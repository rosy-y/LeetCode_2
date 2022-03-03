class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n, 1);
        
        for(int i=1; i<n; i++){
            v[i] = v[i-1] * nums[i-1];
        }
        
        int cur = 1;
        for(int j=v.size()-1; j>0; j--){
            cur *= nums[j];
            v[j-1] *= cur;
        }
        return v;
    }
};
