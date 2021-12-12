class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> alpha = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
            };
        vector<string> blank;
        blank.push_back("");
        if (digits.empty()) return {};
        
        for (auto num : digits) {
            vector<string> res;
            for (auto a : alpha[num-'0']) {
                for (auto b : blank) {
                    res.push_back(b + a);
                }
            }
            blank.swap(res);
        }
        return blank;
    }
};
