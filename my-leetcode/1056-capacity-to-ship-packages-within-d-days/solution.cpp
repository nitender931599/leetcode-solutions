class Solution {
public:

    int calc(vector<int> &weights, int cap){
        int days = 1;
        int load = 0;

        for (int w : weights) {
            if (load + w > cap) {
                days++;
                load = w;
            } else {
                load += w;
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
        }
        int maxi = *max_element(weights.begin(), weights.end());
        int left = maxi;
        int right = sum;
        while(left<=right){
            int mid = left + (right - left) / 2;
            int total = calc(weights, mid);
            if(total<=days){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return left;
    }
};
