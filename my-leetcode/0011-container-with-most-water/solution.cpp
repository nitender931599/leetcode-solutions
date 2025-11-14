class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxarea = 0;
        int l = 0;
        int r = n-1;

        while(l<r){
            int w = r-l;
            int h = min(height[l], height[r]);
            int curr = w*h;
            maxarea = max(maxarea, curr);
            height[l] < height[r] ? l++ : r--;
        }
        return maxarea;
    }
};
