class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        if (n < 4) return {};
        vector<vector<int>> vv;
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n-3; i++) {
            if(i==0 || (i>0 && nums[i] != nums[i-1])) {   
            if (nums[i]+nums[i+1] > target-nums[i+2]-nums[i+3]) break;
            if (nums[i]+nums[n-3] < target-nums[n-2]-nums[n-1]) continue;
            
            for(int j=i+1; j<n-2; j++) {        
                if(j==i+1 || (j>i+1 && nums[j] != nums[j-1])) {
                    if(nums[i]+nums[j] > target-nums[j+1]-nums[j+2]) break;
                    if(nums[i]+nums[j] < target-nums[n-2]-nums[n-1]) continue;
                    
                    int k=j+1, l=n-1;
                    while(k < l) {
                        if(nums[k]+nums[l]==target-nums[i]-nums[j]) {
                            vv.push_back({nums[i],nums[j],nums[k],nums[l]});
                            while(k<l && nums[k] == nums[k+1]) k++;
                            while(k<l && nums[l] == nums[l-1]) l--;
                            k++; l--;
                        }
                        else if(nums[k]+nums[l] < target-nums[i]-nums[j]) k++;
                        else l--;
                    }
                }
            }
        }
    }
         return vv;
    }
};
