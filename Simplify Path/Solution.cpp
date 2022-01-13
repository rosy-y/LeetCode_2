class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        vector<string> v;
        string s, res;
        
        while (getline(ss, s, '/')) {
            if (s == "" || s == ".") continue;
            if (s != "..") v.push_back(s);
            else if (!v.empty()) v.pop_back();
        }
        
        for (auto c : v) res += "/" + c;
        return res.empty() ? "/" : res;
    }
};
