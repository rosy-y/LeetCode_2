class Solution {
public:
    int numDecodings(string s) {
        s = "0" + s;
        int one = 0, two = 1, str = 0;
        
        for (int i=1; i<s.size(); i++) {
            if (s[i] != '0') str += two;
            if ("09" < s.substr(i-1, 2) && s.substr(i-1, 2) < "27") str += one;
            one = two;
            two = str;
            str = 0;
        }
        return s.empty() ? 0 : two;
    }
};
