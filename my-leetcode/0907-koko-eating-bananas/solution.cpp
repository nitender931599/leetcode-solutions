class Solution {
public:

    double calc(vector<int> &piles, int k){
        long long sum = 0;
        for(int i=0;i<piles.size();i++){
            sum += (piles[i]+k-1)/k;
        }
        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        while(left<=right){
            int mid = left + (right - left) / 2;
            long long totalh = calc(piles, mid);
            if(totalh<=h){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return left;
    }
};
