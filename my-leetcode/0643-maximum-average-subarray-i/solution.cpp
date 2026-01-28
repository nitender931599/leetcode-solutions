class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int prevsum = 0;
        for(int i=0;i<k;i++){
            prevsum += nums[i];
        }
        double maxi = prevsum;
        int i = 1;
        int j = k;
        while(j<n){
            double curr = prevsum + nums[j] - nums[i-1];
            maxi = max(maxi,curr);
            prevsum = curr;
            i++;
            j++;
        }
        return maxi/k;
    }
};
