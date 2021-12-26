class Solution {
public:
    string countAndSay(int n, string say="1") {
        if (n == 1) return say;        
        int i=0, s = say.size();
        string str = "";
        
        while (i < s) {
            int j = i;
            while (i<s && say[i]==say[j]) i++;
            str += to_string(i-j) + say[j];
        }  
        return countAndSay(n-1, str);
    }
};
