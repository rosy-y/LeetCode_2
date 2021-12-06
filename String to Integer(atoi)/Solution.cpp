class Solution {
public:
    int myAtoi(string s) {
        int sign = 1, i = 0;
        while (s[i] == ' ') i++;  // 공백 뛰어넘기
        if (s[i] == '-' || s[i] == '+')
            sign = s[i++] == '-' ? -1 : 1;
        
        int ans = 0;
        while ('0' <= s[i] && s[i] <= '9') {
            if (ans > INT_MAX/10 || ans == INT_MAX/10 && s[i]-'0' > 7) 
                return sign == 1 ? INT_MAX : INT_MIN;
            ans = ans*10 + (s[i++]-'0');
        }        
        return sign * ans;
    }
};
