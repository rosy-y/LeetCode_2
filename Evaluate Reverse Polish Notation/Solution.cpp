class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        
        for (auto t : tokens) {
            if(t.size()>1 || isdigit(t[0])) s.push(stoi(t));
            else {
                auto a = s.top(); s.pop();
                auto b = s.top(); s.pop();
                switch (t[0]) {
                    case '+': b += a; break;
                    case '-': b -= a; break;
                    case '*': b *= a; break;
                    case '/': b /= a; break;
                }
                s.push(b);
            }
        }
        return s.top();
    }
};
