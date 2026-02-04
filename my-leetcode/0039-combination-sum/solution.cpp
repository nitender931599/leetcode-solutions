class Solution {
public:

    void combine(int ind, int target, vector<int>&ds,vector<vector<int>>&ans, vector<int>&arr){
        if(ind==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            combine(ind,target-arr[ind],ds,ans,arr);
            ds.pop_back();
        }
        combine(ind+1,target,ds,ans,arr);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int>ds;
        combine(0,target,ds,ans,arr);
        return ans;
    }
};
