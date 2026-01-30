class Solution {
public:
    bool isSubsequence(string s, string t) {
        string ans = "";
        int k = 0;
        int j = 0;
        for(int i=0;i<t.length();i++){
            if(s[j]==t[k]){
                ans+=t[i];
                k++;
                j++;
            }
            else{
                k++;
            }
        }
        if(ans==s){
            return true;
        }
        return false;
    }
};
