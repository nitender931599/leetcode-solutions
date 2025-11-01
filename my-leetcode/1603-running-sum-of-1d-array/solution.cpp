class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> num(n);
        num[0] = nums[0];
        for(int i=1;i<n;i++){
            num[i] = num[i-1] + nums[i];
        }
        return num;
    }
};
