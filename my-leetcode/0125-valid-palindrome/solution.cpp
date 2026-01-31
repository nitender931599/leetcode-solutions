class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i]) || isdigit(s[i])){
                ans+=tolower(s[i]);
            }
        }
        string f = ans;
        reverse(ans.begin(), ans.end());
        if(ans==f){
            return true;
        }
        return false;
        
    }
};
