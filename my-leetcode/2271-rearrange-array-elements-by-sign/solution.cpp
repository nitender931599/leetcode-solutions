class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans1;
        vector<int> ans2;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans1.push_back(nums[i]);
            }
            else{
                ans2.push_back(nums[i]);
            }
        }
        int k =0;
        int j = 0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i] = ans1[k];
                k++;
            }
            else{
                nums[i] = ans2[j];
                j++;
            }
        }
        return nums;
    }
};
