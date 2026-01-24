class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        vector<int>& arr = customers;
        int k = minutes;
        int n = arr.size();
        int prevSum = 0;
        for(int i=0;i<k;i++){
            if(grumpy[i]==1){
                prevSum += arr[i]; 
            }
        }
        int maxSum = prevSum;
        int i=1;
        int j = k;
        int maxIdx = 0;
        while(j<n){
            int curr = prevSum;
            if(grumpy[j]==1){
                curr += arr[j];
            }
            if(grumpy[i-1]==1){
                curr -= arr[i-1];
            }
            if(maxSum<curr){
                maxSum = curr;
                maxIdx = i;
            }
            prevSum = curr;
            i++;
            j++;
        }
        for(int i=maxIdx;i<maxIdx+k;i++){
            grumpy[i] = 0;
        }
        int sum = 0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
                sum += arr[i];
            }
        }
        return sum;
    }
};
