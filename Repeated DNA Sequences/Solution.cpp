class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> v;
        unordered_map<string, int> m;
        
        for (int i=0; i+10<=s.size(); i++) {
            string str = s.substr(i, 10);
            if (m[str] == 1) v.push_back(str);
            m[str]++;
        }
        return v;
    }
};
