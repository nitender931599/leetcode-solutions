class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightsum = 0;
        int leftsum = 0;
      
        for(int i=0;i<nums.size();i++){
            rightsum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(leftsum == rightsum - leftsum - nums[i]){
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
};
