class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int flag = 0;
        
        while(left != right) {
            ++flag;
            left >>= 1;
            right >>= 1;
        }
        return left << flag;
    }
};
