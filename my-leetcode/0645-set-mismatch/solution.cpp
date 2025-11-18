class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it : mp){
            if(it.second!=1){
                ans.push_back(it.first);
               
            }
        }
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int actual = n*(n+1)/2;
        int sum = 0;
        for(auto i : s){
            sum = sum+i;
        }
        ans.push_back(actual-sum);
        return ans;
    }
};
