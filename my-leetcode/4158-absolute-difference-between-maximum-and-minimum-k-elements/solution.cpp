class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==1){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int sum = 0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int ssum = 0;
        sort(nums.begin(), nums.end(), greater<>());
        for(int i=0;i<k;i++){
            ssum+=nums[i];
        }
        return abs(sum-ssum);
    }
};
