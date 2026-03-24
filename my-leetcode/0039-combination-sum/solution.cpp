class Solution {
public:

    void helper(int index, vector<int>&candidates, vector<int>&temp, vector<vector<int>>&ans, int target){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(candidates.size()==index || target<0){
            return;
        }
       
        temp.push_back(candidates[index]);
        helper(index,candidates,temp,ans,target-candidates[index]);
        temp.pop_back();
        helper(index+1,candidates,temp,ans,target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>ans;
        helper(0,candidates,temp,ans,target);
        return ans;
    }
};
