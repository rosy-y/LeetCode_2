class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> vv;
        
        int i = 0;
        for(; i<intervals.size(); i++) {
            if(newInterval[1] < intervals[i][0]) break; // 새로운 간격이 왼쪽에 있을 때         
            if(newInterval[0] > intervals[i][1]){       // 오른쪽
                vv.push_back(intervals[i]);
                continue;
            }
            
            newInterval[0] = min(newInterval[0], intervals[i][0]);  // 그 외
            newInterval[1] = max(newInterval[1], intervals[i][1]);
        }
               
        vv.push_back(newInterval); 
        vv.insert(vv.end(), intervals.begin()+i, intervals.end());
        return vv;
    }
};
