// https://leetcode.com/problems/evaluate-reverse-polish-notation/description/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> result;

        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+") {
                int b = result.back();
                result.pop_back();
                int a = result.back();
                result.pop_back();
                
                int ans = a + b;
                
                result.push_back(ans);
                
            } else if (tokens[i] == "-") {
                int b = result.back();
                result.pop_back();
                int a = result.back();
                result.pop_back();
                
                int ans = a - b;
                
                result.push_back(ans);
                
            } else if (tokens[i] == "*") {
                int b = result.back();
                result.pop_back();
                int a = result.back();
                result.pop_back();
                
                int ans = a * b;
                
                result.push_back(ans);
                
            } else if (tokens[i] == "/") {
                int b = result.back();
                result.pop_back();
                int a = result.back();
                result.pop_back();
                
                int ans = a / b;
                
                result.push_back(ans);
                
            } else {
                result.push_back(stoi(tokens[i]));
            }
        }
        return result[0];
    }
};
