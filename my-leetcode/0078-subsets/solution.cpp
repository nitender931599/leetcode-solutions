class Solution {
public:

    void helper(int index, int n, vector<vector<int>>&ans, vector<int>&nums, vector<int>&temp){
        if(index==n){
            ans.push_back(temp);
            return;
        }
        helper(index+1,n,ans,nums,temp);
        temp.push_back(nums[index]);
        helper(index+1,n,ans,nums,temp);
        temp.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        vector<int>temp;
        helper(0,n,ans,nums,temp);
        return ans;
    }
};
