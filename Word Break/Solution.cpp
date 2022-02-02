class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> v(s.size()+1, false);
        v[0] = true;
        
        for (int i=1; i<=s.size(); i++) {
            for (int j=0; j<i; j++) {
                string str = s.substr(j, i-j);
                if (v[j] && (find(wordDict.begin(), wordDict.end(), str) != wordDict.end())) {
                    v[i] = true;
                    break;
                }
            }
        }
        return v.back();
    }
};
