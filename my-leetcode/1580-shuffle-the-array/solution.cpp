class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int j=0;
        int k=2*n/2;
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[j]);
            ans.push_back(nums[k]);
            j++;
            k++;
        }
        return ans;
    }
};
