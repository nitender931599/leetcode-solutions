class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n = nums1.size();
        int m = nums2.size();
        for(int i=0;i<n;i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<m;i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        int left = 0;
        int right = ans.size()-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(ans.size()%2==0){
                // if(ans[mid]==ans[ans.length()/2]){
                //     right = mid-1;
                // }
                // else{
                //     left = mid+1;
                // }
                return (ans[mid]+ans[mid+1])/2.0;
            }
            else{
                return ans[mid];
            }
        }
        return -1;
    }
};
