class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        
        int sign = dividend>0 ^ divisor>0 ? -1 : 1;
        long a = labs(dividend), b = labs(divisor), ans = 0;
        
        
        while (a >= b) {
            long tmp = b, n = 1;
            while (tmp << 1 <= a) {
                tmp <<= 1;
                n <<= 1;
            }
            a -= tmp;
            ans += n;
        }
        return sign * ans;
    }
};
