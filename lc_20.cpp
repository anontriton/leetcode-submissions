// https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> pairs;
        pairs.insert({{'(',')'},{'{','}'},{'[',']'}});

        stack<char> st;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                auto corr_bracket = pairs.find(c);   // lookup only for openers
                st.push(corr_bracket->second);       // push the EXPECTED closer
            }
            else if (c == ')' || c == '}' || c == ']') {
                if (st.empty() || st.top() != c) return false;
                st.pop();
            }
        }

        return st.empty();
    }
};
