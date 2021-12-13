class Solution {
public:
    void toParen(vector<string>&v, int l, int r, string now) {
        if (l > 0) toParen(v, l-1, r, now+"(");
        if (l < r) toParen(v, l, r-1, now+")");
        if (!l && !r) {
            v.push_back(now); return ;
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        toParen(v, n, n, "");
        return v;
    }
};
