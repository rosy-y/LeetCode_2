class Solution {
public:
    int reverse(int x) {
        long lo = 0;
        
        while (x) {
            lo = lo*10 + x%10;
            x /= 10;
        }
        return (lo<INT_MIN || lo>INT_MAX) ? 0 : lo;
    }
};
