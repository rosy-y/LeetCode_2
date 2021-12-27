class Solution {
public:
	int jump(vector<int>& nums) {
		int step=0, jump=0, maxN=0;
	
		for(int i=0; i<nums.size()-1; i++){
			maxN = max(maxN, nums[i]+i);
			if(i >= jump){
				jump = maxN;
				maxN = 0;
                step++;
			}
		}
		return step;
	}
};
