class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        int p = nums[0];
        pre[0] = 1;
        for(int i=1;i<n;i++){
            pre[i] = p;
            p = p*nums[i];
        }
        vector<int> suf(n);
        p = nums[n-1];
        suf[n-1] = 1;
        for(int i=n-2;i>=0;i--){
            suf[i] = p;
            p = p*nums[i];
        }
        for(int i=0;i<n;i++){
            nums[i] = pre[i]*suf[i];
        }
        return nums;
    }
};
