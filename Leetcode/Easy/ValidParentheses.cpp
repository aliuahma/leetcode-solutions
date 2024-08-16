class Solution {
public:
    bool isValid(string s) {
        stack<char> store;
        for(char ch : s) {
            if(ch == '(' || ch == '[' || ch == '{') {
                store.push(ch);
            } else {
                if (store.empty() || 
                    (ch == ']' && store.top() != '[') ||
                    (ch == '}' && store.top() != '{') ||
                    (ch == ')' && store.top() != '(')) {
                    return false;
                }
                store.pop();
            }
        }
        return store.empty();
    }
};
