class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int balance = 0;
        for(auto c : s){
            if(c == '('){
                if(balance>0){
                    ans.push_back('(');
                }
                
                balance++;
            }
            else{
                balance--;
                if(balance>0){
                ans.push_back(')');
                }
            }
        }
        return ans;
    }
};
