class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        
        for (int n : nums) m[n]++;
        
        int res = 0;
        for (auto iter : m) {
            if (iter.second == 1) res = iter.first;
        }
        return res;
    }
};
