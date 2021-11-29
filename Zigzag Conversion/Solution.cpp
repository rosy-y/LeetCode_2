class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        vector<string> v(min(numRows, int(s.size())));
        int row = 0;
        bool flag = false;

        for (char c : s) {
            v[row] += c;
            if (row == 0 || row == numRows - 1) flag = !flag;
            row += flag ? 1 : -1;
        }

        string ans;
        for (string str : v) ans += str;
        return ans;
    }
};
