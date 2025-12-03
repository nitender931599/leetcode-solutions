class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int gg = g.size();
        int ss = s.size();
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        // int l=0,r = 0; // l-> cookie
        int l,r;
        l =r=0;
        while(l<ss && r < gg){
            if(g[r]<=s[l]){
                cout<<"jj";
                r=r+1;
            }
            l=l+1;
        }
        return r;
    }
};
