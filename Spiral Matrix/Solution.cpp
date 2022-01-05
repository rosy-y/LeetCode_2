class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<vector<int>> direct{{0,1}, {1,0}, {0,-1}, {-1,0}};
        vector<int> v;
        int row=matrix.size(), col=matrix[0].size();
        
        if (row == 0 || col == 0) return v;
        
        vector<int> cur{col, row-1};
        int dir=0, curr=0, curc=-1;  // 처음 시작 위치
        
        while (cur[dir%2]) {
            for (int i=0; i<cur[dir%2]; i++) {
                curr += direct[dir][0];
                curc += direct[dir][1];
                v.push_back(matrix[curr][curc]);
            }
            cur[dir%2]--;
            dir = (dir+1) % 4;
        }
        return v;         
    }
};
