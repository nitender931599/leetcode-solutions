class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i]) || isdigit(s[i])){
                ans.push_back(tolower(s[i]));
            }
        }
        string ss = ans;
        reverse(ans.begin(), ans.end());
        if(ss==ans){
            return true;
        }
        return false;
    }
};
