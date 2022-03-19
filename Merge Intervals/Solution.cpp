ublic:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> vv;
        
        for (auto i : intervals) {  // check
            if (vv.empty() || vv.back()[1] < i[0]) vv.push_back(i);  
            else vv.back()[1] = max(vv.back()[1], i[1]);
        }
        return vv;
    }
};
