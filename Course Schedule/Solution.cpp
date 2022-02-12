class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> vv(numCourses);
        vector<int> bfs, v(numCourses, 0);
        
        for (auto p : prerequisites) {
            vv[p[1]].push_back(p[0]);
            v[p[0]]++;
        }
        
        for (int i=0; i<numCourses; i++) {
            if(!v[i]) bfs.push_back(i);
        }
        for (int j=0; j<bfs.size(); j++) {
            for(auto q : vv[bfs[j]]) {
                if (--v[q] == 0) bfs.push_back(q);
            }
        }
        
        return bfs.size() == numCourses;
    }
};
