class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>d;
        map<int, int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto g : m){
            if(g.second>n/3){
                d.push_back(g.first);
            }
        }
        return d;
    }
};
