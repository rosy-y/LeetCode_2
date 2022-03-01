class Solution {
public:
    int calculate(string s) {
        int size = s.size();
        int curN = 0, pre = 0, res = 0;
        char sign = '+';
        
        for (int i=0; i<size; i++) {
            char curC = s[i];
            if (isdigit(curC)) curN = (curN*10) + (curC-'0');
            if (!isdigit(curC) && !iswspace(curC) || i == size-1) {
                
                if (sign == '+' || sign == '-') {
                    res += pre;
                    pre = (sign == '+') ? curN : -curN;
                }
                else if (sign == '*') {
                    pre = pre * curN;
                }
                else if (sign == '/') {
                    pre = pre / curN;
                }
                
                sign = curC;
                curN = 0;
            }
        }
        res += pre;
        return res;
    }
};
