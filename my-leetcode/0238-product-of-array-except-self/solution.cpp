class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int p = 1;
        vector<int> temp(n, 1);
        for(int i=1;i<n;i++){
            temp[i] = temp[i-1] * nums[i-1];
        }
        int suffix = 1;
        for(int i=n-1;i>=0;i--){
            temp[i] = temp[i] * suffix;
            suffix = suffix * nums[i];
        }
        return temp;
    }
};
