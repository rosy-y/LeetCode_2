class Solution {
public:
    int maxArea(vector<int>& height) {
        int lo = 0, hi = height.size()-1;
        int container = 0;
        
        while (lo < hi) {
            int h = min(height[lo], height[hi]);  // 세로길이
            container = max(container, (hi-lo)*h);
            if (height[lo] <= h) lo++; 
            if (height[hi] <= h) hi--;
        }
        return container;
    }
};
