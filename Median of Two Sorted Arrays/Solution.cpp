class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {        
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort (nums1.begin(), nums1.end());
        
        int size = nums1.size();
        if (size == 1) return nums1[0];
        else if (size %2 == 1) {
            return nums1[(size-1)/2.0]; //2.0
        }
        int sum = 0;        
        sum = nums1[size/2-1] + nums1[size/2];
        return sum / 2.0;
    }
};
