class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size() / 3;
        unordered_map<int, int> m;
        vector<int> v;
        
        for (int a : nums) m[a]++;
        
        int ele = 0;
        for (auto b : m) {
            if (b.second > n) {
                ele = b.first;
                v.push_back(ele);
            }
        }
        return v;
    }
};
