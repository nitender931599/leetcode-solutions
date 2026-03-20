class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs.back();
        int i=0;
        while(i<first.size() && i<last.size() && last[i]==first[i]){
            i++;
        }
        return first.substr(0,i);
    }
};
