class Solution {
public:
    static bool comp(int a, int b) {
        return to_string(a)+to_string(b) > to_string(b)+to_string(a);
    }
    
    string largestNumber(vector<int>& nums) {
        string str = "";
        sort(nums.begin(), nums.end(), comp);
        
        for (auto n : nums) str += to_string(n);
        return str[0] == '0' ? "0" : str;
    }
};
