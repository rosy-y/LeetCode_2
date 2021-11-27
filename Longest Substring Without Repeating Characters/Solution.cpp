class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> m;
        int start = -1, maxstr = 0;
        
        for (int i=0; i<s.size(); i++) {
            if (m.count(s[i]) != 0) { // key 값에 해당하는 value 갯수
                start = max(start, m[s[i]]);
            }
            m[s[i]] = i;            
            maxstr = max(maxstr, i-start);
        }
        return maxstr;
    }
};
