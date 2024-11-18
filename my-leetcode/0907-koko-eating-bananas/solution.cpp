class Solution {
public:
    int minEatingSpeed(vector<int>& v, int h) {
        int start = 0, end = 0, ans, mid, n = v.size();
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum += v[i];
        end = max(end, v[i]);
    }
    
    start = sum/h;
    if(!start)
        start = 1;
    while(start<=end){
        mid = start+(end-start)/2;
        int totaltime = 0;
        for(int i=0;i<n;i++){
            totaltime += v[i]/mid;
            if(v[i]%mid){
                totaltime++;
            }
        }
        if(totaltime>h){
            start = mid+1;
        }
        else{
            ans = mid;
            end = mid-1;
        }
    }
    return ans;
    }
};
