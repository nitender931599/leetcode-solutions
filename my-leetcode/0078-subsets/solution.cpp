class Solution {
public:
    vector<vector<int>>result;
    void backtrack(int ind, vector<int>&nums, vector<int>&current){
        result.push_back(current);
        for(int i=ind;i<nums.size();i++){
            current.push_back(nums[i]);
            backtrack(i+1,nums,current);
            current.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>current;
        backtrack(0,nums,current);
        return result;
    }
};
