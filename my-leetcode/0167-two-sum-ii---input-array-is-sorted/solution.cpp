class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int left = 0;
        int right = n-1;
        while(left<=right){
            int curr = numbers[left] + numbers[right];
            if(target == curr){
                return {left+1,right+1};
            }
            else if(target<curr){
                right--;
            }
            else{
                left++;
            }
        }   
        return {};
    }
};
