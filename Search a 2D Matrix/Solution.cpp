class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int l = 0, r = m * n - 1;
        
        while (l <= r) {
            int mid = (r-l)/2 + l;
            int cur = matrix[mid/n][mid%n];
            if (cur > target) r = mid - 1;
            else if (cur < target) l = mid + 1;
            else return true;
        }
        return false;
    }
};
