class Solution {
public:
    int count(int num){
        int rem = 0;
        while(num>0){
            int digit = num%10;
            rem = digit + rem*10;
            num = num/10;
        }
        return rem;
    }
    
    int mirrorDistance(int n) {
        int helper = count(n);
        return abs(n-helper);
    }
};
